#include<stdio.h>
int main(void)
{
	int n,i,j=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2 == 0)
		{
			a[i+1]=a[i];
			j=i;
		}
		printf("%d",a[i]);
	return 0;
}
