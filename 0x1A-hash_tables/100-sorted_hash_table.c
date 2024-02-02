#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table to add/update the key/value to
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp, *prev;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	prev = NULL;

	while (temp != NULL && strcmp(temp->key, key) < 0)
	{
		prev = temp;
		temp = temp->next;
	}

	/* Key already exists, update value */
	if (temp != NULL && strcmp(temp->key, key) == 0)
	{
		free(temp->value);
		temp->value = strdup(value);
		if (temp->value == NULL)
			return (0);
		return (1);
	}

	/* Key doesn't exist, add new node */
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = temp;

	if (prev == NULL)
		ht->array[index] = new_node;
	else
		prev->next = new_node;

	/* Insert into sorted linked list */
	if (prev == NULL)
		ht->shead = new_node;
	else
		prev->snext = new_node;

	new_node->sprev = prev;
	new_node->snext = temp;

	if (temp == NULL)
		ht->stail = new_node;
	else
		temp->sprev = new_node;

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key from a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL && strcmp(temp->key, key) < 0)
		temp = temp->next;

	if (temp != NULL && strcmp(temp->key, key) == 0)
		return (temp->value);

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->snext != NULL)
			printf(", ");
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->sprev != NULL)
			printf(", ");
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}

	free(ht->array);
	free(ht);
}

