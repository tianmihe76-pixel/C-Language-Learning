#include<stdio.h>

int findmax(int *a);
int main()
{
	int i,num, a[5];
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	int res = findmax(a);
	printf("%d",res);
	
	return 0;
}

int findmax(int *bb)
{
	int i;
	int max = bb[0];
	for(i=0;i<5;i++){
		if(bb[i]>max){
			max = bb[i];
		}
	}
	return max;
	}
