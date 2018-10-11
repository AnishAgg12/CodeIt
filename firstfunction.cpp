#include<stdio.h>
int power(int,int);
int main()
{ int a,b,c;
  printf("enter a:number and b:power");
  scanf("%d%d",&a,&b);
  c=power(a,b);
  printf("your answer is %d",c);
  return 0;
}
int power(int a,int b)
 {  int sum=1;
    for(int i=1;i<=b;i++)
    {   sum=sum*a;
	}
     return sum;
 }
