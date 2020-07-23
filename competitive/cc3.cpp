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
long t ,n,x,y,z,i,j,k ,l,m,p,f ;
sld(t) ;
while(t--){
    sld(n) ;
    sld(m) ;
    if(n%2==0&&m%2==1){
    x=(m-1)/2 ;
    y=n/2 ;
    printf("%ld %ld\n",(x%y)+1,x/y) ;

    }
    else if(n%2==0&&m%2==0){
        x=(m/2)-1 ;
        y=n/2 ;
        printf("%ld %ld\n",n-(x%y),x/y) ;
    }
    else if(n%2==1&&m%2==1){
        p=(m-1)/(2*n) ;
        p=p*2 ;
        //printf("%ld-",p);
        x=(m-1)%(2*n) ;
        if(x<n)
            {
                printf("%ld %ld\n",(x/2)+1,p);

            }
       else {
            printf("%ld %ld\n",((x-n)/2)+1,p+1);

       }

    }
    else{
        p=(m-1)/(2*n) ;
        p=p*2 ;
        x=(m-1)%(2*n) ;
        if(x<n)
        {
            printf("%ld %ld\n",n-(x/2),p);
        }
        else{
                printf("%ld %ld\n",n-(x-n)/2,p+1);

        }
    }
}
return 0 ;
}
