 #include <stdio.h>

//exercicio2
int main(){
	int a;
	int b;
	int c;

	printf("Digite dois numeros");
	scanf("%d %d %d", &a, &b, &c) ;

	if(a==b||a==c||b==c){
		printf("Os numeros sao repetidos\n");
		if(a<=b && a<=c){
			printf("%d\n", a);
		} else if(b<=c && b<=a){
			printf("%d\n", b);
		} else if(c<=a && c<=b){
			printf("%d\n", c);
		}
	} else{
		if(a>b && a>c){
			printf("%d\n", a);
		} else if(b>a && b>c){
			printf("%d\n", b);
		} else if(c>a && c>b){
			printf("%d\n", c);
		}
	
	if(a%2==0){
		printf("a e par\n");
	}
	else{
		printf("a e impar\n");
	}
	if(b%2==0){
		printf("b e par\n");
	}
	else{
		printf("b e impar\n");
	}
	if(c%2==0){
	   printf("c e par\n");
    }  else{
	   printf("c e impar\n");
   } 
} if(a>0){
	printf("a e positivo\n");
} else{
	printf("a e negativo\n");
} 
if(b>0){
	printf("b e positivo\n");
} else{
		printf("b e negativo\n");
}
 if(c>0){
	 	printf("c e positivo\n");
 } else{
	 	printf("c e negativo\n");
 }
}
	 
