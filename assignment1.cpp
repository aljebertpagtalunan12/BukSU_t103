#include<stdio.h>

int main() 
{
	int a,b,sum,product,difference,quotient,remainder;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number ; ");
	scanf("%d",&b);
	sum= a+b;
	product= a*b;
	difference= a-b;
	quotient= a/b;
	remainder= a%b;
	printf("Sum is: %d", sum);
	printf("\nProduct is: %d", product);
	printf("\nDifference is: %d", difference);
	printf("\nQoutient is: %d", quotient);
	printf("\Remainder is: %d", remainder);
	return 0;
			
	
}
