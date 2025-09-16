#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];  

    printf("Enter 1st string: ");
    scanf("%s", s1);

    printf("Enter 2nd string: ");
    scanf("%s", s2);

    strcat(s1, s2);  
    printf("Concatenated string: %s\n", s1);

    return 0;
}
