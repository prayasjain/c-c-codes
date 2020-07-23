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
int t,f ,n,k,x,y,i,s[40],e[40],j,p,lc,rc ;
sd(t) ;
char a[4001] ;
while(t--){
    sd(n);
    sd(k) ;
    FOR(i,n)
        a[i]=' ';
    FOR(i,k){


    sd(x);
    sd(y) ;
    s[i]=x ;
    e[i]=y ;
    a[x]='(' ;
    a[y]=')' ;
    }
    for(i=0;i<k;i++){
        f=0 ;
        for(j=s[i]+1;j<e[i];j++){
            if(a[j]=='(')
                lc++ ;
            else if(a[j]==')')
                rc++ ;
        }
        if(lc==0&&rc==0)
        {   f=0 ;
            for(j=s[i]+1;j<e[i];j++){
                if(f==0){
                    a[j]='(' ;
                    f=1 ;
                }
                else {
                    a[j]=')' ;
                    f=0 ;
                }
            }
        }
        else if(lc>rc){
            f=0 ;
            for(j=s[i]+1;j<e[i];j++){
             if(a[j]==' ')
             {

               if(a[j-1]=='('){
                    a[j]=')' ;
                    f=1 ;
                }
                else {
                    a[j]='(' ;
                    f=0 ;
                }
            }
            }


        }
        else if(lc<rc){
            f=0 ;
            for(j=s[i]+1;j<e[i];j++){
             if(a[j]==' ')
             {

               if(a[j+1]==')'){
                    a[j]='(' ;
                    f=1 ;
                }
                else {
                    a[j]=')' ;
                    f=0 ;
                }
            }
            }


        }
        for(j=s[i]+1;j<e[i];j++){

                if(j==0&&a[j]==' ')
                    a[j]='(' ;
            else if(a[j]==' '&&a[j-1]=='(')
            {
                a[j]=')' ;
            }
            else if(a[j]==' '&&a[j-1]==')')
                a[j]='(' ;
        }
    }
    for(j=0;j<n;j++){
        if(a[j]==' ')
            a[j]='(' ;
    }
    psn(a) ;
    //a[n]='\0' ;
   // FOR(i,n)
    //cout<<a[i] ;
    //cout<<"\n" ;
}
return 0 ;
}
