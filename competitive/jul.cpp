#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;





long long a[100001] ;

long long mod = 1000000007 ;

int main(){

long long t ,n,x,y,z,i,j,k ,l,m,p,tp,f,sm ,v;
slld(n) ;
slld(t) ;
for(i=0;i<n;i++){
    slld(a[i]) ;
}
while(t--) {
    slld(f) ;
    if(f==4){
            sm=0 ;
            slld(x) ;
    slld(y) ;
    for(i=(x-1);i<y;i++)
       {
         sm=sm+a[i] ;
         sm=sm%mod ;

       }
       printf("%lld\n",sm) ;

    }else {
        slld(x) ;
        slld(y) ;
        slld(v) ;
        if(f==1){


                for(i=(x-1);i<y;i++)
            {
                a[i]+=v ;
                a[i]=a[i]%mod ;

            }

        }else if(f==2){
                for(i=(x-1);i<y;i++)
            {
                a[i]=a[i]*v ;
                a[i]=a[i]%mod ;

            }

        }else if(f==3){

            for(i=(x-1);i<y;i++)
            {
                a[i]=v ;

            }

        }



    }
}




return 0 ;
}
