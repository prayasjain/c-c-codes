
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>

#include<algorithm>

using namespace std;
bool comp(long long a ,long long b){

return a > b ;
}


int main(){
long long t ,n,x=0,y,z,i,j,k ,l,p,a[]={3,4,1,2,7,3,2},b[100001],c[100001] ;
sort(a,a+7,comp) ;
for(i=0;i<7;i++){
    cout<<a[i]<<' ' ;
}
return 0 ;
}





