#include<stdio.h>
int main()
{
	int count,count1,count2,count3;
	scanf("%d",&count);
	
	count1 = count/100;
	count2 = (count/10)%10;
	count3 = count%10;
	
	count=count1+count2*10+count3*100;
	
	printf("%d",count);
	
	return 0;
}
