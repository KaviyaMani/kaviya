#include <stdio.h>

int main(void) {
	int number;
	scanf("%d",&number);
	if(number==0)
	{
		printf("zero");
	}
	else if(number<0)
	{
		printf("negative");
	}
	else
	{
		printf("positive");
	}
	// your code goes here
	return 0;
}
