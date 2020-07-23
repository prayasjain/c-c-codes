

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
long long ans ;
long long m,l,q ;
long long dp[maxn][501] ;

long long bin_pow(long long o, long long s,long long mod) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    int d = bin_pow(o, s/2,mod);
    d = (d * d) % mod;
    if (s % 2 == 1)
        d = (d * o) % mod;
    return d;
}
void fun(long long st,long long en){
    if(st==en){
        if((s[st]-'0')%m==l)
            {
                ans++ ;
              //  cout<<"*" ;
            }
        return ;
    }
    long long mid=(st+en)/2 ;
    //long long ans=0 ;
    vector<long long>left ;
    vector<long long>right ;
    long long x=0,pw=0 ;
    for(long long i=mid;i>=0;i--){
        x=(x+(((s[i]-'0')%m)*bin_pow(10,pw,m))%m)%m ;
        pw++ ;
        left.push_back(x) ;
       // cout<<x<<" "  ;
     //   cout<<x<< " " ;
    }
   // cout<<"\n" ;
   // cout<<"\n" ;
    x=0;
    pw=0 ;
    for(long long i=mid+1;i<=en;i++){
        x=((x*(10%m))%m+(s[i]-'0')%m)%m ;
        right.push_back(x) ;
        //cout<<x<<" " ;
    }
    vector<long long>lc(m,0) ;
    //vector<long long>rc(m,0) ;
    long long i,j,y1,x1 ;
    FOR(i,left.size()){
        lc[left[i]]++ ;
    }
    FOR(i,right.size()){
        if(right[i]<=l)
            x1=l-right[i] ;
        else
            x1 =(l-right[i]+m) ;
        for(j=0;j<m;j++){
            y1=dp[j][i+1] ;
            if(x1==y1&&lc[j]>0){
                ans+=lc[j] ;
            }
        }

    }




    fun(st,mid) ;
    fun(mid+1,en) ;

}
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,p,f ;
ss(s) ;
n=strlen(s) ;
slld(q) ;
while(q--){
    slld(m) ;
    slld(l) ;
    for(i=0;i<m;i++){
        k=1%m ;
        for(j=0;j<=n;j++){
            dp[i][j]=((i%m)*(k%m))%m ;
            k=(k*10)%m ;
        }
    }
    ans=0 ;
    fun(0,n-1) ;
    cout<<ans<<"\n"  ;
}

return 0 ;
}
