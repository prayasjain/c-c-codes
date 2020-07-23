
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
using namespace std;
long long a[100001] ;

long long maxt(long long s , long long e){

    if(s==e){
        return a[s] ;
    }
    else {
        return max(maxt(s,(s+e)/2),maxt(((s+e)/2)+1,e)) ;
    }


}


int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,s,x2,y2 ;

slld(n);

for(i=0;i<n;i++){
    slld(a[i]) ;

}

slld(m) ;
slld(x) ;
slld(y) ;
s=0 ;
while(m--){

    x2=max(x,y) ;
    y2= min(x,y) ;

    s = s+maxt(y2,x2) ;


    x=(x+7)%(n-1);
    y=(y+11)%(n);
}
cout<<s ;
return 0 ;
}
