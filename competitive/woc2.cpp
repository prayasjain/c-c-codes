

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
struct node {
    long x ;
    long y ;
    long z ;
    long xup ;
    long xdown ;
    long yup ;


}a[maxn];
long long b[maxn],mx,ans ;
bool objcompare(node lhs, node rhs) { return lhs.y < rhs.y; }
int main(){
std::ios_base::sync_with_stdio (false);
long n ,h,i,j,dh,dw,x,y,z ;
sld(n);
sld(h);
sld(dh);
sld(dw);
FOR(i,n){
    sld(a[i].y) ;
    sld(a[i].x) ;
    sld(a[i].z) ;
    a[i].xup=a[i].x+dw;
    a[i].xdown=a[i].x-dw ;
    a[i].yup=a[i].y+dh ;
    //b[i]=-1000001 ;
}
sort(a,a+n,objcompare);
b[n-1]=a[n-1].z ;
for(i=n-2;i>=0;i--){

    b[i]=a[i].z;
    if(a[i].yup>=h)
        mx=0 ;
    else
        mx=-1000001 ;
    for(j=i+1;j<n;j++){

        if(a[j].x>=a[i].xdown&&a[j].x<=a[i].xup&&a[j].y<=a[i].yup&&a[j].y>a[i].y){
            if(b[j]>=mx)
                mx=b[j];
        }

    }
    b[i]+=mx ;
}
//for(i=0;i<n;i++)
 //       cout<<b[i]<<" ";
 //       cout<<"\n" ;

ans=0;
for(i=0;i<n;i++){
    if(a[i].y<=dh){
        if(b[i]>ans)
            ans=b[i] ;
    }

}
cout<<ans ;
return 0 ;
}
