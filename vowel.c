#include <stdio.h>

int main(void) {
	char letter;
	scanf("%c",&letter);
	if(letter=='a' || letter=='e' ||letter=='i' ||letter=='o' ||letter=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
	return 0;
}
