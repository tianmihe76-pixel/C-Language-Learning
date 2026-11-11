#include<stdio.h>

int isp(int a,int n);
int main(void)
{
    int i,n;
    scanf("%d\n",&n);
    int a[n] ;
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(isp(a[i],n)==1)
        {
        printf("%d ",a[i]);  
        }
    }
    printf("\n");
    return 0;
}

int isp(int a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
    	if(a==0||a==1)
            {
                return 0;
            }
        for(j=2;j*j<=a;j++)
        {
			if(a%j==0)
            {
                return 0;
            }
        }
        return 1; 
    }
}
