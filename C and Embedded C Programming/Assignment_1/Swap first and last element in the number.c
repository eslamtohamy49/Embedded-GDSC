#include <stdio.h>

int main()
{

 int Number;
 int first_Number;
 int second_Number;
 int last_Number;

 printf("ENter any value consist of three Numbers \n");
 scanf("%d",&Number);

  first_Number = Number %10;
  second_Number = (Number /10)%10;
  printf("second number %d \n",second_Number);
  last_Number  = Number /100;
  printf("The Number converted is %d \n",(first_Number * 100 )+ (second_Number * 10) + last_Number);


    return 0;
}
