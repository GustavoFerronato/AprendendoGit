#include<stdio.h>

int main(){

    int i, n, soma = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(i = 0; i < n ; i++)
    {
        printf("\nValor %d", i + 1);
        soma += i;
        printf("\nValor da soma; %d", soma);

    }   
    printf("--------- adicionando uma nova branch ---------");
}
