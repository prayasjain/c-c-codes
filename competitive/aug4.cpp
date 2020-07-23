

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  1000001
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
char a[maxn],b[maxn],f ;
long  p(){
    long i ;
     long pk=0 ;
for(i=0;a[i]!='\0';i++){

if(f==0){
    if(a[i]=='.'){
        continue ;
    }
    else {
        if(b[i]=='.'){
            f=1 ;
            pk++ ;
            continue ;
        }
        else if(b[i+1]=='.'){
            f=1 ;
            pk++ ;
            i++ ;
            if(a[i]=='\0')
                break ;
            continue ;

        }
            else {
            return -1 ;
        }
    }
}
else if(f==1){


    if(b[i]=='.'){
        continue ;
    }
    else {
        if(a[i]=='.'){
            f=0 ;
            pk++ ;
            continue ;
        }
        else if(a[i+1]=='.'){
            f=0 ;
            pk++ ;
            i++ ;
            if(a[i]=='\0')
                break ;
            continue ;
        }

        else {
            return -1 ;
        }
    }
}
}

return pk ;

}
long  q(){
    long i ;
     long pk=0 ;
for(i=0;a[i]!='\0';i++){
if(f==1){


    if(b[i]=='.'){
        continue ;
    }
    else {
        if(a[i]=='.'){
            f=0 ;
            pk++ ;
            continue ;
        }
        else if(a[i+1]=='.'){
            f=0 ;
            pk++ ;
            i++ ;
            if(a[i]=='\0')
                break ;
            continue ;
        }

        else {
            return -1 ;
        }
    }
}
else if(f==0){
    if(a[i]=='.'){
        continue ;
    }
    else {
        if(b[i]=='.'){
            f=1 ;
            pk++ ;
            continue ;
        }
        else if(b[i+1]=='.'){
            f=1 ;
            pk++ ;
            i++ ;
            if(a[i]=='\0')
                break ;
            continue ;

        }
            else {
            return -1 ;
        }
    }
}

}

return pk ;

}
int main(){
//std::ios_base::sync_with_stdio (false);

long t ,n,x,y,z,i,j,k ,l,m,ans,ans2 ;
sld(t) ;
while(t--){
    ss(a);
    ss(b) ;

   f=0 ;
    k=1 ;
ans=0;
ans2=0;
if(a[0]=='#'&&b[0]=='#')
{
    cout<<"No\n" ;
    continue ;
}
else if(a[0]=='.'&&b[0]=='.'){

    f=0 ;
    ans=p() ;

    f=1 ;

    ans2=q() ;
    if(ans2==-1&&ans==-1){
        cout<<"No\n" ;
        continue ;
    }
    else if(ans2==-1)
    {
       cout<<"Yes\n" ;
        cout<<ans<<"\n" ;
    }
    else if(ans==-1)
    {
        cout<<"Yes\n" ;
        cout<<ans2<<"\n" ;
    }
    else{
            cout<<"Yes\n" ;
        cout<<min(ans,ans2)<<"\n" ;
    }

}
else if(a[0]=='.'){

    f=0 ;
    ans=p() ;
    if(ans==-1){
            cout<<"No\n" ;
        continue ;}
    else {
         cout<<"Yes\n" ;
        cout<<ans<<"\n" ;
    }
}
else {

    f=1 ;
    ans=p() ;
    if(ans==-1){
            cout<<"No\n" ;
        continue ;}
    else {
        cout<<"Yes\n" ;
        cout<<ans<<"\n" ;
    }

}
}
return 0 ;
}
