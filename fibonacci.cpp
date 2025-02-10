#include<stdio.h>
void fibonacci(int n){
	int n1=0,n2=1,n3;
	if(n==0)
	{
		printf("%d",n1);
	}
	else
	{
		printf("%d\t%d",n1,n2);
	for(int i=2;i<n;i++)
	{
		n3=n1+n2;
		printf("\t%d",n3);
		n1=n2;
		n2=n3;
	}
	}
}
int main()
{
	int n;
	printf("Enter the number for fibonacci series:");
	scanf("%d",&n);
	fibonacci(n);
	printf("\n Name:Sanisha Kayastha Shrestha\t Roll no:22\t Section:B");
	return 0;
}
