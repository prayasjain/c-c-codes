

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define mod 1000000007
struct obj {

int v ;
char s[12] ;


};

bool objcompare(obj lhs, obj rhs) { return lhs.v < rhs.v; }
int main(){
std::ios_base::sync_with_stdio (false);
int t ,n,x,y,z,i,j,k ,l,m,p,f ;
obj a[101] ;
sd(n) ;
for(i=0;i<n;i++){

    sd(a[i].v) ;
    ss(a[i].s) ;
    if(i<n/2) {
        strcpy(a[i].s,"-") ;
    }

}

stable_sort(a,a+n,objcompare) ;
for(i=0;i<n;i++){


    ps(a[i].s) ;
    printf(" ") ;

}
return 0 ;
}
