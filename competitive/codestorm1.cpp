

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
long long a[maxn],b[maxn],c[maxn] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
slld(n) ;
m=0 ;
FOR(i,n) {

    slld(c[i]) ;
    a[c[i]]++ ;
    m=max(m,c[i]) ;
}
b[0]=0 ;
b[1]=0 ;
for(i=1;i<=m;i++){
        if(a[i]>=1){
            b[i+1]=b[i]+1 ;
        }
        else
            b[i+1]=b[i] ;

}
for(i=m+2;i<=2*m+2;i++){
    b[i]=b[m+1] ;
}
long long acute=0, obtuse=0 ,right=0 ;
for(i=n-1;i>=0;i--){
        for(j=i-1;j>=0;j--){
            if(i==j)
                continue ;
            x=c[i] ;
            y=c[j] ;

            long long r=0,o=0,ac=0 ;
            long long tp =x*x+y*y ;
            if(ceil(sqrt(tp))==floor(sqrt(tp))&& a[(long long)sqrt(tp)]==1)
                 r++;
             tp =abs(x*x-y*y) ;
            if(ceil(sqrt(tp))==floor(sqrt(tp))&& a[(long long)sqrt(tp)]==1)
                r++ ;
            p=ceil(sqrt(abs(x*x-y*y))) ;
            o=o+b[p]-b[abs(x-y)+1] ;
            if(2*min(x*x,y*y)<max(x*x,y*y)&&(b[p]-b[abs(x-y)+1])>0)
                o-- ;
            p=floor(sqrt(x*x+y*y))+1 ;
            o+=(b[min(x+y,m+1)]-b[min(m+1,p)]) ;
            ac=b[min(x+y,m+1)]-b[abs(x-y)+1]-o-r ;
            if(2*min(x,y)<max(x,y))
                ac-- ;
            else
                ac=ac-2 ;
            acute+=ac ;
            obtuse+=o ;
            right+=r ;
            cout<<x<<" "<<y<<"\n" ;
            cout<<o<<" " <<r<<" " <<ac <<"\n" ;
        }

}
cout<<acute<<" "<<obtuse<<" "<<right ;
return 0 ;
}
