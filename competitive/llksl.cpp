

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
long long t,a,b,ans ,n,x,y,z,i,j,k ,l,m,p ;
slld(a) ;
slld(b) ;
ans=a ;
while(a>=b){
    ans =ans +(a/b) ;
    a= a/b + (a%b) ;

}
printf("%lld",ans);
return 0 ;
}
