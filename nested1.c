#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter of the first value: ");
	scanf("%d",&a);
	printf("Enter of the second value: ");
	scanf("%d",&b);
	printf("Enter of the third value: ");
	scanf("%d",&c);
	printf("Enter of the fourth value: ");
	scanf("%d",&d);
	if(a>b){
	if(a>c){
	if(a>d)	
		printf("The maximum value is: %d",a);
	}
	else if(b>c){
		printf("The maximum value is: %d",b);
	}
	else if(b>d){
		printf("The maximum value is: %d",d);
	}else{
		printf("The maximum value is: %d",c);
	}	
}
}
