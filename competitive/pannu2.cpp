#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
int main()
{std::ios_base::sync_with_stdio(false);
int a[100000],i,e,cnt=1,n,t,j,k,mx=0,st;
cin>>t;
for(j=0;j<t;j++)
{cin>>n;
cnt =1;

for(i=0;i<n;i++)
cin>>a[i];
e=a[0] ;
mx= 0;
sort(a,a+n);
st=0 ;
for(k=0;k<n-1;k++)
{
    if(a[k]==a[k+1])
        cnt++;
    else if(cnt>mx)
      {   mx=cnt;
          e=a[st];
          cnt=1;
          st=k+1 ;
          }
          else {
            cnt=1;
          st=k+1 ;
          }
      //    cout<<k<<" "<<st<<" "<<mx<<" "<<cnt<<"\n" ;
    }
    if(cnt>mx){
        mx=cnt ;
        e=a[st] ;
        cnt =1 ;
    }
cout<<e<<" "<<mx<<endl;}
return 0;
}
