# include <stdio.h>
# include <math.h>

int main()
{
    int a,b,c;
    printf("enter the length of first side:\n");
    scanf("%d",&a);
    printf("enter the length of second side:\n");
    scanf("%d",&b);
    printf("enter the length of third side:\n");
    scanf("%d",&c);
    if (a>0 && b>0 && c>0){
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b)){
        printf("Triangle is possible");
    }else
    {
        printf("triangle is not possible");
    }}
    else{
        printf("invalid input");
    }
    getchar();
    getchar();
    getchar();
    return 0;

}