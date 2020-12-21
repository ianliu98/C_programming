#include <stdio.h>
#define MAX_LENGTH	1000

int reverse(char [], char []);

int main()
{
	char line[MAX_LENGTH], reversed_line[MAX_LENGTH];
	int length;
	while ((length = reverse(line, reversed_line)) > 0)
		printf("%s", reversed_line);
	return 0;
}

int reverse(char line[], char reversed_line[])
{
	int i, c, j;

	for (i=0; i<MAX_LENGTH && (c=getchar())!=EOF && c!='\n'; ++i)
		line[i] = c;
	for (j=0; j<i; ++j)
		reversed_line[j] = line[i-j-1];
	if (c == '\n'){
		reversed_line[j] = '\n';
		++j;
	}
	reversed_line[j] = '\0';

	return j;
}
