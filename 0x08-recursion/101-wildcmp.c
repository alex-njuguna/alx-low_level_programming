#include "main.h"

/**
 * match_char - helper function to check if two characters match
 * @s1: character from the first string
 * @s2: character from the second string
 *
 * Return: 1 if the characters match, otherwise 0
 */
int match_char(char s1, char s2)
{
	if (s2 == '*' || s1 == s2)
	{
		return (1);
	}
	return (0);
}

/**
 * wildcmp_helper - helper function to compare two strings recursively
 * @s1: the first string
 * @s2: the second string
 * @s1_index: current index in s1
 * @s2_index: current index in s2
 *
 * Return: 1 if the strings match, otherwise 0
 */
int wildcmp_helper(char *s1, char *s2, int s1_index, int s2_index)
{
	if (s1[s1_index] == '\0' && s2[s2_index] == '\0')
	{
		return (1);
	}

	if (match_char(s1[s1_index], s2[s2_index]))
	{
		if (s2[s2_index] == '*')
		{
			if (s1[s1_index] == '\0')
			{
				return (wildcmp_helper(s1, s2, s1_index, s2_index + 1));
			}
			else
			{
				return (wildcmp_helper(s1, s2, s1_index + 1, s2_index) ||
					wildcmp_helper(s1, s2, s1_index + 1, s2_index + 1) ||
					wildcmp_helper(s1, s2, s1_index, s2_index + 1));
			}
		}
		else
		{
			return (wildcmp_helper(s1, s2, s1_index + 1, s2_index + 1));
		}
	}
	return (0);
}

/**
 * wildcmp - compares two strings and returns 1 if they match, otherwise 0
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if the strings match, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
int y;

y = (wildcmp_helper(s1, s2, 0, 0));
return (y);
}
