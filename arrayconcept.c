#include<stdio.h>
int main()
{
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	 int a[n],i;
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("array element are\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
}
