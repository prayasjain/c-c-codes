
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
#define pb(x) push_back(x)
#define inv2 500000004
#define inf INFINITY
#define mod 1000000007
//getline(cin, my_string, '\n');
long long a[300][300] , r[300],c[300],rc[500],cc[500] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
cout<<inf ;
while(t--){
    slld(n) ;
    slld(k) ;
    FOR(i,n)
    r[i]=c[i]=0;
    FOR(i,n){
    FOR(j,n){
    slld(a[i][j]);
    r[i]+=a[i][j];
    c[j]+=a[i][j] ;

    }
    }
    rc[0]=cc[0]=0 ;
    priority_queue<long long> q,q2 ;
    FOR(i,n)
    q.push(r[i]*(-1));
    FOR(i,k){
    x=q.top();
    x=-1*x ;
    rc[i+1]=x+rc[i] ;
    x+=n;
    x=-1*x ;
    q.pop();
    q.push(x);

    }
    FOR(i,n)
    q2.push(c[i]*(-1));
    FOR(i,k){
    x=q2.top();
    x=-1*x ;
    cc[i+1]=x+cc[i] ;
    x+=n;
    x=-1*x ;
    q2.pop();
    q2.push(x);

    }

    long long mi=1e9 ;
    FOR(i,k+1){
    mi=min(mi,rc[i]+cc[k-i]+ i*(k-i));
    }
    plldn(mi) ;


}
return 0 ;
}
