include "main.h"

/**
* _sqrt_helper - calculate the square root of a number
* @n: the number to calculate the square root of
* @i: the current candidate square root value
* Return: int
*/
int _sqrt_helper(int n, int i)
{
int result;

if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
else
{
result = _sqrt_helper(n, i + 1);
return (result);
}
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: int
 */
int _sqrt_recursion(int n)
{
int y;

if (n < 0)
{
return (-1);
}
else
{
y = _sqrt_helper(n, 0);
return (y);
}
}
