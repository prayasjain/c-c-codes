
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
long long t ,n,x,y,z,i,j,k ,l,m,p ;
slld(t) ;
while(t--){
        m=0 ;
        y=0;
    long long freqt[10001]={0} ;
    slld(n);
    for(i=0;i<n;i++){
        slld(x) ;
        freqt[x]+=1 ;
        if(freqt[x]>m){
                m=freqt[x] ;
                y=x ;

        }
        else if(freqt[x]==m&&x<y)
        {
            y=x;

        }

    }
    printf("%lld %lld\n",y,m);
}
return 0 ;
}
