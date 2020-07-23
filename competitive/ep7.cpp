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

long long a[10001][10001] ;
long long b[100001] ;
long long A[100001] ;

int main(){
long long t ,n,x,y,z,i,j,k,s ,l,m,p,sum,r ;
   slld(n) ;
    slld(s) ;
    slld(m) ;
    for(i=1;i<=s;i++){
        slld(b[i]) ;
        for(j=1;j<=b[i];j++){
            slld(a[i][j]) ;
        }
    }

   while(m--){
       slld(p) ;
       if(p==1){
           slld(x) ;
           slld(y) ;
           for(i=1;i<=b[x];i++){
               A[a[x][i]]+=y ;
           }

       }
       else if(p==2){
            slld(x) ;
           sum=0;
           for(i=1;i<=b[x];i++){
               sum=sum+A[a[x][i]] ;
           }
           printf("%lld\n",sum) ;

       }
       else if (p==3){
           slld(l) ;
           slld(r) ;
           slld(y) ;
           for(i=l;i<=r;i++){
               A[i]+=y ;
           }

       }
       else if(p==4){
           slld(l) ;
           slld(r) ;
           sum=0;
           for(i=l;i<=r;i++){
               sum=sum+A[i] ;
           }
           printf("%lld\n",sum) ;


       }

   }






return 0 ;
}
