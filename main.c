#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("input integer:");
	scanf("%d", &i);
	
	if (i > 0)
		printf("positive");
	else if (i < 0)
		printf("negative");
	else
		printf("zero");
	
	return 0;
}
