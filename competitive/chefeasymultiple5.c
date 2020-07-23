
#include<stdio.h>
#define sd(x) scanf("%d",&x)
int main(){
    int x ;
    float y ;
    sd(x) ;
    scanf("%f",&y) ;
    if(x%5==0&&y>=x+0.50){
        printf("%.2f",y-x-0.50) ;
    }
    else
        printf("%.2f",y) ;
return 0 ;}

