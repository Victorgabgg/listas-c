/*Escrever um fluxograma e a linguagem C dos seguintes exerc�cios
1.	Recebas notas de um conjunto de K alunos. A vari�vel K representa a quantidade de alunos 
determinada pelo usu�rio e as vari�veis Nota1 e Nota2 representam respectivamente a primeira e a segunda 
nota de cada aluno. 
Calcule:
a.	A m�dia aritm�tica das duas notas de cada aluno.
b.	Exiba juntamente com a m�dia uma mensagem correspondente a tabela abaixo:
M�dia Aritm�tica	Mensagem
At� 3.0	-> Reprovado
Entre 3,0 e 7,0 ->	P3
Acima de 7.0  ->  Aprovado
c.	O total de: alunos aprovados, alunos de P3, alunos reprovados e a m�dia da classe. */
#define ex2


#ifdef ex1
#include <stdio.h>
#include <stdlib.h>
main(){
int k,i;
float nota1,nota2,media;
printf("Digite a quantidade de alunos\n");
scanf("%d",&k);
for(i=0;i<k;i++){
	printf("Digite a primeira nota\n");
	scanf("%f",&nota1);
	printf("Digite a segunda nota\n");
	scanf("%f",&nota2);
	media = (nota1 + nota2)/2;
	printf("A media desse aluno fica %.1f\n", media);
	if(media < 3){
	printf("Reprovado\n"); }
	else if(media >= 3 && media < 7) {
	printf("p3\n"); }
	else if(media > 7){
	printf("Aprovado\n"); } }
return (0);
}
#endif

/* 2. O card�pio de uma lanchonete  � o seguinte: 
Especifica��o  C�digo 	Pre�o
Cachorro quente	100		1,20
Bauru simples	101		1,30
Bauru com ovo	102		1,50
Hamb�rguer		103		1,20
Cheeseburguer	104		1,30
Refrigerante	105		1,00

Leia o c�digo do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.
Considere que a cada execu��o somente ser� calculado um item.
A quantidade de clientes � determinada pelo usu�rio.
*/

#ifdef ex2
#include <stdio.h>
#include <stdlib.h>
main(){
int k,i,codigo,quantidade;
float preco,total;
printf("Digite a quantidade de clientes\n");
scanf("%d",&k);

printf("Especificacao  	       Codigo    	Preco\n"
"Cachorro quente		100		1,20\n"
"Bauru simples		101		1,30\n"
"Bauru com ovo		102		1,50\n"
"Hamburguer		103		1,20\n"
"Cheeseburguer		104		1,30\n"
"Refrigerante		105		1,00\n"
"\n \n"
);

for(i=0;i<k;i++){
printf("Digite o codigo do pedido\n \n");
scanf("%d",&codigo);
if(codigo == 100){
preco = 1.20; }

else if(codigo == 101){
preco = 1.30; }

else if(codigo == 102){
preco = 1.50; }

else if(codigo == 103){
preco = 1.20; }

else if(codigo == 104){
preco = 1.30; }

else if(codigo == 105){
preco = 1.00; }

else{
	printf("\nCodigo invalido. Tente novamente.\n");
	break;
}

printf("Digite a quantidade do pedido\n \n");
scanf("%d",&quantidade);
total = preco * quantidade;
printf("O total desse cliente fica %.2f\n", total);
} 
return(0);
}
#endif

