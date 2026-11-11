#include<stdio.h>
int main()
{
	int a,b,x,n=0;
	scanf("%d %d",&a,&b); 
	
	if(a>b){
		n=b;
		b=a;
		a=n;
	}
	
	for(x=a;x>=2;x--){
		if(a%x==0){
			if(b%x==0){
				printf("%d",x);
				goto out;
			}
		}
	}
	out:
	
	if(x=1){
		printf("no have");
	}
	printf("\n");
	
	return 0;
 }           
