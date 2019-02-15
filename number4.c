#include<stdio.h>
#include<conio.h>
{
int m,n,i,j,k,flag;


 printf("\nEnter The Lower Limit: ");
 scanf("%d",&m);
 printf("\nEnter The Upper Limit: ");
 scanf("%d",&n);

 printf("\nPrime Numbers Between %d & %d Are:\n",m,n);
 for(i=m ; i<=n ; i++)
 {
  k=i;
  flag=1;
  for(j=2 ; (j<=k/2)&&flag ; j++)
  {
   if(k%j==0)
   flag=0;
  }

  if(flag)
  printf("%3d \n",i);
 }
}
