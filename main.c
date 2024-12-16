#include <stdio.h>

int main()
{
    char concorrenti[] = {'F','R','G','T','C','L','B'};
    int posizione;

    printf("inserisci la posizione del concorrente:\n");
    scanf("%d",&posizione);

    if(posizione >= 1 && posizione <= 6) {
        printf("%c e' arrivato %d",concorrenti[posizione-1],posizione);
    }
    else {
        printf("posizione non valida");
    }


    return 0;
}
