#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long long t ,x,y,z,i,j,k ,l,m,p,a[26]={0},f=0,sm=0,smc=0 ;
char s[100001] ;
ss(s) ;
for(i=0;s[i]!='\0';i++){
    a[s[i]-'a']++ ;


}
sort(a,a+26) ;


sm=0 ;
smc=0 ;
for(i=25;i>=0;i--){
    if(a[i]==0)
        break  ;
    else{
        sm=sm+a[i] ;
        smc++ ;
    }

}
if(sm%smc==0 ||sm%smc==1)
    cout<<"YES" ;

else
    cout<<"NO" ;

return 0 ;
}
