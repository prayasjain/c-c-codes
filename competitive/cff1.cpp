
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
char s[10][10] ;
int a[10][10] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
int p1=10,p2=10 ;
FOR(i,8){
    ss(s[i]) ;
}
FOR(i,8){
    FOR(j,8){
        if(s[i][j]=='W')
            a[i][j]=1 ;
        else if(s[i][j]=='B')
            a[i][j]=2 ;
        else
            a[i][j]=0;
    }

}
FOR(j,8){
int fb=-1 ;
int fw = -1 ;
int fan=-1 ;
FOR(i,8){
    if(a[i][j]==1)
    {
        fw=i ;
        break ;
    }
}
if(fw==-1)
    continue ;
for(i=0;i<fw;i++){
    if(a[i][j]==2)
    {   fan=0 ;
        continue ;
    }
}
if(fan==0)
    continue ;
else
    p1=min(p1,fw) ;
}


FOR(j,8){
int fb=-1 ;
int fw = -1 ;
int fan=-1 ;
FOR(i,8){
    if(a[i][j]==2)
    {
        fb=i ;

    }
}
if(fb==-1)
    continue ;
for(i=7;i>fb;i--){
    if(a[i][j]==1)
    {   fan=0 ;
        continue ;
    }
}
if(fan==0)
    continue ;
else
    p2=min(p2,7-fb) ;
}
//cout<<p1<<" "<<p2 ;
if(p1<=p2)
    cout<<"A" ;
else
    cout<<"B" ;

return 0 ;
}
