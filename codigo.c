#include<stdio.h>

int main(){

    int i, n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(i = 0; i < n ; i++)
    {
        printf("\nValor %d", i + 1);
    }   
}
