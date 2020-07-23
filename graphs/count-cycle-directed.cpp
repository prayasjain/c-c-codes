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
struct obj {
    float ans ;
    long many ;
}a[maxn];
bool objcmp(obj a , obj b){
    return a.ans>b.ans ;
}
int p[maxn], e[maxn],cnt=0,nx,visit[maxn],current[maxn],debug[maxn],ds ;
//long ans[maxn] , many[maxn] ;
//stack<int> g ;
int main(){
std::ios_base::sync_with_stdio (false);
  int n,x,y,z,i,j,k ,l,m,f,curr,elec ;
sd(n) ;
double t=1,fin ;
for(i=1;i<=n;i++){
    sd(e[i]) ;

    sd(p[i]) ;

    //t=t*(100-p[i]) ;

}

for (i=1;i<=n;i++){
    if(visit[i]==1)
        continue ;
    nx=e[i] ;
    visit[i]=1 ;
    elec=0 ;
    current[elec++]=i ;
    t=1 ;
    t=(t*(double)p[i])/100 ;
    curr=1 ;
    ds=0 ;

    for(j=1;j<=n;j++){

        if(nx==i){
            a[cnt].ans=t ;
            a[cnt].many=curr ;
            ds=1 ;
            cnt++ ;
            //for(k=0;k<elec;k++)
             //   visit[current[k]]=1 ;
            break ;
        }
        else if(visit[nx]==1)
            break ;
        else {
            t=(t*(double)p[nx])/100 ;
            curr++ ;
            visit[nx]=1 ;
            current[elec++]=nx ;
            nx=e[nx] ;

        }
    }
    if(ds==0)
    {
        for(k=0;k<elec;k++)
                visit[current[k]]=0 ;
                visit[i]=1 ;
    }
}
fin=0 ;
for(i=0;i<cnt;i++){
    fin+=a[i].ans ;
}
printf("%.2lf",fin) ;
//sort(a,a+cnt,objcmp) ;
//for(i=0;i<cnt;i++){
 //   cout<<a[i].ans<<" "<<a[i].many<<"\n" ;
//}
return 0 ;
}
