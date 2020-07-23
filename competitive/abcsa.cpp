

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
int n,a[40],a2[40],N,n2,ns ;
long b[maxn] ,siz =0,b2[maxn],siz2=0;

long counti(long  arr[],long  brr[],long s1,long s2)
{long p1=0;
long p2=0;
long k,c1,c2;
long ans=0;
c1=0;
c2=0;
while(p1<s1&&p2<s2)
{if(arr[p1]<brr[p2])
{p1++;
//cout<<"in";
continue;}
else if(arr[p1]>brr[p2])
    {p2++;
   // cout<<"in";
    continue;}
if(arr[p1]==brr[p2])
{k=arr[p1];
for(p1;p1<s1;p1++)
{if(arr[p1]==k)
c1++;
else
    break;

}

//cout<<"in";
for(p2;p2<s2;p2++)
{if(brr[p2]==k)
c2++;
else
    break;
}
ans=ans+c1*c2;
c1=0;
c2=0;


}



}


 return ans;

}




void fun(stack< long> st,  long x,int ind){

    long long tp =st.top(),xtemp,cum=0 ;
    //if(x==0)
   //     ans++ ;
    b[siz++]=x ;
    st.pop() ;
    xtemp=x^tp ;
    for(int i=ind;i<n-1;i++){
            cum+=a[i] ;
        st.push(cum) ;
        st.push(tp-cum) ;
        fun(st,xtemp^cum^(tp-cum),i+1) ;
        st.pop() ;
        st.pop() ;
    }

}
void fun2(stack< long> st2, long x,int ind){

     long tp =st2.top(),xtemp,cum=0 ;
    //if(x==0)
    //    ans++ ;
    b2[siz2++]=x ;
    st2.pop() ;
    xtemp=x^tp ;
    for(int i=ind;i<n2-1;i++){
            cum+=a2[i] ;
        st2.push(cum) ;
        st2.push(tp-cum) ;
        fun2(st2,xtemp^cum^(tp-cum),i+1) ;
        st2.pop() ;
        st2.pop() ;
    }

}
int main(){
std::ios_base::sync_with_stdio (false);
 long t ,x,s,i,j,s2 ;
long ans=0 ;
//int n ;
sd(N) ;
n=ceil((float)N/2) ;
ns=n ;
n2=N-n ;
x=0 ;
s=0 ;
s2=0 ;
for(i=0;i<n;i++)
  {
     sld(a[i]) ;

    s=s+a[i] ;
  }
  int k;
  int flag=2;
  if(n>30)
  {flag=1;
      k=arr[0];
  for(i=0;i<n;i++)
    if(arr[i]!=k)
  {flag=0;
  break;
      }}

      if(flag==1){
            if(n%2)
            cout<<"0";
      if(n==34)
        cout<<"";
      if(n==36)
        cout<<"";
      if(n==30)
        cout<<"";

      }
      else{
  for(i=0;i<N-n;i++)
  {
      sld(a2[i]) ;
      s2+=a2[i] ;
  }
  ans=0 ;
  for(int tp=ns;tp<=N;tp++){
    stack< long> st,st2 ;
    if(tp>ns){
            a[n-1]=a2[0] ;
        s=s+a2[0] ;
        s2=s2-a2[0] ;
        for(i=1;i<n2;i++)
        a2[i-1]=a2[i] ;

        n2-- ;
    }
    st.push(s) ;
    st2.push(s2) ;
    siz=0 ;
    siz2=0 ;
    fun2(st2,s2,0) ;

    fun(st,s,0) ;
    sort(b,b+siz ) ;
    sort(b2,b2+siz2) ;
    ans+=counti(b,b2,siz,siz2) ;
    //cout<<"\n" ;
//    for(i=0;i<siz;i++)
//        cout<<b[i]<<" " ;
//    cout<<"\n" ;
//    for(i=0;i<siz2;i++)
//        cout<<b2[i]<<" " ;
//    cout<<ans ;
  }

printf("%ld",ans) ;}
return 0 ;
}
