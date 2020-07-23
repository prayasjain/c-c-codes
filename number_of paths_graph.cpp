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
#define mod 1000000007
//getline(cin, my_string, '\n');
long long a[26][26],b[26][26],c[26][26],r[26][26] ;
void matmul2(){
    long long i,k,j ;
    FOR(i,26){
        FOR(j,26){
            c[i][j]=0 ;
            FOR(k,26){
                c[i][j]=(c[i][j]+a[i][k]*a[k][j])%mod ;
            }
        }

    }
    FOR(i,26){
    FOR(j,26){
        a[i][j]=c[i][j] ;
    }}
}

void matmul(){
    long long i,k,j ;
    FOR(i,26){
        FOR(j,26){
            c[i][j]=0 ;
            FOR(k,26){
                c[i][j]=(c[i][j]+r[i][k]*a[k][j])%mod ;
            }
        }

    }
    FOR(i,26){
    FOR(j,26){
        r[i][j]=c[i][j] ;
    }}
}
void fun(long long l){
    while(l!=0){
        if(l%2==1){
            matmul() ;
        }
        matmul2() ;
        l=l/2 ;
    }

}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;

FOR(i,26)
{FOR(j,26)
{
    slld(a[i][j]) ;
    b[i][j]=a[i][j] ;

}}
slld(t) ;
char s ;
while(t--){

FOR(i,26){
FOR(j,26){
    a[i][j]=b[i][j] ;
    r[i][j]=0 ;
}
}
FOR(i,26)
r[i][i]=1 ;


    cin>>s>>l ;
    fun(l-1) ;
    p=0 ;
    f=s-'a' ;
    FOR(i,26){
        p=(p+r[i][f])%mod ;
    }
    plldn(p) ;
}

return 0 ;
}

