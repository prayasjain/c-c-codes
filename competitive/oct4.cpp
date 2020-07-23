
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
float fun(int h, int m)
{
    float ha,ma,a ;
    ha =   (float)(h*60 + m)/2;
    ma = (float)6*m;
    //ha=ha%720 ;
    //ma=ma%720 ;
    // Find the difference between two angles
    a=fabs(ha-ma);

    //a=a%720 ;
    return min(a,360-a);
}
float a[14][62] ;
int main(){
//std::ios_base::sync_with_stdio (false);
int t ,n,x,y,z,i,j,k ,l,m,p,f ;
for(i=0;i<12;i++){
    for(j=0;j<60;j++){
        a[i][j]=fun(i,j) ;
    }
}
//a[12][0]=-1 ;
//for(i=0;i<=12;i++){
//    for(j=0;j<60;j++){
//
//        cout<<a[i][j]<<" ";
//    }
//    cout<<"\n" ;
//}

sd(t) ;
float h ,tmp=(1.0000/120.0000);
while(t--){
    scanf("%f",&h) ;
//    h=h*2 ;
//    x=(int)round(h) ;
    for(i=0;i<12;i++){
    for(j=0;j<60;j++){

        if(fabs(h-a[i][j])<=tmp){
            printf("%02d:%02d\n",i,j) ;
        }
   }

}
}
return 0 ;
}
