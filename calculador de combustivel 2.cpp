#include <stdio.h>

int main (){
	
	
	float gasolina, alcool;

 gasolina = 0;
 alcool = 0;

 printf("\n Digite o pre�o da gasolina\n");
 scanf("%f", &gasolina);

 printf("\n digite o pre�o do alcool\n");
 scanf("%f", &alcool);

 if(alcool <=0.7*gasolina)
    {
    printf("\n\n abaste�a com alcool");
 } else {printf("\n\n abaste�a com gasolina");
 }


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
