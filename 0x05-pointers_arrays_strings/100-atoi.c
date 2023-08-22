#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: value of integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 &&
						(s[i] - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			result = result * 10 + (s[i] - '0');
		}
		else if (result != 0)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}
