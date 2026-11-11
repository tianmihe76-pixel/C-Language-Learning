#include<stdio.h>
int main()
{
	
	int now,pass,ok,hour,min,hour1;
	scanf("%d",&now);
	scanf("%d",&pass);
	
    hour = (now + pass)/100;
    min = (now + pass)%100;
    ok = (hour*60 + min)/60*100 + (hour*60 + min)%60;
	
	printf("½á¹û£º%d",ok);
	
	return 0;
 } 
