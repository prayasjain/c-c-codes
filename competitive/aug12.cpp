

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
long long a[maxn] ;
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,sm,r,ans,mini,star,sans;
char c1,c2 ;
slld(n) ;
slld(m) ;
FOR(i,n){

    slld(a[i]) ;
}
while(m--){
    scanf("%c",&c1);
    scanf("%c %lld %c",&c1,&k,&c2) ;
    //printf("%c\n",c1) ;
    //printf("%c\n",c2) ;
    //printf("%ld\n",k) ;



if(c1=='='){
    mini=0 ;
    ans=0 ;
    star=0 ;
    sans=0 ;
    for(i=0;i<n;i++){
        if(a[i]==k){
                star++ ;
                sans=sans+(mini*(mini+1))/2 ;
                mini=0 ;
    }
        if(a[i]<k){
            mini++ ;
            star++ ;
        }
        if(a[i]>k){
            sans=sans+(mini*(mini+1))/2 ;
            ans+=(star*(star+1))/2 -sans ;
            star=0 ;
            mini=0 ;
        }

}
        sans=sans+((mini)*(mini+1))/2 ;
        ans=(star*(star+1))/2 -sans ;
        if(ans%2){
        cout<<c2 ;
    }
    else {
        if(c2=='D')
            cout<<"C" ;
        else
            cout<<"D" ;
    }
        cout<<ans<<"\n";
}
else if(c1=='>')
{
    mini=0 ;
    ans= 0;
    for(i=0;i<n;i++)
    {
        if(a[i]>k){


            ans=ans+((mini)*(mini+1))/2 ;
            mini=0 ;
        }
        else {
            mini++ ;
        }
    }
    ans=ans+(mini*(mini+1))/2 ;
    ans=((n*(n+1))/2) -ans ;
    cout<<ans<<"\n" ;
    if(ans%2){
        cout<<c2 ;
    }
    else {
        if(c2=='D')
            cout<<"C" ;
        else
            cout<<"D" ;
    }
}
else if(c1=='<')
{
    mini=0 ;
    ans= 0;
    for(i=0;i<n;i++){
        if(a[i]>=k){
            ans+=((mini)*(mini+1))/2 ;
            mini=0 ;

        }
        else {
            mini++ ;
        }
    }
    ans=ans+(mini*(mini+1))/2 ;
    if(ans%2){
        cout<<c2 ;
    }
    else {
        if(c2=='D')
            cout<<"C" ;
        else
            cout<<"D" ;
    }
    cout<<ans<<"\n" ;
}

}
return 0 ;
}
