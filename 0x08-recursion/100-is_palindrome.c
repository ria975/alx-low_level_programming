/*
 * file: 100-is_palindrome.c
 * Auth: lady-ria
 */

#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - returns the length of a string
 * @s: the string to measured
 *
 * Return: the length of the string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
