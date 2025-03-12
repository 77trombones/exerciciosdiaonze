#include <stdio.h>

int main()
{
	
	float a;
	
	printf("digite o imc: ");
	
	scanf("%f",&a);
	
	if (18.5<=a){
		if (a<=24.9){
		puts("dentro do intervalo normal");
	}else{
		printf ("acima do normal");
	}
	}else{
		puts ("abaixo do intervalo normal");
	}

		
	
	
	return 0;
}
