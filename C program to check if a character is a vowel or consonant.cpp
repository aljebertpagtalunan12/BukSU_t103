//C program to check if a character or letter is a vowel or consonant
#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter a character\n");
	scanf("%c", &ch);
	
	if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("%c is vowel\n", ch);
	}
	else
	{
		printf("%c is consonant\n", ch);
	
}
}

