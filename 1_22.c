#include <stdio.h>

#define MAX_LINE_LENGTH		1000
#define LINE_FOLD_LENGTH	10
#define TAB_STOP		8

int get_line(void);
char line[MAX_LINE_LENGTH], line_space[MAX_LINE_LENGTH];
int tab2space(int length);
void fold_line(int number_cahr);

int main()
{
	int length=0, i, number_char=0;

	while ((length=get_line()) > 0)
	{
		number_char = tab2space(length);
		fold_line(number_char);
	}

	return 0;
}

int get_line(void)
{
	int i, c;

	for (i=0; i<MAX_LINE_LENGTH && (c=getchar())!=EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = '\n';
		++i;
	}
	line[i] = '\0';

	return i;
}

int tab2space(int l)
{
	int i, j=0, gap;

	for (i=0; i<l; ++i)	// attention here ! the condition can be line[i]!='\n', rather i='\n'
	{
		if (line[i] == '\t')
		{
			gap = TAB_STOP - j%TAB_STOP;
			for (int k=0; k<gap; ++k)
				line_space[j+k] = ' ';
			j = j + gap - 1;
		}
		else
			line_space[j] = line[i];
		++j;
	}
	line_space[j] = '\0';
	
	return j;
}

void fold_line(int number_char)
{
	int line_index, remainder, i, j;
	char short_line[LINE_FOLD_LENGTH+2];

	line_index = number_char / LINE_FOLD_LENGTH;
	remainder = number_char % LINE_FOLD_LENGTH;

	for (i=0; i<line_index; ++i)
	{
		for (j=0; j<LINE_FOLD_LENGTH; ++j)
			short_line[j] = line_space[i*LINE_FOLD_LENGTH+j];
		short_line[j] = '\n';
		short_line[j+1] = '\0';
		printf("%s", short_line);
	}

	for (i=0; i<remainder; ++i)
		short_line[i] = line_space[line_index*LINE_FOLD_LENGTH+i];
	short_line[i] = '\0';
	printf("%s", short_line);
}
