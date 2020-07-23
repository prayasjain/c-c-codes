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
long long t ,n,x,y,z,i,j,k ,l,m,p,f,cnt,curr,next ;
slld(t) ;
while(t--){
    //cout<<"Vertices" ;
    long edge[maxn][2] ;
vector <long> adj_list[maxn] ;
cin>>n ;
//cout<<"Edges cnt" ;
cin>>m ;
FOR(i,m){

    cin>>edge[i][0]>>edge[i][1] ;
    if(i==0){
        curr=edge[0][0] ;
        next=edge[0][1] ;
    }
    else
    adj_list[edge[i][0]].push_back(edge[i][1]) ;
}
/*for(i=1;i<=n;i++){
    for(j=0;j<adj_list[i].size();j++){
        cout<<adj_list[i][j]<<" " ;
    }
    cout<<"\n" ;
}*/
if(m==0){
    cout<<"Yes\n" ;
    continue ;
}

//cout<<"\n" ;
//cout<<curr<<" "<<next ;
cnt=1 ;

while(1){

    curr=next ;
    if(adj_list[curr].size()==0)
        break ;
    else{
        next = adj_list[curr][adj_list[curr].size()-1];
        adj_list[curr].pop_back() ;
        cnt++ ;

    }
   // cout<<curr<<" " <<next<<"\n" ;
    //slld(p) ;
}


if(cnt==m)
    psn("Yes") ;
else
    psn("No") ;
for(i=0;i<n;i++)
    adj_list[i].clear() ;
}

return 0 ;
}
