#include<stdio.h>
#include<math.h>
int main()
{ int n,m,j,k,answer,sum=0,dif=0,count=1;
  printf("enter the number");
  scanf("%d",&n);
  j=n;
  for(int i=1;i<=1000;i++)
  { 
  j=j/2;
    count=count+1;
    if(j==1)
     break;	
	else
	continue;
  }
 
  m=count;
  for(int i=0;i<m;i++)
  { sum=sum+pow(10,i);
   
	k=n%2;

    if(k==0)
    { dif=dif+pow(10,i);

	n=n/2;
	}
	else
{
		n=n/2;
	continue;}
	 
  }
  answer=sum-dif;
  printf("\n%d",answer);
  return 0;
}
