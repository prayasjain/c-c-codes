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
#define pair<long,long> pll
#define mod 1000000007
//#define long long ll
struct obj{
    long val ;
    long i ;

}a[maxn],top;
char c2 ;
void print(long long ans){
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

long long sum[maxn] ;
stack<obj> b ;
long mx[maxn],mi[maxn],arr[maxn] ;
bool objcompare(obj lhs, obj rhs) { return lhs.val < rhs.val; }
//long a[maxn] ;
int main(){
//std::ios_base::sync_with_stdio (false);
long t ,n,x,y,z,i,j,curr_max,k ,l,m,p,f,mid,mid2,ub,lb ;
long n2 ;
char c1 ;
sld(n);
sld(m) ;
FOR(i,n){

    sld(a[i].val) ;
    a[i].i=i ;
    arr[i]=a[i].val ;
}
b.push(a[0]) ;
top=a[0] ;
for(i=1;i<n;i++){

    if(a[i].val<top.val){
        top=a[i] ;
        b.push(a[i]) ;
        //cout<<top.val<<" " ;
    }
    else {
            while(a[i].val>=top.val){
                if(b.empty())
                    break ;
                mx[top.i]=i-1 ;

                b.pop() ;
                if(b.empty())
                    break ;
                top=b.top() ;
            }
            b.push(a[i]) ;
            top=a[i] ;

    }
}
while(!b.empty()){
    mx[top.i]=n-1 ;
    b.pop() ;
    if(!b.empty())
        top=b.top() ;
}
b.push(a[n-1]) ;
top=a[n-1] ;
for(i=n-2;i>=0;i--){


    if(a[i].val<=top.val){
        top=a[i] ;
        b.push(a[i]) ;
    }
    else {
        while(a[i].val>top.val){

        if(b.empty())
                    break ;
                mi[top.i]=i+1 ;

                b.pop() ;
                if(b.empty())
                    break ;
                top=b.top() ;
            }
            b.push(a[i]) ;
            top=a[i] ;

    }


}
while(!b.empty()){
    mi[top.i]=0 ;
    b.pop() ;
    if(!b.empty())
        top=b.top() ;
}
sort(a,a+n,objcompare) ;

arr[0]=a[0].val ;
n2=1 ;
//for(i=0;i<n;i++)
  //  cout<<mi[i]<<" "<<mx[i]<<" "<<"\n" ;
sum[0]=(mx[a[0].i]-a[0].i+1)*(a[0].i-mi[a[0].i]+1) ;
for(i=1;i<n;i++)
    {
    if(a[i].val==a[i-1].val){
        sum[n2-1]+=(long long)(mx[a[i].i]-a[i].i+1)*(a[i].i-mi[a[i].i]+1) ;
    }
    else {
            arr[n2]=a[i].val ;
            sum[n2]=(long long)(mx[a[i].i]-a[i].i+1)*(a[i].i-mi[a[i].i]+1) ;
        n2++ ;
    }
}
//for(i=0;i<n2;i++){
  //  cout<<arr[i]<<" "<<sum[i]<<"\n" ;
//}
for(i=1;i<n2;i++)
    sum[i]+=sum[i-1] ;
//for(i=0;i<n2;i++){
  //  cout<<arr[i]<<" "<<sum[i]<<"\n" ;
//}

while(m--){
    scanf("%c",&c1);
    scanf("%c %ld %c",&c1,&k,&c2) ;
    if(c1=='='){
            lb=0;
            ub=n2-1;
            mid=(lb+ub)/2 ;
            f=-1 ;
            while(lb<=ub) {

                if(arr[mid]==k)
                {
                    if(mid==0)
                        print(sum[mid]) ;
                    else
                        print(sum[mid]-sum[mid-1]) ;
                        f=1 ;
                        break ;
                }
                else if(arr[mid]>k){
                    ub=mid-1 ;
                    mid=(lb+ub)/2 ;
                }
                else {
                    lb=mid+1 ;
                    mid=(lb+ub)/2 ;
                }

            }
        //p=binary_search(arr,arr+n2,k) ;
        if(f==-1)
            print(0) ;
        }
    else if (c1=='>'){
             if (k>=arr[n2-1])
                    print(0) ;
            else if (k<arr[0])
                 print(sum[n2-1]) ;

            else {
                    lb=0 ;
                        ub=n2-1 ;
                        mid=(lb+ub)/2 ;
                        mid2=mid+1 ;

                    while(lb<=ub){
                        if(arr[mid]<=k&&arr[mid2]>k){
                            print(sum[n2-1]-sum[mid]);
                            break ;
                        }
                        else if(arr[mid]>k){
                            ub=mid-1 ;
                            mid=(lb+ub)/2 ;
                            mid2=mid+1 ;
                        }
                        else if(arr[mid2]<k){
                            lb=mid+1 ;
                            mid=(lb+ub)/2 ;
                            mid2=mid+1 ;

                        }

                        else if(arr[mid2]==k){
                                print(sum[n2-1]-sum[mid2]);
                                break ;

                        }


                    }
                }

    }
    else if (c1=='<'){
                 if (k>arr[n2-1])
                    print(sum[n2-1]) ;
            else if (k<=arr[0])
                 print(0) ;
            else {
                    lb=0 ;
                        ub=n2-1 ;
                        mid=(lb+ub)/2 ;
                        mid2=mid+1 ;

                    while(lb<=ub){
                        if(arr[mid]<k&&arr[mid2]>=k){
                            print(sum[mid]);
                            break ;
                        }
                        else if(arr[mid]>k){
                            ub=mid-1 ;
                            mid=(lb+ub)/2 ;
                            mid2=mid+1 ;
                        }
                        else if(arr[mid2]<k){
                            lb=mid+1 ;
                            mid=(lb+ub)/2 ;
                            mid2=mid+1 ;

                        }

                        else if(arr[mid]==k){
                                if(mid==0)
                                    print(0);
                                else
                                    print(sum[mid-1]);
                                break ;

                        }

                    }
                }

    }

}
return 0 ;
}
