#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int u = 0;

	while (str[u])
	{
		while (!(str[u] >= 'a' && str[u] <= 'z'))
			u++;
		if (str[u - 1] == ' ' ||
	            str[u - 1] == '\t' ||
		    str[u - 1] == '\n' ||
		    str[u - 1] == ';' ||
		    str[u - 1] == ',' ||
		    str[u - 1] == '!' ||
		    str[u - 1] == '?' ||
		    str[u - 1] == '"' ||
		    str[u - 1] == '.' ||
		    str[u - 1] == '(' ||
		    str[u - 1] == ')' ||
		    str[u - 1] == '{' ||
		    str[u - 1] == '}' ||
		    u == 0)
			str[u] -= 32;

		u++;
	}

	return (str);
}
