#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print opcodes
 * @addr: address
 * @size: size of address
 */
void print_opcodes(char *addr, int size);

/**
 * main - entry point
 * @argc: arg count
 * @argv: storage
 * Return: 0
 */
int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes <= 0)
{
printf("Error\n");
return (2);
}

char *main_addr = (char *)main;
print_opcodes(main_addr, num_bytes);

return (0);
}

/**
 * print_opcodes - print opcodes
 * @addr: address
 * @size: size of address
 */
void print_opcodes(char *addr, int size)
{
for (int i = 0; i < size; i++)
{
printf("%02hhx ", addr[i]);
}
printf("\n");
}
