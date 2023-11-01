#include "main.h"
#include <string.h>

/**
 * **strtow - splits a string into words
 *
 * @str: the string
 *
 * Return: NULL if str == NULL or str == ""
*/

#include <stdlib.h>
#include <string.h>

char **strtow(char *str) {
	int i, j, word_count = 0;
	char **words = NULL;

	if (str == NULL || *str == '\0') {
		return NULL;
	}

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
			word_count++;
		}
	}

	if (word_count == 0) {
		return NULL;
	}

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL) {
		return NULL;
	}

	i = 0;
	for (j = 0; str[j] != '\0'; j++) {
		if (str[j] != ' ') {
			if (j == 0 || str[j - 1] == ' ') {
				int word_length = 0;
				int start_index = j;
				int n;

				while (str[j] != '\0' && str[j] != ' ') {
					word_length++;
					j++;
				}

				words[i] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[i] == NULL) {
					for (n = 0; n < i; n++) {
						free(words[n]);
					}
					free(words);
					return NULL;
				}

				strncpy(words[i], &str[start_index], word_length);
				words[i][word_length] = '\0';
				i++;
			}
		}
	}

	words[word_count] = NULL;

	return words;
}
