#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
int main()
{std::ios_base::sync_with_stdio(false);
int a[1000],i,e,count=0,n,t,j,k;
cin>>t;
for(j=0;j<t;j++)
{cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,n);
for(k=0;k<n;k++)
{
    if(a[i]==a[i+1])
        count++;
    else
    {if(count>=max)
      {   max=count;
          e=a[i];
          count=0;
          }
    }
}
cout<<e<<max<<endl;}
return 0;
}
