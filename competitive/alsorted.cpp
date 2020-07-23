

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
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f,s,e ;
slld(n) ;

f=0 ;
long long p1=-1,p2=-1,p3=-1,p4=-1 ;
s=0 ;
long long a[maxn] ;


if(n==1)
{
    slld(a[0]) ;
    printf("yes") ;
    return 0 ;
}
if(n==2){
    slld(a[0]) ;
    slld(a[1]) ;
    if(a[0]>a[1]){
        printf("yes\nswap 1 2") ;
        return 0 ;
    }
    else
    {
        printf("yes") ;
        return 0 ;
    }

}

for(i=0;i<n;i++){
    slld(a[i]) ;
    if(i!=0){
        if(a[i]<a[i-1] && p1==-1){
                p2=i ;
                p1=i-1 ;

        }
        else if(a[i]<a[i-1] && p3==-1){
                p4=i ;
                p3=i-1 ;

        }
        else if (a[i]<a[i-1])
           {
             s=1 ;
           }
           f=1 ;

    }



}
if(f==0)
    {
        printf("yes") ;
        return 0;
    }
if(p1!=-1 &&p3!=-1 && a[p4]<=a[p2] && a[p1]>=a[p3] &&s==0)

{
    printf("yes\nswap %lld %lld",p1+1,p4+1) ;
    return 0 ;
}
s=-1 ;
e=-1 ;

for(i=0 ;i<(n-1);i++) {

if(s!=-1 && a[i]<a[i+1])
    break ;

if(a[i]>=a[i+1])
{
    if(s==-1 && e==-1){
        s=i ;
        e=i+1 ;
    }
    else
        e=i+1 ;

}


}
if(s!=-1 && e!= -1){
        for(i=s ; i<=(s+e)/2;i++){
    t=a[i] ;
    a[i] = a[e-i+s] ;
    a[e-i+s]=t ;
}
if(s!=0 ){
    if(a[s-1]>a[s])
    {
        printf("no") ;
        return 0 ;
    }
}
if(e!=(n-1)){
    if(a[e]>a[e+1]){
        printf("no") ;
        return 0 ;
    }
}
for(i=e+1;i<(n-1);i++){
    if(a[i]>a[i+1])
    {
        printf("no") ;
        return 0 ;
    }
}
if(e==s+1)
    printf("yes\nswap %lld %lld",s+1,e+1) ;
else
printf("yes\nreverse %lld %lld",s+1,e+1) ;
return 0 ;
}




return 0 ;
}
