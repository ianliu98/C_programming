#include <stdio.h>

char ch2[5];
enum hello {THIS=10, THAT=17, WHAT=13};

int main()
{
	/* declaration part */
	short int a;
	int c = 3355;
	long double b = 1.234e2;
	char line[1000] = "hello,""world";
	char ch[5];
	const int constant;
		


	/* test part */
	//constant += 10;
	//con2 = ch2;
	if (-1 < 1UL)
		printf("-1 < 1UL\n");
	else
		printf("-1 > 1UL\n");


	/* output part */

	//printf("%d\n",WHAT);
	//printf("%s\n", ch2);
	//printf("%s\n", line);
	//printf("the value is %c %c\n", '\176', '\x80');
	//printf("%d \n", a);


	return 0;
}

