#include <stdio.h>
#include <math.h>

int main (){
    int n1,n2,v1=0,v2=0,sum;
    printf("Write number one: ");
    scanf("%d", &n1);
    if(n1 >= -1000 && n1 <= 1000){
        v1 =v1 + n1;
    }
    printf("Write number two: ");
    scanf("%d", &n2);
    if(n2 >= -1000 && n2 <=1000){
        v2 = v2 + n2;
    }
    sum = v1 + v2;
 printf("%d", sum);
}