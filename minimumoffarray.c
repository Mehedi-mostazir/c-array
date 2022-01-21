#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size],i,r,m,t;
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		m=arr[i];
		r=arr[i-1];
		if(m < r)
		{
			t=arr[i];
		}
	
	}
	printf("%d",t); 
}
