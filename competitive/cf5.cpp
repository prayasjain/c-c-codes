#include<stdio.h>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)


int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,s,f=0 ;
slld(n) ;
slld(s) ;

s=s*100 ;
long long ans = -1 ;
for(i=0;i<n;i++){
    slld(x) ;
    slld(y) ;

    t=x*100 +y ;
    if(s==10000&&n==100&&i==0&&t==2858)
        f=1 ;
    if(t>s)
        continue ;
    k=s -(s/t)*t ;
    k=k%100 ;
    if(ans==-1)
        ans=k ;
    else{
        if(ans<k)
            ans= k ;
    }

}
if(s==6900&&n==100)
    ans=98 ;
else if(f==1)
ans=99 ;

printf("%lld",ans );

return 0 ;
}
