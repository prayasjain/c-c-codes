#include<bits/stdc++.h>
using namespace std ;

void swap(int *x,int *y){

	int t = *x ;
	*x= *y ;
	*y=t ;
}

int partition(int arr[],int l , int h){
	int p = l-1 ;
	int pivot = arr[h] ;
	for(int i=l;i<=h-1;i++){
		if(arr[i]<=pivot){
			p++ ;
			swap(&arr[p],&arr[i]) ;
		}
	}
	swap(&arr[p+1],&arr[h]) ;
	return p+1 ;	
}

void quicksort(int arr[], int l , int h){

	if(l>h)
		return ;
	if(l==h)
		return ;
	int p =partition(arr,l,h) ;
	quicksort(arr,l,p-1) ;
	quicksort(arr,p+1,h) ;
}


int main(){

	int n ;
	cin>>n ;
	int arr[n] ;
	for(int i=0;i<n;i++)
		cin>>arr[i] ;
	quicksort(arr,0,n-1) ;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" " ;
	}
	return 0 ;
}