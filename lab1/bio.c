#include <stdio.h>

int main(){
    char name[20];
    int age;
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&age);
printf("name:%s and age:%d",name,age);
getchar();
    getchar();
    return 0;


}