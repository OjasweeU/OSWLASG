#include<stdio.h>

int main()
{
  printf("Name: <OJASWEE UDGATA>\n");
  printf("Regd No.: <2141021001>\n");
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  a=a+b+c;
  b=a-(b+c);
  c=a-(b+c);
  a=a-(b+c);

  printf("After swapping: a=%d,b=%d,c=%d\n", a,b,c);
 return 0;
}
