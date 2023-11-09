#include <stdio.h>

/**
 * print_menu - prints the restaurant menu
 *
 * @name: the dish name
 * @category: its categorization
 * @description: the ingredients description
 * @price: the dish price
 * @code: the dish code
 *
 * Return: void
*/

void print_menu(const char *name, const char *category, const char *description, int price, unsigned int code)
{
	printf("Name: %s\n", name);
	printf("Category: %s\n", category);
	printf("Description: %s\n", description);
	printf("Price: LE %d\n", price);
	printf("Code: 0x%x\n", code);
	printf("\n");
}

/**
 * main - entry point
 *
 * Return: void
*/

int main(void)
{
	print_menu("Fettuccine Alfredo", "Pasta", "Creamy pasta dish with fettuccine noodles tossed in a rich Parmesan cheese sauce.", 110, 0xdef0);
	print_menu("Fried Volcano Roll", "Sushi Roll", "6 pcs of Sushi roll. Shrimp, Avocado wrapped with Cheddar, Smoked Salmon, Panko Spicy Mayo.", 95, 0xabc1);
	print_menu("Chicken Ranch Pizza", "Pizza", "Grilled chicken, Tomato, Fresh Mushroom, Ranch Sauce, And Mozzarella cheese.", 160, 0xdef2);
	print_menu("Chicken Shawarma", "Wrap", "Tender marinated chicken, fresh vegetables, and a tangy sauce wrapped in a warm pita bread.", 45, 0xabc3);
	print_menu("Eclair", "Dessert", "A French pastry consisting of a delicate choux pastry shell filled with rich and creamy vanilla custard. Topped with a glossy chocolate ganache.", 30, 0xdef4);

	return (0);
}
