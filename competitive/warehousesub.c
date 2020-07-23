#include<stdio.h>
#define gc getchar()
//int num;
int getn()
{ int num=0;
  char ch=gc;
  while(ch<'0'||ch>'9')
  ch=gc;
  while(ch<='9'&&ch>='0')
  { if(ch=='4')
    num++;
    ch=gc;
  }
  return num;
}
int main()
{ int i,t,s,j;
  long long int arr[6],min;
  long long int a[6][3];
  char str[100005];
  scanf("%d",&t);
  while(t--)
  { scanf("%s",str);
    for(i=0;i<6;i++)
    { for(j=0;j<3;j++)
      { a[i][j]=0;
      }
      arr[i]=0;
    }
    for(i=0;str[i]!='\0';i++)
    { //printf("%c",str[i]);
      if(str[i]=='r')
      {  arr[0]+=a[0][1]+a[0][2];
         a[0][0]+=1;
         arr[1]+=a[1][1]+a[1][2];
         a[1][0]+=1;
         arr[2]+=a[2][2];
         a[2][1]+=1;
         //arr[3]=a[0][1]+a[0][2];
         a[3][2]+=1;
         arr[4]+=a[4][2];//+a[0][2];
         a[4][1]+=1;
         //arr[0]=a[0][1]+a[0][2];
         a[5][2]+=1;
      }
      if(str[i]=='b')
      {  arr[0]+=a[0][2];
         a[0][1]+=1;
         //arr[1]+=a[1][1]+a[1][2];
         a[1][2]+=1;
         arr[2]+=a[2][2]+a[2][1];
         a[2][0]+=1;
         arr[3]+=a[3][1]+a[3][2];
         a[3][0]+=1;
         //arr[4]+=a[4][2];//+a[0][2];
         a[4][2]+=1;
         arr[5]+=a[5][2];//+a[0][2];
         a[5][1]+=1;
      }
      if(str[i]=='g')
      {  //arr[0]+=a[0][2];
         a[0][2]+=1;
         arr[1]+=a[1][2];//+a[1][2];
         a[1][1]+=1;
         //arr[2]+=a[2][2]+a[2][1];
         a[2][2]+=1;
         arr[3]+=a[3][2];//+a[3][2];
         a[3][1]+=1;
         arr[4]+=a[4][1]+a[4][2];
         a[4][0]+=1;
         arr[5]+=a[5][1]+a[5][2];
         a[5][0]+=1;
      }

    }
   min=1000000000000000000;
    for(j=0;j<6;j++)
   { if(min>arr[j])
      min=arr[j];
     //printf("%lld\n",arr[j]);
   }
   printf("%lld\n",min);
  }

  return 0;
}
