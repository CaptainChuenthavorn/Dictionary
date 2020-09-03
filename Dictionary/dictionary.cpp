#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char str[101], ch;
	int i, j, l;
	printf("\n\nSort a word array in ascending order :\n");
	printf("--------------------------------------------\n");
	printf("Input the word : ");
	scanf("%[^\n]s", str);
	printf("string : %s", str);
	l = strlen(str);
	for (j = 0;j < l;j++)
	{
		if (str[j] > 64 && str[j] < 91)
		{
			str[j] = tolower(str[j]);
		}
	}
	for (i = 1;i < l;i++) {
		for (j = 0;j < l - i;j++) {
			if (str[j] > str[j + 1])
			{
				ch = str[j];
				str[j] = str[j + 1];
				str[j + 1] = ch;
			}

		}

	}
	printf("\n\nThe Result after sorting is : ");
	printf("%s\n", str);
	return 0;
}