#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define maxn  100001
#define mod 1000000007
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    return b==0?a:gcd(b,a%b);
}
int main(){
int t ,n,x,y,z,i,j,k ,l,m,p,f,a[maxn] ;
slld(t) ;
while(t--){
    slld(n) ;
    f=2 ;
    for(i=0;i<n;i++)
    {
        slld(a[i]) ;
        f=a[0] ;
        for(i=1;i<n;i++)
            f=gcd(f,a[i]) ;

            }
    cout<<f<<'\n' ;

}

return 0 ;
}
