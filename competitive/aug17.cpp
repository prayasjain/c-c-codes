

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
int a[maxn],b[maxn],mx[maxn],maxi[maxn] ;
int main(){
//std::ios_base::sync_with_stdio (false);
int t ,n,x,y,z,i,j,k ,l,m,p,f,cm,bl,li,up,sqx ;
long long ans=0 ;
double sq ;
sd(n) ;
sd(k) ;
ans=1 ;
//b[k]=1;
for(i=0;i<n;i++){
    sd(a[i]) ;
    mx[i]=n-1 ;
}
for(i=0;i<maxn;i++)
    b[i]=-1 ;


if(a[n-1]>k)
    b[a[n-1]]=n-1 ;
//if(a[n-1]==k){
  //      if(k==0)
//            b[0]=n-1 ;
//}

maxi[n-1]=n ;
if(a[n-2]>=a[n-1]){
    maxi[n-2]=n ;

}
else
    maxi[n-2]=n-1 ;
for(i=n-3;i>=0;i--){
    j=i+1 ;
    while(1){
    if(a[i]<a[j])
      {
         maxi[i]=j ;
         break ;
      }
    else if(maxi[j]==n){
        maxi[i]=n ;
        break ;
    }
    else if(a[i]<a[maxi[j]]){
        maxi[i]=maxi[j] ;
        break ;
    }
    else if(a[i]>=a[maxi[j]]){
        j=maxi[j] ;
        if(j==n)
        {
            maxi[i]=n;
            break;
        }

    }
    }

}
//for(i=0;i<n;i++)
  //  cout<<maxi[i]<<" " ;
for(i=n-2;i>=0 ;i--){
    if(a[i]==k){
        mx[i]=min(maxi[i]-1,mx[i]);
        if(mx[i]==i)
            {
                ans+=1 ;
                if(i!=0)
                mx[i-1]=mx[i] ;
                }
        else{
            ans+=(long long)(mx[i]-i+1) ;
            if(i!=0)
            mx[i-1]=mx[i] ;
        }
    }
    else if(a[i]<k){
            if(i!=0)
            mx[i-1]=mx[i] ;
            ans+=(long long)(mx[i]-i+1) ;
    }
    else if(a[i]>k){

        sqx=sqrt(a[i]-k) ;

        for(j=1;j<=sqx;j++){
                if((a[i]-k)%j==0){

                if(b[j]!=-1){
                        if(j>k)
                        mx[i]=min(mx[i],b[j]-1);

                }
                if(b[(a[i]-k)/j]!=-1){
                        if(((a[i]-k)/j)>k)
                        mx[i]=min(mx[i],b[(a[i]-k)/j]-1);

                }
                }


        }
       //if(k!=0&&b[a[i]-k]!=-1){
         //   mx[i]=min(mx[i],b[a[i]-k]-1);

        //}
        //if(j*j==(a[i]-k)&&b[j]!=-1)
          //  mx[i]=min(mx[i],b[j]-1);
        if(mx[i]==i)
            ans+=(long long)1 ;
        else
            ans+=(long long)(mx[i]-i+1);
        if(i!=0)
        mx[i-1]=mx[i] ;

    }
//cout<<"\n"<<ans<<"\n" ;
//for(int i2=0;i2<n;i2++)
  //  cout<<mx[i2]<<" " ;
if(a[i]>k)
b[a[i]]=i ;
}
cout<<ans;

return 0 ;
}
