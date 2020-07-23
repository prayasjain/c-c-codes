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
long a[maxn],b[maxn];
int main(){
std::ios_base::sync_with_stdio (false);
long t ,n=0,x,y,z,i,j,k ,l,m,p,f,q ,cnt;
char le[104] ;
sld(q);
while(q--){
        scanf("%s %d",le,&m) ;
        //printf("%s",le) ;
        if(le[0]=='a'){
                if(a[m]==0){
                    b[n++]=m ;

                }
                a[m]++ ;

        }
        if(le[0]=='d'){
            a[m]-- ;

        }
        if(le[0]=='c'){
                cnt=0 ;
                for(i=0;i<n;i++){

                    if(a[b[i]]>0&&((b[i]&m)==b[i])){
                       cnt+=a[b[i]] ;
                    }

                }
                printf("%ld\n",cnt) ;

        }




}
return 0 ;
}
