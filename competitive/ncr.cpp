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

#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)

int nCr[9000][9000] ;
const int MOD = 1e9+7;

void pre(){
    for(int i=0;i<=8000;i++)
        nCr[i][0] = 1 ;
    for(int i=1;i<=8000;i++)
        for(int j=1;j<=i;j++)
            nCr[i][j] = ( nCr[i-1][j-1] + nCr[i-1][j] )  ;
}
int c(int i,int j){

    if(j==0 &i!=0 )
        return 1 ;
    else if(i==j)
        return 1 ;
    else if (j==1)
        return i ;
    else
        return c(i-1,j-1)+c(i-1,j);
}
int main(){
   // pre() ;
printf("%d",c(3,2));
    int t ,n,x,y,z,i,j,k ,l,m,p,ms ;
int a[26]={0} ;
char s[1000001] ;
sd(l);
ss(s);
for(i=0;i<l;i++){
    k=(int)s[i] -97 ;
    a[k]++ ;
}
m=0;
for(i=0;i<26;i++)
   {
       if(a[i]>1){
            m=m+c[a[i]][2]+a[i];

       }
       else if(a[i]==1)
            m++ ;
   }
   printf("%d",m);

return 0 ;
}
