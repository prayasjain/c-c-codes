

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

vector<long long> p ;
long long fun(long long a,long long b,long long c){
    long long t1,t2,t3 ;
    t1=a-2*b+2*c ;
    t2=2*a-b+2*c ;
    t3=2*a-2*b+3*c ;
    if(t3<5000003){
        p.push_back(t3) ;
        fun(t1,t2,t3) ;
    }
    t1=a+2*b+2*c ;
    t2=2*a+b+2*c ;
    t3=2*a+2*b+3*c ;
    if(t3<5000003){
        p.push_back(t3) ;
        fun(t1,t2,t3) ;
    }
    t1=-a+2*b+2*c ;
    t2=-2*a+b+2*c ;
    t3=-2*a+2*b+3*c ;
    if(t3<5000003){
        p.push_back(t3) ;
        fun(t1,t2,t3) ;
    }

}
int arr[5000004] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,f ;
p.push_back(5) ;
fun(3,4,5) ;
//cout<<p.size() ;
for(i=0;i<p.size();i++){

    x=p[i] ;
    //y=1 ;
    while(x<5000004){
        arr[x]=1 ;
        //y++ ;
        x=x+p[i] ;
    }
}
slld(t) ;
while(t--){
    slld(n);
    if(arr[n]==1){
        printf("YES\n") ;
    }
    else
        printf("NO\n") ;
}
return 0 ;
}
