#include <stdio.h>
#include <string.h>

/* convert a string of hexadecimal digits into integer value */

int htoi(char *);
int power(int, int);

int main(int argc, char *argv[])
{
	if (argc < 2){
		fprintf(stderr, "Please input a Hex number!\n");
		return 1;
	}
	if (argc > 2){
		fprintf(stderr, "Too many inputs!\n");
		return 1;
	}

	int value = htoi(argv[1]);
	printf("The integer value of %s is %d.\n", argv[1], value);

	return 0;
}

int htoi(char *hex)
{
	int i=strlen(hex), j, tmp=0, value=0;
	//printf("length of string is: %d\n", i);
	if (hex[0]=='0' && (hex[1]=='x' || hex[1]=='X'))
	{
		//printf("there are 0X or 0x here!\n");
		for(j=2; j<i; ++j)
		{
			if (hex[j]>='a' && hex[j]<='f')
				tmp = hex[j] - 'a' + 10;
			else if (hex[j]>='A' && hex[j]<='F')
				tmp = hex[j] - 'A' + 10;
			else if (hex[j]>='0' && hex[j]<='9')
				tmp = hex[j] - '0';	// caution here! - '0' is necessary!!!
			else{
				fprintf(stderr, "please check the input value!\n");
				return -1;
			}
			value += power(16, i-j-1) * tmp;
		}
	}
	else
	{
		for(j=0; j<i; ++j)
                {
                        if (hex[j]>='a' && hex[j]<='f')
                                tmp = hex[j] - 'a' + 10;
			else if (hex[j]>='A' && hex[j]<='F')
                                tmp = hex[j] - 'A' + 10;
			else if (hex[j]>='0' && hex[j]<='9')
                                tmp = hex[j] - '0';
			else{
				fprintf(stderr, "please check the input value!\n");
                                return -1;
                        }
                        value += power(16, i-j-1) * tmp;
                }
	}

	return value;
}

int power(int base, int exponent)
{
	int result=1, i;

	if (exponent == 0)
		return result;
	else
	{
		for (i=0; i<exponent; ++i)
			result *= base;
		return result;
	}
}
