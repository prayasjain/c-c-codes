
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

char s[maxn] ;
long long bin_pow(long long o, long long s,long long mod) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    int d = bin_pow(o, s/2,mod);
    d = (d * d) % mod;
    if (s % 2 == 1)
        d = (d * o) % mod;
    return d;
}
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,ans,q ;
ss(s) ;
slld(q) ;
while(q--){
    slld(m) ;
    slld(l) ;
    x=0 ;

    vector<long long>a(m,0) ;
    vector<long long>h ;
    //cout<<1 ;
    //h.clear() ;
    n=strlen(s) ;
    FOR(i,strlen(s)){
        x=(x+((s[i]-'0')%m)*bin_pow(10,n-i-1,m)%m)%m ;
        a[x]++ ;
        //cout<<0<<" " ;
        h.push_back(x) ;

    }
    //cout<<"\n" ;
    FOR(i,a.size())
        cout<<a[i]<<" " ;
    cout<<"\n" ;
    FOR(i,h.size())
        cout<<h[i]<<" " ;

    cout<<"\n";
    ans=0 ;

    FOR(i,strlen(s)){
        if(i==0){
            ans+=a[l] ;
            a[h[n-1]]-- ;
        }
        else {
            y=h[n-1-i] ;
            ans+=a[(l+y)%m] ;
            a[y]-- ;
        }
    }
    //cout<<3 ;
    //plldn(ans) ;
}
return 0 ;
}
