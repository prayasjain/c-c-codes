
#include<stdio.h>
#include<math.h>

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
long long max(long long arr[], long long a , long long b){
    long long temp,i,m ;
    if(a>b){
            temp=a ;
            a=b;
            b=temp ;

    }
    m=0;
    for(i=a;i<=b;i++){
        if(m<arr[i])
            m=arr[i] ;
    }
    return m ;
}

int main(){

    long long n ,a[100001] ,m,x,y,i,mx,sum=0,b,c ;
    slld(n) ;
    for(i=0;i<n;i++)


     slld(a[i]) ;

    slld(m) ;
    slld(x) ;
    slld(y) ;

    //b=mini(x,y) ;
    //c=maxi(x,y) ;
    //printf("%lld %lld\n",b,c) ;

    //printf("%lld\n",sum) ;
    for(i=1;i<=m;i++){
            mx=max(a,x,y) ;
        x=(x+7)%(n-1);
        y=(y+11)%n;

    sum+=mx ;

    }
    printf("%lld\n",sum) ;

return 0 ;}
