

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

struct s {
    long long s ;
    long long e ;
    long long v ;

}a[maxn];
long long ans[maxn],nxt[maxn],st[maxn],ind[maxn];
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,x,y,z,i,j,k ,l,f,n,m,mn ;
slld(t) ;
while(t--){
    slld(n);
    slld(m) ;



    FOR(i,m){

        slld(a[i].s) ;
        slld(a[i].e) ;
        a[i].v=0 ;

    }
    long long fu=1 ;
    for(i=1;i<=n;i++){

      k=-1 ;
      mn=-1 ;
      for(j=0;j<m;j++){
        if(a[j].s<=i&&a[j].e>=i&&a[j].v==0){
            if(k==-1)
            {
                k=j ;
                mn=a[j].e ;
                //a[j].v=1 ;
            }
            else if(mn>a[j].e){

                k=j ;

                mn=a[j].e ;

                //a[j].v=1 ;
            }
        }
      }
      if(k!=-1)
        a[k].v=1 ;
      if(i==fu){
        if(k==-1){
            ans[fu]=0 ;
            nxt[fu]=-1 ;
            st[fu]=-1 ;
            ind[fu]=-1 ;
            fu++ ;
            continue ;
        }
        else{

            ans[fu]=1 ;
            nxt[fu]=mn ;
            st[fu]=a[k].s ;
            ind[fu]=k ;
        }
      }
      else if(k==-1){
        nxt[i]=nxt[i-1] ;
        ans[i]=ans[i-1] ;
        st[i]=st[i-1] ;
        ind[i]=ind[i-1] ;

      }
    else {
        nxt[i]=nxt[i-1] ;
        ans[i]=ans[i-1] ;
        st[i]=st[i-1] ;
        ind[i]=ind[i-1] ;
        if(nxt[i]<i){

            ans[i]=ans[i-1]+1 ;
            nxt[i]=mn ;
            st[i]=i ;
            ind[i]=k ;
        }
        else if (nxt[i]>mn){
            ans[i]=ans[i-1] ;
            nxt[i]=mn ;
            st[i]=i ;
            a[ind[i]].v=0 ;
            //cout<<"*"<<ind[i]<<"*"<<"\n" ;
            ind[i]=k ;
        }
        else{
            a[k].v=0 ;
        }
    }

    }
//    for(i=1;i<=n;i++){
//        cout<<ans[i]<<" "<<st[i]<< " "<<nxt[i]<<" "<<ind[i]<<" "<<"\n" ;
//    }

    plldn(ans[n]) ;

}
return 0 ;
}
