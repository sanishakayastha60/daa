#include<stdio.h>
int gcd(int a,int b)
{
	int r;
	if(a==b)
	return b;
	else if(b==0)
	return a;
	else{
		while(b!=0)
		{
			r=a%b;
			a=b;
			b=r;
		}
		return a;
	}
}
int main()
{
	int a,b,n;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	n=gcd(a,b);
	printf("The gcd of %d and %d is %d",a,b,n);
	printf("\n Name:Sanisha Kayastha Shrestha\t Roll no:22\t Section:B");
	return 0;
}
