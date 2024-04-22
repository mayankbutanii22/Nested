#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter of the first,second and third number value: ");
	scanf("%d%d%d",&a,&b,&c);
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