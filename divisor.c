#include<stdio.h>
int main()
{
  int NUM,i;
  printf("\nENTER ANY INTERGER AND FIND ITS DIVISORS : ");
  scanf("%d",&NUM);
  printf("All the divisor of %d are: \n", NUM);
  for(i=1;i<NUM;i++)
  {
   if(NUM%i==0)
   {
    printf("\n%d",i);
   }
  }
  return 0;
}
