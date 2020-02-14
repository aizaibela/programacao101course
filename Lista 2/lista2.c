#include <stdio.h>

//exercicio3
int main(){
	int a;
	int b;
	int c;
    int d;
    int e;
    int impar = 0;
   

	printf("Digite cinco numeros");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) ;
   

	if(a%2!=0){
		impar++;
		} 
	   if(b%2!=0){
		impar++;
		} 
	   if(c%2!=0){
		impar++;
		}
	   if(d%2!=0){
		impar++;
		}
	   if(e%2!=0){
		impar++;
	    }
	printf("%d", impar);
}
		
