#include <stdio.h>
#define TAM 50 

int main() {
    char senha[TAM];
    int c = 0, t = 0; 
    scanf("%[^\n]%c", senha); 

    for (int i = 0; i < TAM; i++) {
        if (senha[i] == '\0') {
            break; 
        }

        if (senha[i] == '@' || senha[i] == '#' || senha[i] == '$' || 
            senha[i] == '%' || senha[i] == '&' || senha[i] == '*') {
            c++;
        }
        t++; 
    }
    if (t < 8) {
        printf("Invalida! A senha deve ter pelo menos 8 caracteres.\n");
    } else if (c == 0) {
        printf("Invalida! A senha deve conter pelo menos um caractere especial (@, #, $, etc).\n");
    } else {
        printf("Valida!\n");
    }

    return 0;
}
