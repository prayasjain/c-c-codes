
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
long edges[maxn][2],indegree[maxn],next[maxn],nextlen ;

int main(){
std::ios_base::sync_with_stdio (false);
long t,ne ,n,x,y,z,i,j,k ,l,m,p,f ;
cout<<"elements\n" ;
sld(n) ;
cout<<"edges\n" ;
sld(ne) ;
for(i=0;i<ne;i++){
    cout<<"start\n" ;
    cin>>edges[i][0] ;
    cout<<"end\n" ;
    cin>>edges[i][1] ;
    indegree[edges[i][1]]++ ;

}
for(i=1;i<=n;i++){
    if(indegree[i]==0){
        next[nextlen++]=i ;
    }
}
if(nextlen==0){
    return 0 ;
}
else {
    while(nextlen!=0){
        x=next[0] ;
        indegree[x]=-1;
        nextlen=0 ;
        for(i=0;i<ne;i++){
            if(edges[i][0]==x){

                indegree[edges[i][1]]-- ;
            }
        }
        cout<<x<<"\n" ;
        for(i=1;i<=n;i++){
            if(indegree[i]==0){
                next[nextlen++]=i ;
            }
        }

    }
}

}
