
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
//std::ios_base::sync_with_stdio (false);
int t,mba,mbb;
long long a,b,temp,ans=0 ;
sd(t) ;
while(t--){
    slld(a) ;
    slld(b) ;
    ans=0;
    mba=ceil(log2(a+1)) ;
    mbb=ceil(log2(b+1)) ;
    if(mba!=mbb)
        printf("0\n") ;
    else{
        temp=1<<(mba-1) ;
        if(temp<0)
            temp=-temp ;
        //cout<<temp ;
        while((a/temp)==(b/temp)){
            if(a/temp)
            {
                a=a-temp ;
                b=b-temp ;
                ans+=temp ;
            }
            mba-- ;
            if(mba<0)
                break ;
            temp=1<<(mba-1) ;
        }
        plldn(ans) ;
    }

}

return 0 ;
}
