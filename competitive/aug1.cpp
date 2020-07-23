

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


long p(long x,long y ){
/*long ans =0 ;
while(x!=y){
    x=x*2 ;
    ans++ ;
} */
return log2(y/x) ;

}
int main(){
//std::ios_base::sync_with_stdio (false);
 long t ,n,x,y,z,i,j,k ,l,m,f,mx,my ;

sld(t) ;
while(t--){
    sld(x) ;
    sld(y) ;
    if(x%2==0){
            mx=max(x,y) ;
            my=min(x,y) ;
            pldn(p(my,mx));

}
    else{
        if(x==y)
            cout<<0<<"\n" ;

        else if(y>x){
            if(y%x==0){

                pldn(log2(y/x)) ;
            }
            else{
                    f=0;
                while(y%x!=0)
                {
                    x=x/2 ;
                    f++ ;
                }
                pldn(p(x,y)+f) ;
            }
        }
        else {
                f=0 ;
                while(x%y!=0||y%x!=0){
                    x=x/2 ;
                    f++ ;
                }


            mx=max(x,y) ;
            my=min(x,y) ;
            pldn(p(my,mx)+f);

        }

    }

}
return 0 ;
}


