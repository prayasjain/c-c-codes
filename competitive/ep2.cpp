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

using namespace std ;
int main(){
long long t ,n,x,y,z=0,i,j,k ,l,m=0,p=0 ;
long long a[100001] ,b[100001] ;
slld(n) ;
slld(k) ;
for(i=0;i<n;i++){
    slld(a[i]) ;
}

for(i=0;i<n;i++){
    slld(b[i]) ;
}
sort(a,a+n ) ;
sort(b,b+n) ;

i=0;
j=0;
for(i=0,j=0;i<n;){
   if(abs(a[i]-b[j])<=k)
    {
        m++;
        i++;
        j++;
    }
    else if (a[i]>b[j]){
        j++;
    }
    else {
        i++;
    }
    if(i>=n || j>=n)
        break ;

}


printf("%lld",m);
return 0 ;
}
