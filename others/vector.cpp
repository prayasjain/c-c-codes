
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
 long t ,n,y,z,i,j,k ,l,m,p,f ;
 long val , pos , times ;
 vector <int> cpy ;
 cpy.push_back(3) ;
 cpy.push_back(2) ;
 cpy.push_back(1) ;
 int arr[] ={1,2,3} ;
vector<int> x ;
cout<<"size" ;
sld(n) ;
for(i=0;i<n;i++)
{
    cin>>y ;
    x.push_back(y) ;

}
cout<<"tests?" ;
cin>>t ;
while(t--)
{

    cout<<"1.Show\n" ;
    cout<<"2.delete\n" ;
    cout<<"22. delete by val\n" ;
    cout<<"3.Pop\n" ;
    cout<<"4.Push_Back\n" ;
    cout<<"5.Insert element once\n" ;
    cout<<"6. Insert Element n times\n" ;
    cout<<"7. Insert Array\n " ;
    cout<<"8. Insert Vector \n" ;
    cin>>f ;
    if(f==1){
        for(int i=0;i<x.size();i++)
            cout<<x[i]<<" " ;
            cout<<"\n" ;
    }
    if(f==2){
        cin>>pos ;
        x.erase(x.begin()+pos) ;
    }
    if(f==22){
            cin>>val ;
        x.erase(remove(x.begin(),x.end(),val),x.end()) ;

    }
    if(f==3){
        x.pop_back() ;
    }
    if(f==4){
        cin>>y ;
        x.push_back(y) ;
    }
    if(f==5){
            cin>>val ;
    cin>>pos ;
        x.insert(x.begin()+pos,val) ;
    }
    if(f==6){

        cin>>val ;
        cin>>pos ;
        cin>>times ;
        x.insert(x.begin()+pos,times,val) ;
    }
    if(f==7){
            cin>>pos ;
            x.insert(x.begin()+pos,arr,arr+3) ;

    }
    if(f==8){
        cin>>pos ;
        x.insert(x.begin()+pos,cpy.begin(),cpy.end()) ;
    }


}


return 0 ;
}
