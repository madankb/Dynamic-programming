#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;
int R_Rod_cutting(int P[],int len)
{
	int max=0;
	int j=0;
	
	for (int i=0;i<len;i++)
	{
		j=P[i]+R_Rod_cutting(P,len-i-1);
		
		if (j > max)
			max=j;
	}

	return max;
}
int D_Rod_cutting(int P[],int len)
{
	int val[len+1];
	
	val[0]=0;
	
	int max_val=0;
	
	for (int i=1;i<=len;i++)
	{
		max_val=INT_MIN;
		for (int j=0;j<i;j++)
		{
			max_val=max(max_val,P[j]+val[i-j-1]);
		}
		val[i]=max_val;
	}
	
	return val[len];	
}	
int main()
{
	int len=8;
	int P[8]={3,5,8,9,10,17,17,20};
	
	cout<<"Maximum R rod cutting has the value of : "<<R_Rod_cutting(P,len)<<endl;
	cout<<"Maximum D rod cutting has the value of : "<<D_Rod_cutting(P,len)<<endl;
}	
