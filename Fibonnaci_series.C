#include<iostream>
#include<stdio.h>
using namespace std;
int R_fibonacci(int n)//Time complexity f(n)=f(n-1)+f(n-2) which is O(n^2).
{
	if (n == 0)
		return 0;
	
	if (n == 1 || n == 2)
		return 1;
	else
		return R_fibonacci(n-1) + R_fibonacci(n-2);
}
int D_fibonnaci(int n)
{
	if (n == 0)
		return 0;
	
	if (n == 1 || n == 2)
		return 1;
	
	int R[n+1];
	
	R[0]=0;
	R[1]=1;
	R[2]=1;
	
	for (int i=3;i<=n;i++)//Time complexity O(n)
	{
		R[i]=R[i-1]+R[i-2];
	}
	
	return R[n];
}	
int main()
{
	printf("Recursive fibonnaci is : %d \n",R_fibonacci(8));
	
	printf("Dynamic fibonnaci is   : %d \n",D_fibonnaci(8));
	
}	
