#include <stdio.h>

int main() {
    int alunos, chamada;
    float nota;

    scanf("%d\n", &alunos);

    int Aprovados[100] = {0}, Recuperacao[100] = {0}, Reprovado[100] = {0};
    float Notas[100] = {0};

    for (int i = 1; i <= alunos; i++) {
        scanf("%d - %f\n", &chamada, &nota);

        if (nota >= 7.0) {
            Aprovados[chamada] = 1;
            Notas[chamada] = nota;
        } else if (nota >= 5.0) {
            Recuperacao[chamada] = 1;
            Notas[chamada] = nota;
        } else {
            Reprovado[chamada] = 1;
            Notas[chamada] = nota;
        }
    }

    int totala = 0, totalr = 0;
    for (int c = 0; c < 100; c++){
        if(Aprovados[c] == 1){
            totala++;
        }
    }
    for (int c = 0; c < 100; c++){
        if(Recuperacao[c] == 1){
            totalr++;
        }
    }
    
    printf("Aprovados: ");
    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (Aprovados[i] == 1) {
            printf("%d (%.1f)", i, Notas[i]);
            count++;
            if (count < totala) {
                printf(", ");
            }
        }
    }
    printf("\n");

    printf("Recuperação: ");
    int count2 = 0;
    for (int i = 0; i < 100; i++) {
        if (Recuperacao[i] == 1) {
            printf("%d (%.1f)", i, Notas[i]);
            count++;
            count2++;
            if (count2 < totalr) {
                printf(", ");
            }
        }
    }
    printf("\n");

    printf("Reprovados: ");
    for (int i = 0; i < 100; i++) {
        if (Reprovado[i] == 1) {
            printf("%d (%.1f)", i, Notas[i]);
            count++;
            if (count < alunos) {
                printf(", ");
            }
        }
    }
    printf("\n");


    return 0;
}
