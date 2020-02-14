#include <stdio.h>

//exercicio4
int main(){
	int salario;
	int prestacao;
	printf("Digite o salario e a prestacao");
	scanf("%d %d", &salario,&prestacao);
   

	 if(salario<0 || prestacao<0){
		printf("Valores Invalidos");
		} else if(prestacao> 0.2*salario){
		printf("Emprestimo nao concedido");
	}else{
		printf("Emprestimo concedido");	
		
	}
}
			
			
			 
	   
