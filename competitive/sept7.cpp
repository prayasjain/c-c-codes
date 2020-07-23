#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  50001
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
struct e {
    int x ;
    int y ;

}e1,e2,e3;
queue<e> q ;
pair<int,int>p1,p2,p3 ;
char ch ;
int a[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
int t ,r,c,i,j,k,n  ;
double answer ;
sd(t) ;
while(t--){

    sd(r) ;
    sd(c) ;
    bool v[r][c] ;
    FOR(i,r)
        {
            ch=getchar(); //new line
            for(j=0;j<c;j++)
            {
                ch=getchar();
                if(ch=='#')
                    v[i][j]=1;
                else
                    v[i][j]=0;
            }
        }

    n=0 ;
    k=0 ;
    FOR(i,r){
        FOR(j,c){
            k=0 ;
            if(v[i][j]==0){
               k++ ;
               v[i][j]=1 ;
                e1.x=i ;
                e1.y=j ;
                q.push(e1 ) ;
                while(!q.empty()){
                    e2=q.front() ;
                    q.pop() ;
                    if(e2.x<r-1&&!v[e2.x+1][e2.y])
                    {
                        k++ ;
                        e3.x=e2.x+1 ;
                        e3.y=e2.y ;
                        v[e2.x+1][e2.y]=1 ;
                        q.push(e3) ;
                    }
                    if(e2.y<c-1&&!v[e2.x][e2.y+1]){
                        k++ ;
                        e3.x=e2.x ;
                        e3.y=e2.y+1 ;
                        v[e2.x][e2.y+1]=1 ;
                        q.push(e3) ;
                    }
                    if(e2.x>0&&!v[e2.x-1][e2.y])
                    {
                        k++ ;
                        e3.x=e2.x-1 ;
                        e3.y=e2.y ;
                        v[e2.x-1][e2.y]=1 ;
                        q.push(e3) ;
                    }
                    if(!v[e2.x][e2.y-1]&&e2.y>0){
                        k++ ;
                        e3.x=e2.x ;
                        e3.y=e2.y-1 ;
                        v[e2.x][e2.y-1]=1 ;
                        q.push(e3) ;
                    }
                }
                a[n++]=k ;
            }
        }


    }
    answer=1 ;
    for(i=1;i<n;i++)
        answer+=(double)a[i]/(a[0]+a[i]) ;
    printf("%lf\n",answer) ;
}
return 0 ;
}
