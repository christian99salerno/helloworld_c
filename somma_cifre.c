#include <stdio.h>

int main () {
 
int num;


  printf("Digita un numero di 3 cifre ");
  scanf("%d", &num);
  
if (num < 100 || num>999) printf("ERRORE\n");  
   
else {

 int c=num%10;
 num = num/10;
 int b=num%10;
 num = num/10;
 int a=num;

   
   
   /*int a=num/100;
    *int b=(num-(a*100))/10;
    *int c=(num-(a*100))-b*10;
    */
  
   int somma=a+b+c;

   printf("La somma delle 3 cifre e' %d\n", somma);

}  


  return 0;
}
