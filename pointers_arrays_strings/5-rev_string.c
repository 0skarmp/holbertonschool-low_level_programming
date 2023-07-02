#include"main.h"

/**
 * rev_string - reverse string "backwards"
 * @s: string to be resersed
 */

void rev_string(char *s)
{
	int num, i, alm;
	char tmp;

	num = 0;

	while (s[num] != '\0')
	{
		num++;
	}
	alm = num ;
	if (1 % 2 ==0)

	for (i = 0; i < num / 2; i++)
	{
		tmp = s[i];
		s[i] = s[num];
		s[alm--] = tmp;
	}
}
