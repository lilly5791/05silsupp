#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n = 0;
	char c;
	
	printf("inpute sentence : ");
	
	while ((c = getchar()) != '\n')
	{
		if ('0' <= c && c <= '9')
			n++;
	}
	printf("you have %d numbers in this sentence.\n", n);
	
	return 0;
}
