
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

int main(){
std::ios_base::sync_with_stdio (false);
int t ,n,x,y,z,i,j,k ,l,m,p,f ;
char a[18] ,b[18] ;
sd(t) ;
while(t--){

    ss(a) ;
    ss(b) ;
    p=0 ;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==b[i]||a[i]=='?'||b[i]=='?')
            continue ;
        else {
            p=1 ;
            break ;
        }

    }
    if(p==1)
        cout<<"No\n" ;
    else
        cout<<"Yes\n" ;
}
return 0 ;
}
