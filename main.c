#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sortear(char nomes[10][20], int qtd) {
    srand(time(NULL));
    int sorteado = rand() % qtd;
    printf("O sorteado foi: %s \n", nomes[sorteado]);
}

void nome(char nomes[10][20], int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Digite o nome: ");
        scanf("%s", nomes[i]);
    }
}

void quantidade(int *qtd) {
    printf("Digite a quantidade de nomes: ");
    scanf("%d", qtd);
}

int main() {
    int qtd;
    quantidade(&qtd);
    char nomes[10][20];
    nome(nomes, qtd);
    sortear(nomes, qtd);
    return 0;
}