#include<stdio.h>
int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int n;
	printf("Enter the number whose factorial is to be found: ");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,fact(n));
	printf("\n Name:Sanisha Kayastha Shrestha\t Roll no:22\t Section:B");
	return 0;
}
