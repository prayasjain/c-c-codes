

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
long long a[maxn];
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x=1000000000000000001,y,z,i,j,k ,l,m,p,f,sume=0,sumo=0,lb,ub,mid,mid2  ;
memset(a,0,sizeof(a)) ;
a[0]=1 ;
a[1]=2 ;
a[2]=3 ;
a[3]=5 ;
a[4]=8 ;
sume=a[0]+a[2]+a[4] ;
sumo=a[1]+a[3] ;
for (i=5;;i++){
    m=max(sume,sumo) ;
    a[i]=m+1 ;
    if(i%2!=0)
        sumo+=a[i] ;
    else
        sume+=a[i] ;
    if(m>x)
        break ;
}
n=i ;
slld(t) ;

while(t--){
    slld(p) ;
lb=0 ;
ub=n ;
mid=(lb+ub)/2 ;
mid2=mid+1 ;

while(1){
    if(a[mid]==(p))
    {
        cout<<mid+1<<"\n" ;
        break ;
    }
    else if(p>a[mid]&&p<a[mid2])
    {
        cout<<mid+1<<"\n" ;

        break ;
    }
    else if (p==a[mid2]){
        cout<<mid2+1<<"\n" ;
        break ;
    }
    else if(p>a[mid2]){
        lb=mid+1 ;
        mid=(lb+ub)/2 ;
        mid2=mid+1 ;

    }
    else if(p<a[mid]){
        ub=mid-1;
        mid=(lb+ub)/2 ;
        mid2=mid+1;
        //cout<<"a" ;
    }
    else{
        cout<<-1 ;
        break ;
    }
}
}
return 0 ;
}
