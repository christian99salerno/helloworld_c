#include <stdio.h>

int main () {
 
 int a, b;

 printf("Digita a ");
 scanf("%d", &a);
  
 printf("Digita b ");
 scanf("%d", &b);
 
 if(a==b){
   printf("I numeri sono uguali\n");
 }
 else if (a>b){
   printf("Il maggiore e' a: %d\n",a);
 }
 else{
   printf("Il maggiore e' b: %d\n",b);
 }
 
 return 0;
}
