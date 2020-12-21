#include <stdio.h>

#define CHAR_TYPE	27	// 26 english words + others; same for upper and lower case

int max(int *);

int main()
{
	int c, i, j, char_freq[CHAR_TYPE];

	for (i=0; i<CHAR_TYPE; ++i)
		char_freq[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if (c >= 'a' && c <= 'z')
			++char_freq[c - 'a'];
		else if (c >= 'A' && c <= 'Z')
			++char_freq[c - 'A'];
		else
			++char_freq[CHAR_TYPE-1];
	}
	printf("character frequency is: \n");
	for (i=0; i<CHAR_TYPE-1; ++i)
	{
		putchar('a' + i);
		printf(" ");
	}
	printf("others \n");
	for (i=0; i<CHAR_TYPE; ++i)
		printf(" %d", char_freq[i]);
	printf("\n");	
	
	// horizontal histogram
	printf("horizontal histogram: \n");
	for (i=0; i<CHAR_TYPE; ++i)
	{
		for (j=0; j<char_freq[i]; ++j)
			printf("-");
		printf("\n");
	}

	// vertical histogram
	printf("vertical histogram: \n");
	int max_value = max(char_freq);
	for (j=max_value; j>0; --j)
	{
		for (i=0; i<CHAR_TYPE; ++i)
			if (char_freq[i] >= j)
				printf(".");
			else
				printf(" ");
		printf("\n");
	}

	return 0;
}

int max(int *array)
{
	int max_value = array[0];
	for (int i=0; i<CHAR_TYPE; ++i)
		if (max_value < array[i])
			max_value = array[i];
	return max_value;
}
