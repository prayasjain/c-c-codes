

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
int t ,n,i ;
int m=-1,p=1 ;
sd(t) ;
int b[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,
-1,1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,
-1,1,-1,1,1,-1,1,-1,-1,1,-1,1,1,-1,1,-1,
-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,-1,1,-1,1,
-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,
-1,1,1,-1,-1,1,1,-1,1,-1,-1,1,1,-1,-1,1,
-1,1,1,-1,1,-1,-1,1,-1,1,1,-1,1,-1,-1,1,
-1,1,1,-1,1,-1,-1,1,1,-1,-1,1,-1,1,1,-1,
1,1,1,1,1,1,1,1,-1,-1,-1,-1,-1,-1,-1,-1,
1,1,1,1,-1,-1,-1,-1,1,1,1,1,-1,-1,-1,-1,
1,1,1,1,-1,-1,-1,-1,-1,-1,-1,-1,1,1,1,1,
1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,1,1,-1,-1,
1,1,-1,-1,1,1,-1,-1,-1,-1,1,1,-1,-1,1,1,
1,1,-1,-1,-1,-1,1,1,1,1,-1,-1,-1,-1,1,1,
1,1,-1,-1,-1,-1,1,1,-1,-1,1,1,1,1,-1,-1} ;
int c[]={
-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,
1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,-1,-1,-1,-1,-1,-1,
1,1,1,-1,-1,-1,1,1,-1,1,-1,-1,
1,1,-1,1,-1,-1,1,-1,1,-1,-1,1,
1,1,-1,-1,1,-1,-1,1,-1,-1,1,1,
1,1,-1,-1,-1,1,-1,-1,1,1,1,-1,
1,-1,1,1,-1,-1,-1,-1,-1,1,1,1,
1,-1,1,-1,-1,1,-1,1,1,-1,-1,1,
1,-1,-1,1,1,-1,-1,1,1,1,-1,-1,
1,-1,-1,1,-1,1,1,1,-1,-1,1,-1,
1,-1,-1,-1,1,1,1,-1,-1,1,-1,1
} ;

int ans24[]={-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,
1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,
1,	1,	1,	1,	1,	1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	1,	1,	1,	1,	1,	1,
1,	1,	1,	-1,	-1,	-1,	1,	1,	-1,	1,	-1,	-1,	-1,	-1,	-1,	1,	1,	1,	-1,	-1,	1,	-1,	1,	1,
1,	1,	-1,	1,	-1,	-1,	1,	-1,	1,	-1,	-1,	1,	-1,	-1,	1,	-1,	1,	1,	-1,	1,	-1,	1,	1,	-1,
1,	1,	-1,	-1,	1,	-1,	-1,	1,	-1,	-1,	1,	1,	-1,	-1,	1,	1,	-1,	1,	1,	-1,	1,	1,	-1,	-1,
1,	1,	-1,	-1,	-1,	1,	-1,	-1,	1,	1,	1,	-1,	-1,	-1,	1,	1,	1,	-1,	1,	1,	-1,	-1,	-1,	1,
1,	-1,	1,	1,	-1,	-1,	-1,	-1,	-1,	1,	1,	1,	-1,	1,	-1,	-1,	1,	1,	1,	1,	1,	-1,	-1,	-1,
1,	-1,	1,	-1,	-1,	1,	-1,	1,	1,	-1,	-1,	1,	-1,	1,	-1,	1,	1,	-1,	1,	-1,	-1,	1,	1,	-1,
1,	-1,	-1,	1,	1,	-1,	-1,	1,	1,	1,	-1,	-1,	-1,	1,	1,	-1,	-1,	1,	1,	-1,	-1,	-1,	1,	1,
1,	-1,	-1,	1,	-1,	1,	1,	1,	-1,	-1,	1,	-1,	-1,	1,	1,	-1,	1,	-1,	-1,	-1,	1,	1,	-1,	1,
1,	-1,	-1,	-1,	1,	1,	1,	-1,	-1,	1,	-1,	1,	-1,	1,	1,	1,	-1,	-1,	-1,	1,	1,	-1,	1,	-1,
-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,	-1,	1,
1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,
1,	1,	1,	1,	1,	1,	-1,	-1,	-1,	-1,	-1,	-1,	1,	1,	1,	1,	1,	1,	-1,	-1,	-1,	-1,	-1,	-1,
1,	1,	1,	-1,	-1,	-1,	1,	1,	-1,	1,	-1,	-1,	1,	1,	1,	-1,	-1,	-1,	1,	1,	-1,	1,	-1,	-1,
1,	1,	-1,	1,	-1,	-1,	1,	-1,	1,	-1,	-1,	1,	1,	1,	-1,	1,	-1,	-1,	1,	-1,	1,	-1,	-1,	1,
1,	1,	-1,	-1,	1,	-1,	-1,	1,	-1,	-1,	1,	1,	1,	1,	-1,	-1,	1,	-1,	-1,	1,	-1,	-1,	1,	1,
1,	1,	-1,	-1,	-1,	1,	-1,	-1,	1,	1,	1,	-1,	1,	1,	-1,	-1,	-1,	1,	-1,	-1,	1,	1,	1,	-1,
1,	-1,	1,	1,	-1,	-1,	-1,	-1,	-1,	1,	1,	1,	1,	-1,	1,	1,	-1,	-1,	-1,	-1,	-1,	1,	1,	1,
1,	-1,	1,	-1,	-1,	1,	-1,	1,	1,	-1,	-1,	1,	1,	-1,	1,	-1,	-1,	1,	-1,	1,	1,	-1,	-1,	1,
1,	-1,	-1,	1,	1,	-1,	-1,	1,	1,	1,	-1,	-1,	1,	-1,	-1,	1,	1,	-1,	-1,	1,	1,	1,	-1,	-1,
1,	-1,	-1,	1,	-1,	1,	1,	1,	-1,	-1,	1,	-1,	1,	-1,	-1,	1,	-1,	1,	1,	1,	-1,	-1,	1,	-1,
1,	-1,	-1,	-1,	1,	1,	1,	-1,	-1,	1,	-1,	1,	1,	-1,	-1,	-1,	1,	1,	1,	-1,	-1,	1,	-1,	1} ;
int a[]={-1,-1,-1,-1,1,1,1,1,
          1,1,1,1,1,1,1,1,
          -1,-1,1,1,-1,-1,1,1,
          -1,-1,1,1,1,1,-1,-1,
          -1,1,-1,1,-1,1,-1,1,
          -1,1,1,-1,-1,1,1,-1,
          -1,1,1,-1,1,-1,-1,1,
          -1,1,-1,1,1,-1,1,-1
            } ;
while(t--){

    sd(n) ;
    if(n==1){
        cout<<"YES\n1\n";
        continue ;
    }
    /*if(n%2){
        cout<<"NO\n" ;
        continue ;
    } */
    else if(n==2){
        cout<<"YES\n1 1 1 -1\n";
        continue ;
    }
    else if(n==4){
        cout<<"YES\n-1 -1 1 1 1 1 1 1 -1 1 -1 1 -1 1 1 -1\n";
        continue ;
    }
    /*if(n==6){
        cout<<"NO\n" ;
        continue ;
    } */

    else if(n==8){
        cout<<"YES\n" ;
        for(i=0;i<64;i++)
            cout<<a[i]<<" " ;
        cout<<"\n" ;
        continue ;
    }
    else if(n==12){
        cout<<"YES\n" ;
        for(i=0;i<144;i++)
            cout<<c[i]<<" " ;
        cout<<"\n" ;
        continue ;
    }
    else if(n==16){
            cout<<"YES\n" ;


        for(i=0;i<256;i++)
            cout<<b[i]<<" " ;
        cout<<"\n" ;
        continue ;
    }
    else if(n==24){
            cout<<"YES\n" ;


        for(i=0;i<24*24;i++)
            cout<<ans24[i]<<" " ;
        cout<<"\n" ;
        continue ;
    }
else {
     cout<<"NO\n" ;
        continue ;
}
}

return 0 ;
}
