

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

//#define mod 1000000007
int d=256;
//#define d 256
int bin_pow(int o, int s,int mo) {
    if (s == 0) return 1;
    if (s == 1) return o % mo;
    int d = bin_pow(o, s/2,mo);
    d = (d * 1ll * d) % mo;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mo;
    return d;
}
char txt[]="GEEKS FOR GEEKS" ;
char pat[]="GEEK" ;
int n=strlen(txt),m=4 ;
void rabinkarp(){
    int i,j ;
    int p=0;
    int t=0;
    int h=1 ; //h=(d^m-1)%q ;
    int q=101 ; //A prime number

    h=bin_pow(d,m-1,q) ;
    for(i=0;i<m;i++){
        t=(t*d+txt[i])%q ;
        p=(p*d+pat[i])%q ;
    }
    for(i=0;i<=n-m;i++){
        if(p==t)
        {
            for(j=0;j<m;j++){
                if(txt[i+j]!=pat[j])
                    break ;
            }
            if(j==m)
                cout<<"Pattern Found at "<<i<<"\n" ;
        }
        if(i<n-m)
        {
            t=((t-h*txt[i])*d+txt[i+m])%q ;
            if(t<0)
                t+=q;
        }
    }
}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
rabinkarp();
return 0 ;
}
