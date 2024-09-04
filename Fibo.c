#include <stdio.h>
#include <stdlib.h>

// Utilização de DP para redução do tempo de execução do programa.
// O uso de variáveis globais pode ser considerado uma má prática de programação, mas para este simples exemplo de Programação Dinâmica, optei por utilizar mesmo assim.
// Por o programa estar na linguagem C, é preciso também uma variável global tamanho para utilizar a realocação dinâmica.
int *fibo;
int tamanho = 2;
int contemFibo(int num);

int main(){

    int n;
    printf("Insira um número N para verificar se faz parte da sequencia de Fibonacci\n");
    scanf("%d", &n);
    fibo = (int *) malloc (2*sizeof(int));
    fibo[0] = 1;
    fibo[1] = 1;
    
    if(contemFibo(n))printf("Seu numero pertence a sequencia\n");
    else printf("Seu numero nao pertence a sequencia....\n");



    return 0;
}

int contemFibo(int num){
    if(num == 1) return 1;
    tamanho++;
    fibo = (int*) realloc (fibo, tamanho*sizeof(int));
    // Utilização de DP para redução do tempo de execução do programa.
    fibo[tamanho-1] = fibo[tamanho-2] + fibo[tamanho-3];
    if(num == fibo[tamanho-1]) return 1;
    else if(num>fibo[tamanho-1]) return contemFibo(num);
    return 0;
}