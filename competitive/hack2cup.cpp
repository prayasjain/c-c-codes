

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
int n,n2,a[40],a2[40],ans=0,b[maxn],b2[maxn],siz,nt,siz2 ;
void fun(stack<long long> st, long long x,int ind){

    long long tp =st.top(),xtemp,cum=0 ;
    if(x==0)
        ans++ ;
    st.pop() ;
    b[siz++]=x ;
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

void fun2(stack<long long> st, long long x,int ind){

    long long tp =st.top(),xtemp,cum=0 ;
    if(x==0)
        ans++ ;
    st.pop() ;
    b2[siz2++]=x ;
    xtemp=x^tp ;
    for(int i=ind;i<n2-1;i++){
            cum+=a2[i] ;
        st.push(cum) ;
        st.push(tp-cum) ;
        fun(st,xtemp^cum^(tp-cum),i+1) ;
        st.pop() ;
        st.pop() ;
    }

}



int main(){
std::ios_base::sync_with_stdio (false);
long long t ,x,s,i,j ;
stack<long long> st,st2 ;
//int n ;
sd(nt) ;
n=nt/2 ;
n2=nt-n ;
x=0 ;
s=0 ;
for(i=0;i<n;i++)
  {
     slld(a[i]) ;

    s=s+a[i] ;
  }
  st.push(s) ;
  fun(st,s,0) ;

for(i=0;i<siz;i++)
{
    printf("%d  ",b[i]) ;
}
s=0 ;
for(i=0;i<n2;i++){
    slld(a2[i]) ;
    s=s+a2[i] ;

}
st2.push(s) ;
fun2(st2,s,0) ;
return 0 ;
}
