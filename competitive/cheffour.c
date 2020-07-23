#include<stdio.h>
#define slld(x) scanf("%lld",&x)
int main(){
long long t ,n,c ;
int p ;
slld(t) ;
while(t--){
    c=0 ;
    slld(n) ;
    while(n>0){
       p=n%10 ;
       if(p==4){
            c++ ;
       }
        n=n/10 ;
    }
    printf("%lld\n",c);

}

return 0 ;
}
