#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include<stdio.h>

using namespace std;

int  mi(int a ,int b){
    if(a<b)
        return a ;
    return b ;
}
int mini(int arr[])
{
    int i,brr[10] ;
    for(i=0;i<=9;i++)
        brr[i]=arr[i] ;
    for(i=9;i>=0;i--)
    {
        if(arr[i]>0)
        break;
    }

    if(i<4)
        return i;
    else
        {
            for(int  k=1;k<=9;k++)

            {
                if(arr[k]){

                    if(k>=1)
                    arr[k-1]=arr[k] ;
                    arr[k]=0 ;
                }
            }
        arr[0]=0 ;
        brr[0]=0;
        for(i=9;i>=0;i--){
            if(brr[i]>0)
                break ;
        }
        brr[i]-- ;

        brr[i/2]++;
        brr[i-i/2]++;


        return (1+ mi(mini(arr),mini(brr)));
           }


}

int main(){
    int t ,d,arr[11],k,p=0 ;
    cin>>t ;
    while(t--){
        p++ ;
        for(int i=0;i<11;i++){
            arr[i]=0 ;
        }
        cin>>d ;
        for(int i=0;i<d;i++){
            cin>>k ;
            arr[k]++;

        }
          int c=mini(arr) ;
        printf("Case #%d: %d\n",p,c) ;
    }



                  }
