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
char s[120] ;
long long c[11] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;

slld(t) ;
while(t--){
    ss(s) ;
    long long l = strlen(s) ;
    if(l==1){
        if(s[0]=='8'||s[0]=='0')
            psn("YES");
        else
            psn("NO") ;
        continue;
    }
    if(l==2){
        x= (s[0]-'0')*10 + s[1]-'0' ;
        y= (s[1]-'0')*10 + s[0]-'0' ;
        if(x%8==0||y%8==0)
            psn("YES") ;
        else
            psn("NO") ;
        continue ;
    }

    for(i=0;i<11;i++)
        c[i]=0 ;
    for(i=0;s[i]!='\0';i++){
        c[s[i]-'0']++ ;
    }
    f=0 ;
    for(i=104;i<1000;i+=8){

        p=i ;
        x=p%10 ;
        if(c[x]==0)
            continue ;
        else
            c[x]-- ;
        p=p/10 ;
        y=p%10 ;
        if(c[y]==0){
            c[x]++ ;
            continue ;
        }
        else
            c[y]-- ;
        p=p/10 ;
        z=p ;
        if(c[z]==0){
            c[x]++ ;
            c[y]++ ;
            continue ;
        }
        else {
            f=1 ;
            break ;
        }

    }
    if(f==0)
        psn("NO");
    else
        psn("YES") ;

}

return 0 ;
}
