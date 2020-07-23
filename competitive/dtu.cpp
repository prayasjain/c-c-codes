
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ;
slld(t) ;
while(t--){
    slld(n) ;
    if(n%4==0)
        cout<<"Second\n" ;
    else
        cout<<"First\n" ;
}
return 0 ;
}
