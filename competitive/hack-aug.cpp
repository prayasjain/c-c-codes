
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
int a[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
int  n,k,i,j,p,j2 ;
char s[maxn] ;
long t  ;
sd(n) ;
sd(k) ;
sld(t) ;
cin>>s ;
//cout<<s<<n<<k<<t ;
for(i=0;i<n;i++){
    if(t==0)
        break ;
    if(s[i]=='1')
        continue ;
    else {
        for(j=max(i+k,a[i]);j<n;j+=k){
            if(s[j]=='1'){
                p=(j-i)/k;
                if(p<=t){
                    t=t-p ;
                    s[i]='1';
                    s[j]='0' ;


                for(j2=max(i+k,a[i]);j2<=j;j2+=k)
                    a[j2]=j+k ;
                }
                break ;
            }

        }
        if(j>=n){
            for(j2=max(i+k,a[i]);j2<n;j2+=k)
                 a[j2]=j+k ;
        }
    }
}
cout<<s ;
return 0 ;
}
