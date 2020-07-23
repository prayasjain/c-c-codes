
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
int a[100],n,m,b[100] ;
long long fun(int l ,int c[],int j){
    //for(int i=0;i<m;i++)
      //  cout<<c[i]<<" "<<"\n" ;


    long long sum =0;
    if(l<n)
        return 0 ;
    if(l==n)
        return 1 ;
    for(int i=j;i<m;i++){
            if(c[i]>0)
            {
                c[i]-- ;
                l=l-a[i];
                sum+=fun(l,c,i) ;
                c[i]++ ;
                l=l+a[i] ;
            }

        }


    return sum ;

}
int main(){
//std::ios_base::sync_with_stdio (false);
int  t ,x,y,z,i,j,k ,l,p ;
sd(n) ;
sd(m) ;
l=0 ;
for(i=0;i<m;i++)
   {
        sd(a[i]) ;
        l+=ceil((float)n/a[i])*a[i] ;
        b[i]=ceil((float)n/a[i]) ;
       /// cout<<b[i]<<" " ;
   }
  // cout<<l ;
  //  cout<<"\n\n\n" ;
   plld(fun(l,b,0)) ;
return 0 ;
}
