// Write a C  program to check whether a positive, negative

#include<stdio.h>
#include<conio.h>
int main ()
{
	int n;
	printf("Enter a number");
	scanf("%d" ,&n);
	if(n>0)
	 printf("+ve number");
	else if(n<0)
	 printf("-ve number");
	else
	 printf("Neither +ve nor -ve number");
	getch();
}
