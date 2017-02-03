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

int max = a;

if (b > max)
    max = b;
if (c > max)
    max = c;
if (d > max)
    max = d;
if (e > max)
    max = e;

printf("Il numero maggiore e' %d\n", max);

return 0;
}
