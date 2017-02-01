#include <stdio.h>

int main () {

int a;
int b;

printf("Digita a ");
scanf("%d", &a);

printf("Digita b ");
scanf("%d", &b);

int somma=a+b;
int differenza=a-b;
int prodotto=a*b;
double divisione=a/b;

printf("La somma di a e b e' %d\n", somma);
printf("La differenza e' %d\n", differenza);
printf("Il prodotto e' %d\n", prodotto);
printf("Il quoziente e' %f\n", divisione);


  return 0;
}
