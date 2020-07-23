#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
int main(){
    long long t , x,y,z,b,w,c,i;
    slld(t);
    while(t--){
            slld(b) ;//3
        slld(w) ;//6
        slld(x) ;//9
        slld(y) ;//1

    slld(z) ;//1
        c=0 ;
    if(x+z<=y){
        printf("%lld\n",x*b+(x+z)*w) ;
        continue ;
    }
    else if(y+z<=x){
        printf("%lld\n",y*w+(y+z)*b) ;
        continue ;
    }
    else{
        printf("%lld\n",b*x+w*y) ;
        continue ;
    }
    }

return 0 ;
}
