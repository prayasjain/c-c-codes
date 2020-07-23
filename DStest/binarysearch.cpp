#include<iostream>
using namespace std;
int binary_search(int a[],int first,int last,int search_key)
{
    if(first>last)
        return -1;

    int mid=(first+last)/2;
    if(a[mid]==search_key)
        return mid;
    else if(a[mid]>search_key)
        return binary_search(a,first,mid-1,search_key);
    else
        return binary_search(a,mid+1,last,search_key);
}
int main(){
int n;
cout<<"Enter size of array : ";
cin>>n;
int a[n];
cout<<"Enter array elements - \n";
for(int i=0;i<n;i++)
    cin>>a[i];
int key;
cout<<"Enter key to be searched : ";
cin>>key;
int ans=binary_search(a,0,n-1,key);
if(ans>=0)
    cout<<"Position of search key in given array is "<<ans+1;
else
    cout<<"The key is not present in the given array";
return 0;
}
