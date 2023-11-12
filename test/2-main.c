#include "main.h"

int main(void)
{
	int count;

	printf("Test 2\n");

	count = _printf("Character: %c\n", 'A');
	printf("Expected: Character: A\n");
	printf("Actual:   Character: %c\n", 'A');
	printf("Count: %d\n\n", count);

	count = _printf("String: %s\n", "Hello, World!");
	printf("Expected: String: Hello, World!\n");
	printf("Actual:   String: %s\n", "Hello, World!");
	printf("Count: %d\n\n", count);

	count = _printf("Integer: %d\n", 123);
	printf("Expected: Integer: 123\n");
	printf("Actual:   Integer: %d\n", 123);
	printf("Count: %d\n\n", count);

	count = _printf("Another Integer: %i\n", -456);
	printf("Expected: Another Integer: -456\n");
	printf("Actual:   Another Integer: %i\n", -456);
	printf("Count: %d\n\n", count);

	return 0;
}

