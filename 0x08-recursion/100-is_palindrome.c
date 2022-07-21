#include "main.h"
int _lengthy(char *s);
int palindrome(char[], int st, int end);
/**
 * _is_palindrome - a function that returns 1 if string is a palindrome else 0
 * @s: The string to be checked.
 * Return: if string is palindrome return 1 else 0.
 */
int _is_palindrome(char *s)
{
	int len;

	len = _lengthy(s);

	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}
/**
 * _lengthy - finds the length count
 * @s: the character to be analyzed.
 * Return: length size
 */
int _lengthy(char *s)
{
	if (*s != '\0')
		return (1 + _lengthy(s + 1));
	return (0);
}
/**
 * palindrome - check if start and end of string matches
 * @str: the string to be checked
 * @end: end of string from is_palindrome, from _lengthy
 * @st: start of the string
 * Return: if string is palindrome
 */
int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}
