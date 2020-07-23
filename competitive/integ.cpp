#include<bits/stdc++.h>
using namespace std ;
long counti(long int arr[],long int brr[],long s1,long s2)
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
int main()
{long int n,m;
cin>>n>>m;
long int arr[n];
long int brr[m];
for(long int i=0;i<n;i++)
    cin>>arr[i];
for(long int j=0;j<m;j++)
 cin>>brr[j];
 cout<<counti(arr,brr,n,m);



}








