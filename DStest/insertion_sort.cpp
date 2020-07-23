#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

void insertionsort(int a[],int n)

{
    int i,j,temp;
    
for(i=1;i<n;i++)
    
{j=i-1;temp=a[i];
        
while(a[j]>temp&&j>=0)
            
{
             
a[j+1]=a[j];
             
j--;
            
}
        
a[j+1]=temp;
    }
    
return;
}

int main(){

int n,i;
cout<<"Enter size of array to be sorted : ";

cin>>n;
int a[n];

cout<<"Enter elements of the sorted array :\n";

for(i=0;i<n;i++)
    
cin>>a[i];

insertionsort(a,n);

cout<<"Sorted array is :\n";

for(int j=0;j<n;j++)
    
cout<<a[j]<<" ";

return 0;
}

