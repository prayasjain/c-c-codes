#include <iostream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <vector>
#include <stdlib.h>
#include <memory.h>
#include <time.h>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <cassert>
#include <queue>
#include <numeric>
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)


int main(){
long long t ,n,x,y,z,i,j,k=1000000007 ,l,m,p,a[1000001]={0},s=0,bc[1000001]={0} ;
slld(n) ;
slld(t) ;
while(t--){
    slld(z) ;
    a[0]=0;
    bc[0]=0;
    slld(x) ;
    slld(y) ;
    if(z==1){
            j=1 ;
            s=0 ;
        for(i=x;i<n;i++){
            if(i<=y)
            {
                s=(s+j*(j+1))%k;
                j++ ;
            }
                a[i]=(a[i]+s)%k;

            }

        }
    }
    if(z==2){
            m=a[y]-a[x-1] ;
        if(m<0)
            m=m+k;
        printf("%lld\n",m);

    }
}
return 0 ;
}
