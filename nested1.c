#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter of the first,second,third and fourth value: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b){
	if(a>c){
	if(a>d)	
		printf("The maximum value is: %d",a);
	}
	if(b>c){
		printf("The maximum value is: %d",b);
	}
	if(b>d){
		printf("The maximum value is: %d",d);
	}else{
		printf("The maximum value is: %d",c);
	}	
	}
}
