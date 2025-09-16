#include <stdio.h>
#include <stdbool.h>

int main(){
    int l;
    int b;
    printf("enter length:");
    scanf("%d",&l);
    printf("enter width:");
    scanf("%d",&b);
    
    //to calculate length/3
    int c=l/3;
    //to calculate width/2
    float d= b/2.0;
// to calculate l/3.0
    float e= l/3.0;
// to calculate length/width
    float f= (float)l/b;
// to compare
bool g=((b+l)/ (float) l)>( (float)l/b);
printf("The results obtained are:\n");
printf("length/3:%d\n",c);
    printf("width/2: %f\n",d);
    printf("length/3.0: %f\n",e);
    printf("length/width: %f\n",f);
    printf("comparison result (is (width+length)/length greater than (length+width)): %s\n", g ? "true" : "false");
    
    getchar();
    getchar();
    return 0;
}