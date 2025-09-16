#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,e;
    printf("enter 1st number:\n");
    scanf("%d",&a);
    printf("enter 2nd number:\n");
    scanf("%d",&b);
    printf("enter 3rd number:\n");
    scanf("%d",&c);
    printf("enter 4th number:\n");
    scanf("%d",&d);
    printf("enter 5th number:\n");
    scanf("%d",&e);

    float avg=(float)(a+b+c+d+e)/5;
    printf("the avg is: %f",avg);
    
        getchar();
    return 0;
}