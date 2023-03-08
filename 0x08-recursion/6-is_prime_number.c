#include "main.h"

/**
 * is_prime_helper - determine if the number is prime
 * @n: test par
 * @i: divisor
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_helper(int n, int i)
{
if (n <= 1)
{
return (0);
}
else if (n % i == 0 && i != n)
{
return (0);
}
else if (i == n)
{
return (1);
}
else
{
return is_prime_helper(n, i + 1);
}
}

/**
 * is_prime_number - check if number is prime
 * @n: test par
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
return is_prime_helper(n, 2);
}
