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
long long a[1000001] ;
long long fun(long long i , long long j , long long l){
long long t,s=0 ;
for(t=0;t<l;t++){
    s=s+a[i+t]*a[j+l-1-t] ;
}
return s ;

}

int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n);
m=0 ;
f=0 ;
for(i=0;i<n;i++)
    slld(a[i]);
for(l=1;l<=(n/2);l++){
    for(i=0;i+l<=n;i++){
        for(j=i+l;j+l<=n;j++){
            x=fun(i,j,l) ;
            if(f==0){
                m=x;
                f++;
            }
            if(x>m)
                m=x ;

        }
    }
}
printf("%lld\n",m);
return 0 ;
}
