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

int main(){
//std::ios_base::sync_with_stdio (false);
long t ,n,xmin1,xmin2,xmax1,xmax2,ymin1,ymin2,ymax1,ymax2,z,i,j,k ,l,m,p,f,a[maxn][2] ;
sld(t) ;
while(t--){

    sld(n) ;
    xmin1=0;
    xmax1=0;
    ymin1=0;
    ymax1=0;

    xmin2=0;
    xmax2=0;
    ymin2=0;
    ymax2=0;
    FOR(i,n){
        sld(a[i][0]) ;
        sld(a[i][1]) ;
        if(a[i][0]<a[xmin1][0])
            {
                xmin1=i ;
                xmin2=i ;
            }
        if(a[i][0]>a[xmax1][0])
            {
                xmax1=i ;
                xmax2=i ;
            }
        if(a[i][1]<a[ymin1][1])
            {
                ymin1=i ;
                ymin2=i ;
            }
        if(a[i][1]>a[ymax1][1])
            {
                ymax1=i ;
                ymax2=i ;
            }

            if(a[i][0]==a[xmin1][0])
            {
                if(a[i][1]<a[xmin1][1])
                    xmin1=i ;
                if(a[i][1]>a[xmin2][1])
                    xmin2=i ;
            }
        if(a[i][0]==a[xmax1][0])
            {
                if(a[i][1]<a[xmax1][1])
                    xmax1=i ;
                if(a[i][1]>a[xmax2][1])
                    xmax2=i ;
            }
        if(a[i][1]==a[ymin1][1])
            {
                if(a[i][0]<a[ymin1][0])
                    ymin1=i ;
                if(a[i][0]>a[ymin2][0])
                    ymin2=i ;
            }
        if(a[i][1]==a[ymax1][1])
            {
                if(a[i][0]<a[ymax1][0])
                    ymax1=i ;
                if(a[i][0]>a[ymax2][0])
                    ymax2=i ;
            }
        }
        //cout<<xmin<<xmax<<ymin<<ymax;
        if(a[xmin1][0]==a[xmax1][0])
        {
            cout<<1<<"\n" ;
            cout<<ymax1+1<<" SE\n" ;
            continue ;
        }
        else if(a[ymin1][1]==a[ymax1][1]){
            cout<<1<<"\n" ;
            cout<<xmax1+1<<" SW\n" ;
            continue ;
        }


                if((a[xmin1][0]==a[ymin1][0]))
                    {
                        cout<<1<<"\n" ;
                        cout<<ymin1+1<<" NE"<<"\n" ;
                    continue ;
                    }
                else if(a[xmin1][1]==a[ymin1][1]){
                        cout<<1<<"\n" ;
                        cout<<xmin1+1<<" NE"<<"\n" ;
                continue ;
                }
                else if((a[xmin2][0]==a[ymax1][0]))
                    {
                        cout<<1<<"\n" ;
                        cout<<ymax1+1<<" SE"<<"\n" ;
                    continue ;
                    }
                else if(a[xmin2][1]==a[ymax1][1]){
                        cout<<1<<"\n" ;
                        cout<<xmin2+1<<" SE"<<"\n" ;
                continue ;
                }
                else if((a[xmax1][0]==a[ymin2][0]))
                    {
                        cout<<1<<"\n" ;
                        cout<<ymin2+1<<" NW"<<"\n" ;
                continue ;
                }
                else if(a[xmax1][1]==a[ymin2][1]){
                        cout<<1<<"\n" ;
                        cout<<xmax1+1<<" NW"<<"\n" ;
                continue ;
                }
                else if((a[xmax2][0]==a[ymax2][0])){
                        cout<<1<<"\n" ;
                        cout<<ymax2+1<<" SW"<<"\n" ;
                    continue ;
                }
                else if(a[xmax2][1]==a[ymax2][1]){
                        cout<<1<<"\n" ;
                        cout<<xmax2+1<<" SW"<<"\n" ;
                        continue ;
                }

                cout<<2<<"\n" ;
                if(a[xmin2][1]>a[xmax2][1]){
                    cout<<xmin2+1<<" SE\n" ;
                    cout<<xmax1+1<<" NW\n" ;
                    continue ;
                }
                else {
                    cout<<xmin1+1<<" NE\n" ;
                    cout<<xmax2+1<<" SW\n" ;
                    continue;
                }


}
return 0 ;
}
