
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
#define pb(x) push_back(x)
#define inv2 500000004
#define mod 1000000007
//getline(cin, my_string, '\n');

long long a[maxn],n,aux[maxn],freq[maxn] ,b[maxn];
void mergep(long long l ,long long mid, long long r){
    long long inv=0 ;
    long long c=0 ;
    long long k=0 ;
    long long i , j ;
    long long p=l, q=mid+1 ;
    for(i=l;i<=r;i++){
            if(p>mid){
                aux[k++]=a[q++] ;
            }
            else if(q>r){
                aux[k++]=a[p] ;
                freq[a[p]]+=c ;
                p++;
            }
            else if(a[p]<=a[q]){
                aux[k++]=a[p] ;
                freq[a[p]]+=c ;
                p++ ;

            }
            else {
                aux[k++]=a[q++] ;
                c++ ;
                inv+=(mid-p+1) ;
            }
    }
    FOR(i,k){
    a[i+l]=aux[i] ;
    }
}
void mergesort(long long l , long long r){

 if(l<r){
    long long mid=(l+r)/2 ;
    mergesort(l,mid) ;
    mergesort(mid+1,r) ;
    mergep(l,mid,r) ;
 }

}
int main(){
std::ios_base::sync_with_stdio (false);
long long t ,x,y,z,i,j,k ,l,m,p,f ;
slld(t) ;
while(t--) {
        slld(n) ;
        FOR(i,n)
        {
            slld(a[i]) ;
            b[i]=a[i] ;
        }
        FOR(i,maxn)
        freq[i]=0 ;
        mergesort(0,n-1) ;
        FOR(i,n){
        plld(freq[b[i]]) ;
        ps(" ") ;
        }
        psn("") ;
}
return 0 ;
}
