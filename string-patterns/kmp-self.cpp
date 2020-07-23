#define slld(x) scanf("%lld",&x)
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%ld",&x)
#define ss(x)  scanf("%s",x)
#include<bits/stdc++.h>
using namespace std;
#define maxn  100001
#define FOR(i,n) for(i=0;i<n;i++)
#define plld(x) printf("%lld",x)
#define pd(x) printf("%d",x)
#define pld(x) printf("%ld",x)
#define ps(x)  printf("%s",x)
#define plldn(x) printf("%lld\n",x)
#define pdn(x) printf("%d\n",x)
#define pldn(x) printf("%ld\n",x)
#define psn(x)  printf("%s\n",x)

#define mod 1000000007
char *txt = "AABAACAADAABAAABAA";
char *pat = "AABA";

long lps[maxn],m=4,n=18 ; //m=size of pattern
void computeLPS(){
lps[0]=0 ;
long len=0 ;
long i =1 ;
while(i<m){
    if(pat[i]==pat[len]){ //pattern matches
        len++ ;
        lps[i]=len ;
        i++ ;
    }
    else{
        if(len==0){   //ptr is at first character which isnt matching with the last character
               lps[i]=0 ; //so lps is 0
               i++ ;
           }
        else{       //ptr not at first posn
            len=lps[len-1] ;
        }
    }
}

}
void KMPSearch(){
    int i=0,j=0;
    while(i<n){
        if(pat[j]==txt[i])
        {
            j++;
            i++ ;
        }
        if(j==m){
            cout<<"Found pattern at index"<<i-j<<"\n" ;
            j=lps[j-1];
        }
        else if(i<n &&pat[j]!=txt[i]){
            if(j==0)
                i++;
            else
                j=lps[j-1] ;
        }
    }
}

int main(){
std::ios_base::sync_with_stdio (false);
long long t ,n,x,y,z,i,j,k ,l,m,p,f ;
computeLPS();
KMPSearch();
//for(i=0;i<4;i++)
    //cout<<lps[i] ;

return 0 ;
}
