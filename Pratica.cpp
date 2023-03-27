#include <stdio.h>
#include <stdlib.h>

#define ex08


#ifdef ex01
//Programa que l� um n�mero real e informar a categoria. 
int main(){
float peso = 0; 

printf("Informe o peso do lutador\n");
scanf("%f",&peso);

if (peso < 65){
	printf("Valor do peso invalido");
}
else if(peso >= 65 && peso < 70){
	printf("Categoria Leve");
}
else if(peso >= 70 && peso < 75){
	printf("Categoria Ligeiro");
}
else if(peso >= 75 && peso < 83){
	printf("Categoria Meio Medio");
}
else if(peso >= 83 && peso < 91){
	printf("Categoria Medio");
}
else if(peso >= 91 && peso < 100){
	printf("Categoria Meio Pesado");
}
else{
	printf("Pesado");
}
}
#endif



#ifdef ex02
/*Escreva um algoritmo que, dentro de um la�o, leia valores num�ricos inteiros e totalize separadamente os pares e os
�mpares at� que o usu�rio digite 0. Ao final mostre na tela esses dois totais. */
int main() {
	int valores = 1;
	int impar = 0;
	int par = 0;
	
	while(valores != 0){
	printf("Digite um valor inteiro.\n");
	scanf("%d", &valores);
	if(valores % 2 == 0){
		par += valores;
	}
	else{
		impar += valores;
	}	
}
printf("\nA soma dos valores pares %d",par);
printf("\nA soma dos valores impares %d",impar);

printf("\n\nFim do programa\n");
}
#endif


#ifdef ex03
/*Escreva um algoritmo que calcule os N primeiros termos de uma PG com raz�o R e primeiro termo P1 fornecidos pelo
usu�rio. Deve ser calculada e apresentada a soma desses termos.*/
int main(){
int r = 0;
int termo = 0;
int n = 0;
int i = 0;

printf("Digite o N: ");
scanf("%d",&n);

printf("Digite o primeiro termo: ");
scanf("%d",&termo);

printf("Digite a razao R: ");
scanf("%d", &r);

for(i=0;i<n;i++){
printf("\n%d",termo);
termo = termo * r;
}}
#endif



#ifdef ex04
/*Escreva um algoritmo que leia um n�mero inteiro N e em seguida leia N n�meros reais, separando o menor e o maior,
apresentando-os na tela. */
int main(){
int n;
int i;
float f = 0; 
float menor = 0;
float maior = 0; 

printf("Digite o valor de N: ");
scanf("%d", &n);

for(i=0;i<n;i++){
	printf("Digite um valor real: ");
	scanf("%f", &f);
	if (i == 0){
	menor = f;
	maior = f; 
	}
	
	if(f < menor){
		menor = f;
	}
	if(f > maior){
		maior = f; 
	}}
	printf("\nO maior valor e: %.2f", maior);
	printf("\nO menor valor e: %.2f", menor);
}
#endif


#ifdef ex05
/*Escreva um algoritmo que apresente todos os valores inteiros divis�veis por 5 situados entre um valor m�nimo e um
m�ximo, fornecidos pelo usu�rio. Obrigatoriamente o m�nimo tem que ser maior que 1000 e o m�ximo tem quer
maior que o m�nimo */
int main(){
	int divisiveis; 
	int minimo = 0;
	int maximo = 0; 
 	int cont = 0; 
 	int i;
	
	while(minimo <= 1000){
	printf("Digite o valor minimo > 1000: ");
	scanf("%d", &minimo);
	}
	
	while(maximo <= minimo){
	printf("Digite o valor maximo > minimo: ");
	scanf("%d", &maximo); }
	
	
	for(i=minimo;i<=maximo;i++){
		if (i % 5 == 0){
			printf("\n%d", i);
		}
	}
}
#endif

#ifdef ex06
/*Desenvolva um algoritmo que leia do teclado um n�mero inteiro e mostre na tela se esse n�mero � primo ou n�o.
Lembrando: um n�mero primo � divis�vel somente por 1 e por ele mesmo.*/
int main(){
	int num = 0;
	int cont = 0;
	int i = 0;
	
	printf("Digite um numero para checar se e primo: ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++){
	if (num % i == 0){
	cont++;
	}}

if (cont == 2){
	printf("O numero e primo!");
	}
else{
	printf("O numero nao e primo! %d", cont);
	}
	return 0;
}
#endif

#ifdef ex07
/*Escreva um algoritmo que leia um n�mero inteiro N e em seguida leia N n�meros reais, calculando a soma e a m�dia
de todos os valores positivos fornecidos, ignorando os negativos. Cuidado no c�lculo da m�dia. Considerando que os
negativos ser�o ignorados, para calcular a m�dia dos positivos n�o se deve dividir a soma por N, mas sim pelo efetivo
n�mero de positivos digitados.*/
int main(){
	int n = 0;
	int i;
	float var = 0; 
	float soma = 0;
	int cont = 0;
	float media = 0; 
	
	printf("Digite o valor de N: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("\nDigite um valor real: ");
		scanf("%f", &var);
		if(var > 0){
			soma += var; 
			cont++;
		}
	}
	media = soma/cont; 
	printf("\nO valor da media dos valores digitados e: %.2f ",media);
}
#endif

#ifdef ex08
/*Reescreva o programa do item 7 de modo que, continue exibindo a soma e a m�dia dos n�meros positivos. Al�m
disso, ao inv�s de ignorar os negativos, os mesmos devem ser contados e o programa deve exibir quantos negativos
o usu�rio digitou.*/
int main(){
	int i;
	float var = 1; 
	float soma = 0;
	int cont = 0;
	int contneg = 0;
	float media = 0; 
	
	while(var != 0){
		printf("Digite digite um numero ou zero para sair: ");
		scanf("%f", &var);
		if(var > 0){
			soma += var;
			cont++;
		}else{
			contneg++;
		}
	media = soma/cont;
	printf("\nO total da media e: %.2f", media);
	printf("\nO total de numeros negativos digitados e: %d\n\n",contneg);	
	}
}
#endif
