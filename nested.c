#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter of the first number value: ");
	scanf("%d",&a);
	printf("Enter of the second number value: ");
	scanf("%d",&b);
	printf("Enter of the third number value: ");
	scanf("%d",&c);
	if(a<b){
	if(a<c){
		printf("The Minimum value is: %d",a);
	}
	else{
		printf("The Minimum value is: %d",b);
	}	
}
    else if(b<c){
    	printf("The Minimum value is: %d",b);
	}else{
		printf("The Minimum value is: %d",c);
	}
}