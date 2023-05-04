#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{int a, b, c,d;

printf("enter the value of a = ");
scanf("%d",& a);

printf("enter the value of b =  ");
scanf("%d",& b);

printf("enter the value of d ");
scanf("%d",& d);

switch(d){
  case 1:
    c=a+b;
     printf("the sum of a and b%d", c );
  break;
  
  case 2:c= a-b;
     printf("the sub of a and b%d", c);
  break;
  
  case 3: c= a*b;
  printf("the multi of a and b%d", c);
  break;
   default: c =a/b;
   printf("the div of a and b%d = ", c);
   break;
}
   return 0;
}