
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
long long a[100001] ;
using namespace std;
int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p ;
slld(n) ;
m= 0 ;
if(n==1)
{
    cout<<'1' ;
    return  0 ;
}
if(n==2){
    slld(a[0]) ;
    slld(a[1]) ;
    if(a[1]==a[0])
        cout<<'2' ;
    else
        cout<<'3' ;
    return 0 ;

}
m=0;
for(i=0;i<n;i++){
    slld(a[i]) ;
    if(i==1&& a[0]>a[1])
        m=m+2 ;
    else if(i==1 && a[0]<=a[1])
            m=m+1 ;
    else if(i>1) {
        if(a[i-1]>a[i-2]&&a[i-1]>a[i]){
            m=m+2 ;
        }
        else
            m=m+1 ;


    }
cout<<m<<' ' ;

}
if(a[n-1]>a[n-2])
    m=m+2 ;
else
    m=m+1 ;
cout<<m ;
return 0 ;
}
