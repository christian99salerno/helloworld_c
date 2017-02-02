#include <stdio.h>

int main () 
{

int a, b, c, d, e;

printf("Digita a ");
scanf("%d", &a);

printf("Digita b ");
scanf("%d", &b);

printf("Digita c ");
scanf("%d", &c);

printf("Digita d ");
scanf("%d", &d);

printf("Digita e ");
scanf("%d", &e);

if (a==b && b==c && c==d && d==e) printf("I numeri sono uguali\n");

else if (a>b && a>c && a>d && a>e) printf("Il numero maggiore è %d\n",a);

else if (b>a && b>c && b>d && b>e) printf("Il numero maggiore è %d\n",b);

else if (c>a && c>b && c>d && c>e) printf("Il numero maggiore è %d\n",c);

else if (d>a && d>b && d>c && d>e) printf("Il numero maggiore è %d\n",d);

else if (e>a && e>b && e>c && e>d) printf("Il numero maggiore è %d\n",e);

return 0;
}
