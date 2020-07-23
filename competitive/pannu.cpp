#include<iostream>
int main(){
int a ;
int n ;
std::cin>>n ;
int i,j,ls=0,rs=0  ;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++){
        std::cin>>a ;

    }
    ls+=a[i] ;
    rs+=a[n-1-i] ;

}
std::cout<<ls<<' '<<rs ;

return 0 ;
}
