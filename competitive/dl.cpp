

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
#define fors(i,n) for(i=0;i<n;i++)
#define mod 1000000007
long long a[maxn] ;






int main(){
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
while(t--)
{
    slld(n) ;

    memset(a,0,sizeof(a[0])*(n)) ;
    fors(i,n) {
        slld(a[i]) ;


    }
    sort(a,a+n) ;
    cout<<a[0]+a[1]<<'\n' ;

}

return 0 ;
}
