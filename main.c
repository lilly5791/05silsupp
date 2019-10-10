#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ans = 50, my, n = 0;
	
	do
	{
		printf("inpute your answer! : ");
		scanf("%d", &my);
	
		if(my > ans)
			printf("Answer is smaller!\n"); 
		else if(my < ans)
			printf("Answer is bigger!\n");
		n++;
		
	}while (my != ans);
	
	printf("Congratulation! %d is right answer!\n you tried %d times", ans, n);
	
	return 0;
}
