 #include <stdio.h>

//exercicio2
int main(){
	int a;
	int b;
	
	printf("Digite dois numeros");
	scanf("%d %d", &a, &b) ;


if(a==b){
		printf("a)a é igual a b? Sim\n");
	}	else{
			printf("a)a é igual a b? Não\n");
		}
		if(a*b <100){
			printf("b) a * b e menor do que 100? Sim\n");
		} else{
			printf("b) a * b e menor do que 100? Sim\n");
		}
		if(3*a<b){
			printf("c) o triplo de a e menor do que b? Sim\n");
		} else{
				printf("c) o triplo de a e menor do que b?Nao\n");
		}	
	if(a||b){
		printf("d) a b sao diferentes de zero? Sim\n");
	} else{
		printf("d) a b sao diferentes de zero? Sim\n");
	}
		if(a<0){
		printf("e) a e negativo? Sim\n");
	}
	else{
		printf("e)a e negativo? Não, a e positivo\n");
	}
	if(b<0){
	   printf("f)b e negativo? Sim\n");
    }  else{
	   printf("f)b e negativo? Nao, b e positivo\n");
   } 
}
 


	 
