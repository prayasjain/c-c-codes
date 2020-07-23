
#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  500002
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
int fans =0 ;
int a[maxn],edges[maxn][2] ;
struct edge {
 int pos ;
 vector<int> next ;

}tree[maxn];
void fun(int root){

    if(tree[root].next.size()==0){

            return  ;
    }
    int f=0,ch=0 ;
    int k=0 ;
    if(a[root]==1)
        ch=1 ;
    for(int i=0;i<tree[root].next.size();i++){
        int p=tree[root].next[i] ;
        if(tree[p].next.size()==0&&a[p]==0){

                if(ch==1)
                    {
                        f++ ;
                        a[root]=1 ;
                        }
                ch=1 ;

                a[p]=1;
        }
        else if(tree[p].next.size()>0){
            fun(p) ;
        }
    }
   /* if(a[root]==0){
            for(int i=0;i<tree[root].next.size();i++){
        int p=tree[root].next[i] ;
        if(a[p]==0){
            a[p]=1 ;
            f++ ;
            a[root]=1 ;
            break ;
        }
    }
    }*/

    fans+=f ;
    return ;

}
int main(){
//std::ios_base::sync_with_stdio (false);
int t ,n,x,y,z,i,j,k ,l,m,p,f ;
sd(t) ;
while(t--){
    fans=0 ;
    sd(n) ;
   for(i=1;i<=n;i++){
        sd(a[i]) ;
        tree[i].next.clear() ;
    }
    for(i=1;i<=n-1;i++){
        sd(edges[i][0]) ;
        sd(edges[i][1]) ;
        tree[edges[i][0]].next.push_back(edges[i][1]) ;
    }
    int root=1 ;
    fun(root) ;

cout<<fans<<"\n" ;
}

return 0 ;
}
