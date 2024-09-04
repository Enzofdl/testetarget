#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    printf("Insira o tamanho da string desejada!\n");
    scanf("%d", &n);


    char* a;
    a = (char*) malloc (n*sizeof(char));
    
    int contador = 0;

    printf("Agora, insira sua string\n");
    //Supondo que não haverá espaços.
    scanf("%s", a);

    for( int i = 0; i<(int) strlen(a); i++){
        // Tabela Ascii
        if(*(a+i) == 65 || *(a+i) == 97) contador++;
    }

    if(contador > 0) printf("A string informada contem a letra A!\n Ela se repetiu um total de %d vez(es)\n", contador);
    else printf("Sinto muito.... A string informada nao contem a letra A.\n");




    return 0;
}