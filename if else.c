#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int Maths, Science;
  
  printf("Enter your score in Maths \n",Maths);
  scanf("%d",& Maths);
  
  printf("Enter your score in Science\n", Science);
  scanf("%d", & Science);
  
  if(Maths>=15 , Science<=15){
    printf("you have score 15 points in maths");
  }
  else if(Maths<=15, Science>=15)
  {
    printf("you have score 15 points in science");
  }
  else if (Maths>15, Science>15)
  {
    printf("You have score 45 points in science and maths");
  }
   return 0;
}