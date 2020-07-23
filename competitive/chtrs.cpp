

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
int n,z,i,j,k ,l,m,p,f ;
int x[8][5],y[8][5] ;
y[1][1]=1 ;

char t[100] ;

//puts(t);
i=15 ;
j=1;
while(1){
        gets(t);
        if (t[0]=='G')
            break ;

        if (t[0]=='1')
                cout<<"a "<<i<<' '<<j<<"\n" ;
        else
                cout<<t[4]<<' '<<i<<' '<<j<<"\n" ;
        j=j+4 ;
        if(j>15){
                break ;
                j=j-15 ;
                i=i-2 ;
                }
}
return 0 ;
}
