#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3
#define MAX_STRLEN 30

struct s_studente{
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
    int eta;
    char classe[MAX_STRLEN];
};

typedef struct s_studente studente;

int main(int argc, char** argv) {
    int i;
    studente v[N];
    
    for(i=0;i<N;i++)
    {
        printf("inserisci il nome: ");
        scanf("%s", v[i].nome);
        printf("inserisci il cognome: ");
        scanf("%s", v[i].cognome);
        printf("inserisci l'eta': ");
        scanf("%d", &v[i].eta);
        printf("inserisci la classe: ");
        scanf("%s", v[i].classe);
       
    }
     
    for(i=0;i<N;i++)
    {
      printf("%s; %s; %d; %s\n",v[i].nome,v[i].cognome,v[i].eta,v[i].classe);
    }
    
    return (EXIT_SUCCESS);
}
