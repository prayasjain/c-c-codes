
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
int check(int arr[],int k,int n)
{int flag=1;
int ans=0;
int cum=0;
for(int h=0;h<n;h++)
    {if(k%2==1)
    {ans=ans^(cum+arr[h]);
    cum=0;}
    else
        cum=cum+arr[h];
    k=k/2;

    }

   if(ans>0)
        return 0;
   return 1;



}


int main()
{int n;
cin>>n;
int arr[n];
for(int h=0;h<n;h++)
    cin>>arr[h];
int k=pow(2,n-1);
int l=2*k-1;
int count=0;
for(int g=k;g<=l;g++)
{if(check(arr,g,n)==1)
count++;




}
cout<<count;}








