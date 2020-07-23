

#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)

#include<iostream>
long long nd(long long number)
{
    int digits = 0;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}
using namespace std;
int main(){
long long t ,n=938,x,y,z,i,j,k ,l,m,p ;

cout<<nd(n) ;
return 0 ;
}
