#include <stdio.h>

int main () 
{

int a, b, c, d, e;
int max=0;

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

if(a>=b && a>=c && a>=d && a>=e) max=a;

else if(b>=a && b>=c && b>=d && b>=e) max=b;

else if(c>=a && c>=b && c>=d && c>=e) max=c;

else if(d>=a && d>=b && d>=c && d>=e) max=d;

else max=e;

printf("Il numero massimo e' %d\n",max);

return 0;
}
