#include <stdio.h>

int main() {
char name[100];
double A, B, TOTAL;

scanf("%s", name);
scanf("%lf", &A);
scanf("%lf", &B);

TOTAL= B*.15 + A;

printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
