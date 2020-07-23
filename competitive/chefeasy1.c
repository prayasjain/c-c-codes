
#include<stdio.h>
#define sd(x) scanf("%d",&x)
int main(){
    int x ;
    while(1){
        sd(x) ;
        if(x==42)
            return 0 ;
        else
            printf("%d\n",x) ;
    }
}
