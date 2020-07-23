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
const int mod = 1e9+7;
int fact[100010];
int inv[100010];

int bin_pow(int o, int s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    int d = bin_pow(o, s/2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mod;
    return d;
}

int C(int n, int k) {
    int res = 1;
    res = (res * 1ll * fact[n]) % mod;
    res = (res * 1ll * inv[k]) % mod;
    res = (res * 1ll * inv[n-k]) % mod;

    return res;
}

int main(){
printf("%lld",C[3][2]);
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
            m=m+C[a[i]][2]+a[i];
            printf("%d ",C[a[i]][2]);
       }
       else if(a[i]==1)
            m++ ;
   }
   printf("%d",m);

return 0 ;
}
