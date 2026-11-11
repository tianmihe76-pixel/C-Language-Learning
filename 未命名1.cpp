#include<stdio.h>
int main(void)
{
//输入数组
	int n,i,j=0,k=0;
	scanf("%d",&n);
	int a[n],even[n],odd[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2 == 0)
		{
			even[j]=a[i];
				j++;
		}else
		{
			odd[k]=a[i];
			k++;
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d ",even[i]);
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",odd[i]);
	}
	return 0;
//判断奇偶的函数 
//排序
//输出两个数组 
}
