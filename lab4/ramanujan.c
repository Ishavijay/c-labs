#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the limit L: ");
    scanf("%d", &n);

    printf("Ramanujan numbers up to %d are:\n", n);

    for (int i = 1; pow(i,3) < n; i++) 
    {for (int j = i + 1; pow(j,3) < n; j++) 
    {for (int k = i + 1;pow(k,3)< n; k++) 
        {for (int l = k + 1; pow(l,3) < n; l++)
             {
    int s1 = pow(i,3) +pow(j,3);
    int s2 = pow(k,3)+ pow(l,3);

     if (s1 == s2 && s1 <= n) {
    printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", s1, i, j, k, l);
             } } }}}

    return 0;
}
