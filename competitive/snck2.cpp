/*input
9
1
2
3
4
5
6
9999
100
99999
*/
#include <bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x);
#define slld(x) scanf("%lld",&x);
#define ss(x) scanf("%s",x);
#define sc(x) scanf("%c",&x);
#define LL long long
#define LD long double
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define bit(x,i) (x&(1<<i)) //select the bit of position i of x
#define lowbit(x) ((x)&((x)^((x)-1))) //get the lowest bit of x
#define pc1(x) cout<<x<<" "<<endl;
#define pc2(x,y) cout<<x<<" "<<y<<" "<<endl;
#define pc3(x,y,z) cout<<x<<" "<<y<<" "<<z<<" "<<endl;
#define pc4(w,x,y,z) cout<<w<<" "<<x<<" "<<y<<" "<<z<<" "<<endl;
#define pce(x) cout<<x<<endl;
#define ps0() cout<<endl;
#define ps1(x) cout<<#x<<" ";
#define ps2(x,y) cout<<#x<<" "<<y<<" "<<endl;
#define ps3(x,y,z) cout<<#x<<" "<<y<<" "<<z<<" "<<endl;
#define ps4(w,x,y,z) cout<<#w<<" "<<x<<" "#y<<" "<<z<<" "<<endl;
#define pse(x) cout<<#x<<endl;
#define GET_MACRO(_0, _1, _2, _3, _4, NAME, ...) NAME
#define GET_MACRO1(_1, _2, _3, _4, NAME, ...) NAME
#define ps(...) \
do{if (DEBUG) GET_MACRO(_0, ##__VA_ARGS__, ps4, ps3, ps2, ps1, ps0)(__VA_ARGS__)} while(0);
#define pc(...) \
do{if (DEBUG) GET_MACRO1(__VA_ARGS__, pc4, pc3, pc2, pc1)(__VA_ARGS__)} while(0);
#define READ(filename) freopen(filename, "r", stdin);
#define WRITE(filename) freopen(filename, "w", stdout);
 
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
 
#define DEBUG 0
 
int main()
{
int t,n,x;
int base=4;
sd(t)
VI remainder,extra,index_start,index_end;
VI ans;
int it;
while(t--)	
{
sd(n)
x=n;
if(x<=4)
{
if(x==1)
{
printf("5\n1 2 3 4 5\n");
continue;
}
if(x==2)
{
printf("3\n2 1 3\n");
continue;
}
if(x==3)
{
printf("4\n3 2 1 4\n");
continue;
}
if(x==4)
{
printf("5\n4 3 2 1 5\n");
continue;
}
}
remainder.clear();
extra.clear();
index_start.clear();
index_end.clear();
while(x>base)
{
remainder.PB(x%base);
x/=base;
}
reverse(remainder.begin(),remainder.end());
for(int i=0;i<remainder.size();i++)
{
if(remainder[i]==0)
extra.PB(0);
else
extra.PB(i+1);
}
it=1;
// reverse(extra.begin(),extra.end());
for(int i=remainder.size()-1;i>=0;i--)
{
if(remainder[i]==0)
{
index_start.PB(0);
index_end.PB(0);
continue;
}
index_end.PB(it);
it+=(remainder[i]-1);
index_start.PB(it);
it+=(extra[i]+1);
}
// reverse(extra.begin(),extra.end());
reverse(index_start.begin(),index_start.end());
reverse(index_end.begin(),index_end.end());
 
// ps(x,x)
// for(int i=remainder.size()-1;i>=0;i--)
// {
// ps(remainder,remainder[i])
// pc(index_start[i],index_end[i],extra[i])
// }
// continue;
ans.clear();
for(int i=0;i<remainder.size();i++)
{
if(i==0)
{
for(int j=it+x-1;j>=it;j--)
{
ans.PB(j);
// printf("%d ",j);
}
it+=x;
}
ps()
ps(it,it)
for(int j=it+base-1;j>=it;j--)
{
ans.PB(j);
// printf("%d ",j);
}
it+=base;
if(remainder[i]==0)
continue;
for(int j=index_start[i];j>=index_end[i];j--)
{
ans.PB(j);
// printf("%d ",j);
}
for(int j=index_start[i]+1;j<=index_start[i]+extra[i];j++)
{
ans.PB(j);
// printf("%d ",j);
}
}
int q=ans.size();
printf("%d\n",q);
for(int i=0;i<q;i++)
{
printf("%d ",ans[i]);
}
printf("\n");
}
 
}