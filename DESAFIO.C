#include <stdio.h>
#include <string.h>

#define QTDE 5


typedef struct {
char nome[50];
char corExercito[30];
int tropas;
} Territorio;

int main() {
Territorio mapa[QTDE];

printf("=== Cadastro de Territorios ===\n\n");

for(int i = 0; i < QTDE; i++) {
    printf("--- Territorio %d ---\n", i + 1);

 
    setbuf(stdin, NULL);

    printf("Nome: ");
    fgets(mapa[i].nome, sizeof(mapa[i].nome), stdin);
    mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0';

    printf("Cor do Exercito: ");
    fgets(mapa[i].corExercito, sizeof(mapa[i].corExercito), stdin);
    mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

    printf("Numero de tropas: ");
    scanf("%d", &mapa[i].tropas);

    printf("\n");
}


printf("\n=== Estado Atual do Mapa ===\n");
for(int i = 0; i < QTDE; i++) {
    printf("\nTerritorio %d\n", i + 1);
    printf("Nome: %s\n", mapa[i].nome);
    printf("Exercito (cor): %s\n", mapa[i].corExercito);
    printf("Tropas: %d\n", mapa[i].tropas);
}

return 0;


}
