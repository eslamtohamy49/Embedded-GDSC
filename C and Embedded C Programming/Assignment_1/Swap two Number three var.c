#include <stdio.h>

int main()
{

 int Number1;
 int Number2;
 int temp;


 printf("Enter Numbers \n");
 scanf("%d %d",&Number1,&Number2);

 temp    = Number1;
 Number1 = Number2;
 Number2 = temp;

printf("the Numbers after swapping %d and %d\n",Number1,Number2);




    return 0;
}
