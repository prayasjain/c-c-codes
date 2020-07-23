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

long long a[100001][2] ;

long long fun(long long i ,long long j){

if(a[i][0]<=a[j][0] &&  a[j][1]<=a[i][1])
    return i ;
else if(a[j][0]<=a[i][0] &&  a[i][1]<=a[j][1])
    return j ;
else return -1 ;
}

int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,b[100001],ans ;
slld(n) ;
for(i=0;i<n;i++){
    slld(a[i][0]) ;
    slld(a[i][1]) ;
    b[i]=0;
}
ans=n ;
for(i=0;i<n;i++){
    if(b[i]==0){
       for(j=i+1;j<n;j++){
            if(b[j]==0){
                if(fun(i,j)==i &&b[i]==0)
                {
                    b[i]=1;
                    ans-- ;
            }
            else if(fun(i,j)==j &&b[j]==0)
                {
                    b[j]=1;
                    ans-- ;
            }
       }
    }

}
}
printf("%lld",ans);
return 0 ;
}
