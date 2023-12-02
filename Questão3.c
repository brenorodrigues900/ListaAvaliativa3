#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char placa[10];
    char diaSemana[30];

    scanf("%s", placa);
    scanf("%s", diaSemana);

    if ((strlen(placa) == 8 && placa[3] == '-' && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) ||
        (strlen(placa) == 7 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]))) {

        char ultimo = placa[strlen (placa)-1];
            
        if (strcmp(diaSemana, "SEGUNDA-FEIRA") == 0) {
            if (ultimo == '0' || ultimo == '1') {
                printf("%s nao pode circular segunda-feira\n", placa);
            } else {
                printf("%s pode circular segunda-feira\n", placa);
            }
        } else if (strcmp(diaSemana, "TERCA-FEIRA") == 0) {
            if (ultimo == '2' || ultimo == '3') {
                printf("%s nao pode circular terca-feira\n", placa);
            } else {
                printf("%s pode circular terca-feira\n", placa);
            }
        } else if (strcmp(diaSemana, "QUARTA-FEIRA") == 0) {
            if (ultimo == '4' || ultimo == '5') {
                printf("%s nao pode circular quarta-feira\n", placa);
            } else {
                printf("%s pode circular quarta-feira\n", placa);
            }
        } else if (strcmp(diaSemana, "QUINTA-FEIRA") == 0) {
            if (ultimo == '6' || ultimo == '7') {
                printf("%s nao pode circular quinta-feira\n", placa);
            } else {
                printf("%s pode circular quinta-feira\n", placa);
            }
        } else if (strcmp(diaSemana, "SEXTA-FEIRA") == 0) {
            if (ultimo == '8' || ultimo == '9') {
                printf("%s nao pode circular sexta-feira\n", placa);
            } else {
                printf("%s pode circular sexta-feira\n", placa);
            }
        } else if (strcmp(diaSemana, "SABADO") == 0 || strcmp(diaSemana, "DOMINGO") == 0) {
            printf("Nao ha proibicao no fim de semana\n");
        } 
        else {
            printf("Dia da semana invalido\n");
        }
    } else {
        printf("Placa invalida\n");
        if( strcmp(diaSemana,"SEGUNDA-FEIRA" ) != 0 &&
            strcmp(diaSemana,"TERCA-FEIRA" ) != 0 &&
            strcmp(diaSemana,"QUARTA-FEIRA" ) != 0 &&
            strcmp(diaSemana,"QUINTA-FEIRA" ) != 0 &&
            strcmp(diaSemana,"SEXTA-FEIRA" ) != 0 &&
            strcmp(diaSemana,"SABADO" ) != 0 &&
            strcmp(diaSemana,"DOMINGO" ) != 0 
        ) {
            printf("Dia da semana invalido\n");
        }
    }

    return 0;
}
