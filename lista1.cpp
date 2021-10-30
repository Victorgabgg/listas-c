/*Gere e exiba cada uma das seq��ncias abaixo com uma quantidade k de termos determinados pelo usu�rio. 
3, 6, 9, 12, 15,...
1/4, 1/8, 1/12, 1/16, 1/20,...*/
#define ex6

#ifdef ex1
#include <stdio.h>
main(){
int a,b=3,c=4,i;
printf("Digite a quantidade de termos desejada: ");
scanf("%d",&a);
for(i=0 ; i <a ; i++) {
printf("%d ",b);
b = b +3;
}
printf("\n");
for(i=0 ; i <a ; i++) {
printf("1/%d ",c);
c= c +4;
}
return(0);
}
#endif

/*Calcule e mostre a m�dia dos K primeiros pares e m�ltiplos de cinco.
OBS: K representa a quantidade de n�meros pares solicitados via teclado pelo usu�rio. 
Os n�meros pares dever�o ser gerados pelo programador.
		2, 4, 6, 8, 10,...*/
#ifdef ex2
#include <stdio.h>
main(){
int k,pares=0,soma=0,c1=0,c2=0,i=0;
float med=0;
printf("Digite a quantidade de numeros pares desejada ");
scanf("%d",&k);
for(i=0;i<k;i++){
	pares = pares + 2;
	printf("%d ",pares);
	if(pares % 5 == 0){
		soma = soma + pares;
		c2 = c2 + 1;
		}
	c1 = c1 + 1;
	}
med = (soma/c2);

printf("\nA media dos numeros pares divisiveis por 5 sao: %.2f",med);
return(0);
}
#endif



/*Receba K n�meros. Exiba a quantidade de n�meros pares negativos e quantas vezes o n�mero zero foi digitado. Obs1: K representa a quantidade de n�meros digitados pelo usu�rio.
Obs2: A vari�vel Num representa cada n�mero digitado pelo usu�rio.*/
#ifdef ex3
#include <stdio.h>
main(){
int k,i,par, cont=0,contpar=0,num[i];
printf("Digite a quantidade de numeros ");
scanf("%d",&k);

for(i=0; i<k; i++){
	printf("Digite um num ");
	scanf("%d",&num[i]);
	
if(num[i]%2==0&&num[i]<0){
contpar++;
}
if(num[i]==0){
cont++;
}
}
printf("A quantidade de numeros pares negativos e %d \n", contpar);
printf("A quantidade de zeros digitadas e %d ", cont);
return(0);
}
#endif

/*Receba K n�meros positivos. Cada n�mero recebido dever� ser armazenado na vari�vel Num e a vari�vel K representa a quantidade de n�meros solicitada pelo usu�rio. Exiba a quantidade de m�ltiplos 7.*/
#ifdef ex4
#include <stdio.h>
main(){
int k,i, cont=0,num[i];
printf("Digite a quantidade de numeros: ");
scanf("%d",&k);
for(i=0; i<k; i++){
	printf("Digite um num ");
	scanf("%d",&num[i]);
	if(num[i]%7==0){
		cont++;
}}
printf("A quantidade de multiplos de sete sao %d",cont);
return(0);
}
#endif

/*Receba via teclado um n�mero X, onde este n�mero representa a quantidade de termos que o usu�rio deseja. H representa cada um desses n�meros, calcule o produto dos X n�meros.
	OBS: H deve ser maior ou igual a 15.*/
#ifdef ex5
#include <stdio.h>
main(){
int x,i,produto=1,h[i];
printf("Digite a quantidade de numeros desejada: ");
scanf("%d",&x);

for(i=0; i<x; i++){
printf("Digite um num maior ou igual a 15: ");
scanf("%d",&h[i]);
if(h[i] < 15){
	printf("Numero incorreto, por favor tente novamente.\n");
	break;
}
}
for(i=0; i<x; i++){
produto *= h[i];
}
printf("O produto dos numeros digitados e %d", produto);
return(0);
}
#endif


/*Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel Peso armazena cada um do N pesos digitados. Calcule e mostre a m�dia dos pesos digitados.*/
#ifdef ex6
#include <stdio.h>
main(){
int n; 
float calc=0,media=0,i,peso;

printf("Digite o numero de pessoas: ");
scanf("%d",&n);
for(i=0; i<n; i++){
printf("Digite o peso: ");
scanf("%f",&peso);
calc = calc + peso;
}
media = calc/n;
printf("A media dos pesos digitados e %.2f",media);
return(0);
}
#endif




