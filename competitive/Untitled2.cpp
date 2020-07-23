#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
long long nd(long long number)
{
    int digits = 0;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}





int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,sm,yo,pw,mx ;
    slld(t) ;
    while(t--){
        slld(n);
        slld(m) ;
        mx=m ;
        if(n>m)
            mx=n ;
        x=nd(n) ;
        y=nd(m) ;
        p=10;
        sm=0 ;
        pw=1;


          for(i=0;i<min(x,y);i++){
               k=n%p;
            l=m%p ;
            if(k==9)
                sm=sm+9*pw ;
            else if(l==0)
                sm=sm+9*pw ;
            else {
                yo = k+l ;
                if(yo>9)
                    yo=9 ;
                sm=sm+yo*pw ;
            }
            pw=pw*10 ;

              m=m/10 ;
              n=n/10;

          }
         mx=m ;
        if(n>m)
            mx=n ;
        for(;i<max(x,y);i++){
            k=mx%p;
            mx=mx/10 ;
            sm=sm+k*pw ;
            pw=pw*10 ;



        }
           cout<<sm<<'\n';


    }

return 0 ;
}
