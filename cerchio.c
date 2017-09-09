#include <stdio.h>

int main ()
{

const double pi = 3.14159;

int r;


printf("Digita il raggio del cerchio ");
scanf("%d", &r);

double perimetro = 2*r * pi;
double area = (r * r) * pi;

printf("La circonferenza misura %f\n", perimetro);
printf("La sua area e' %f\n", area);

return 0;
}
