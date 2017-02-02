#include <stdio.h>

int main () 
{

int a, b, c, d, e;
int max;

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

max = a;

if(b > max) max = b;
else if(c > max) max = c;
else if(d > max) max = d;
else if(e > max) max = e;

printf("Il maggiore e': %d\n", max);


return 0;
}
