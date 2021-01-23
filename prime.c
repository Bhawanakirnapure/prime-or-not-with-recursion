#include<stdio.h>
int prime(int ,int);
int main()
{
	int n,c;
	printf("Enter a number:\n");
	scanf("%d",&n);
	c=prime(n,n/2);
	if(c==1)
	{
		printf("the no. is prime");
	}
	else
	{
		printf("the no. is not prime");
		
	}
	return 0;
}
int prime(int n, int i)
{
	
	if(i==1)
	{
		return 1;
	}
	else 
	{
		if(n % i==0)
		{
			return 0;
		}
		else
		{
			return prime(n,i-1);
		}
	}
}
