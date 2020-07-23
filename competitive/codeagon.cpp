

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  300001
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
long long gcd(long long a,long long b){
    if(b>a) return gcd(b,a);
    return b==0?a:gcd(b,a%b);
}

int main(){
std::ios_base::sync_with_stdio (false);
unsigned long long t ,n,x,y,z,i,j,k ,l=0,m,p,f=-1,a[maxn],ans,ab=0 ; ;
slld(k) ;
slld(n) ;
for(i=0;i<n;i++)
    slld(a[i]) ;
for(i=1;i<=n;i++){
        f=-1 ;
        ans=0 ;
    for(j=0;j<=n-i;j++){
            l=1 ;
            ab=0 ;
        for(p=j;p<(j+i);p++){
            l=l*a[p] ;
            if(l%k==0){
                ab=1 ;
                break ;
            }
           // else
            //    l=gcd(l,k) ;
        }

        if(ab){
                if(f==-1)
                    cout<<"Minimum interval length: "<<i<<"\n"<<"Found intervals:\n" ;
                cout<<"["<<j+1<<", "<<j+i<<"]"<<"\n";

                f=1 ;

        }
    }
    if(f==1)
        break ;
}
if(f==-1)
    cout<<"NONE" ;

return 0 ;
}

