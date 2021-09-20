#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

char input[100];

int main()
{
	printf("Input: ");
	gets_s(input);
	FILE* f = fopen("karaca.txt", "w");
	int i = strlen(input);
	for (input[i];i >= 0;i--)
	{
		if (input[i] == 'a')
		{
			fprintf(f, "0");
		}
		else if (input[i] == 'e')
		{
			fprintf(f, "1");
		}
		else if (input[i] == 'i')
		{
			fprintf(f, "2");
		}
		else if (input[i] == 'o')
		{
			fprintf(f, "3");
		}
		else if (input[i] == 'u')
		{
			fprintf(f, "4");
		}
		else
		{
			fprintf(f, "%c", input[i]);
		}

	}
	fprintf(f,"aca");

	fclose(f);
	return 0;
}