#include<stdio.h>
int main()
{
  int p,c,m,a;
      printf("Enter Physics Marks:");
      scanf("%d",&p);
      printf("Enter chemistry Marks:");
      scanf("%d",&c);
      printf("Enter Mathematics Marks:");
      scanf("%d",&m);
      a=(p+c+m)/3;
      printf("PCM Average=%d \n",a);
if(a>=50)
{
    printf("You are Eligible for Admission");


}
else(a,50);
printf("You are NOT Eligible for Admission ");

return 0;
}

