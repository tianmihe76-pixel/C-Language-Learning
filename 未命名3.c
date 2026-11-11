#include<stdio.h>

int isp(int *a,int n);
int main(void)
{
    int i,n,a[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(isp(a,n)!=0)
        {
        printf("%d ",isp(a,n));  
        }
    }
    printf("\n");
    return 0;
}

int isp(int *a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=2;j<a[i]/2;j++)
        {
            if(a[i]==0||a[i]==1)
            {
                return 0;
            }else if(a[i]%j==0)
            {
                return 0;
            }else
            {
                return a[i];
            }
        }
            
    }
}
