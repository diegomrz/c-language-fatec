/* 7)	Leia um número inteiro representado pela variável N até que N seja igual a zero. 
Exiba uma mensagem informando se o número é par ou ímpar. */

#include <stdio.h>
int num1,mod=0;
float result;

int main(){
    printf("Digite a quantidade de numero pares: \n");
    scanf("%d", &num1);
    while(num1 != 0){
        num1--;
        mod = num1%2;
        if(mod == 0){
            printf("\n %d numero PAR.", num1);
        }
            else if (mod != 0) {
                printf("\n %d numero IMPAR.", num1);
            }
    }
}
