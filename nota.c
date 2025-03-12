#include <stdio.h>

int main()
{
	
	float a;
	
	printf("insira sua nota: ");
	scanf("%f",&a);
	
	
	if(a>=9){
		if(a<10){
			puts("sua nota e: A");
		}
	}
	
	if(a>=8){
		if(a<9){
			puts("sua nota e: B");
		}
	}
	
	if(a>=7){
		if(a<8){
			puts("sua nota e: C");
		}
	}
	
	if(a>=6){
		if(a<7){
			puts("sua nota e: D");
		}
	}
	
	if(a>=0){
		if(a<6){
			puts("sua nota e: F");
		}
	}
	
	
	return 0;
}
