#include <stdio.h>

#define TAB_STOP	8
#define MAX_LENGTH	1000


/*  ??? */

char line[MAX_LENGTH];
int position[MAX_LENGTH], number[MAX_LENGTH];
int get_line(void);
int number_of_blanks(int length);

int main()
{
	int length = 0, tmp, i;
	while ((length=get_line()) > 0)
	{
		tmp = number_of_blanks(length);
	}
	for (i=0; i<tmp; ++i)
		printf("%d ", position[tmp]);
	printf("\n");
	for (i=0; i<tmp; ++i)
		printf("%d ", number[tmp]);

	return 0;
}

int get_line(void)
{
	int i,c;

	for (i=0; i<MAX_LENGTH && (c=getchar())!=EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = '\n';
		++i;
	}
	line[i] = '\0';

	return i;
}

int number_of_blanks(int l)
{
	int i, tmp=0, space=0, tab=0;
	for (i=1; i<=l && (i-1)!='\n'; ++i)
	{
		if (line[i-1] == '\t')
                        ++tab;
                if (line[i-1] == ' ')
                        ++space;
		//if ((line[i-1]!=' ' && line[i-1]!='\t') && (line[i]==' ' || line[i]=='\t'))
		//{
		//	position[tmp] = i;
		//	number[tmp] = space + TAB_STOP * tab;
		//	++tmp;
		//	space = 0;
		//	tab = 0;
		//}
	}
	printf("%d   %d \n", tab, space);	
	return tmp;
}
