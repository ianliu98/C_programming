#include <stdio.h>
#include <unistd.h>

main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		//sleep(5);
		c = getchar();
	}
}

// when we use interactive input, getchar() gets input from beginning to end of the string after press enter
// before we press enter, string is stored in buffer --> press enter means send the string to the program
// c != EOF is always true, unless we use ctrl+d in linux
//
// Process of this program with interactive input:
// 1. input "what?" in bash line --> this string is stored in buffer
// 2. press enter --> the string is sent to the program by "read" function
// 3. into the main function
// 4. c = getchar() gets the first character of the string --> "w"
// 5. c = "w" != EOF --> into while loop
// 6. putchar(c) --> put "w" to another buffer
// 7. c = getchar() gets 2nd char "h" --> this function always get next char
// 8. c = "h" != EOF --> into loop
// 9. all chars in "what?" != EOF, so there is no break point in the loop, unless we use ctrl+d
// 10. when there is no new input into putchar buffer, use "write" function to output string.
