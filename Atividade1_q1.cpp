#include <stdio.h>
int main() {
    float notas[] = {7.5, 4.0, 9.2, 5.5, 8.0, 6.5, 3.2, 10.0, 7.0, 5.8}; 
    float soma = 0, media = 0, maiorN = 0;
    int acimaMedia = 0; 
    for(int i = 0; i < 10; i++) {
        soma += notas[i]; 
        if(notas[i] > maiorN) {
            maiorN = notas[i];
        }
    }   
    media = soma / 10;
    for(int i = 0; i < 10; i++) {
        if(notas[i] >= media) {
            acimaMedia++;
        }
    }
    printf("Media: %.2f\n", media);
    printf("Quantidade de alunos acima da media: %d\n", acimaMedia);
    printf("Maior nota: %.1f\n", maiorN); 
    return 0;
}

