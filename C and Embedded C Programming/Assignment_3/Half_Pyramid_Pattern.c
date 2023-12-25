#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int Number_One   ;
    unsigned int CounterOne =0 ;
    unsigned int CounterTwo =0 ;

  printf("Enter the Number of the Rows :");
  scanf("%i",&Number_One);


  for(CounterOne =0 ; CounterOne < Number_One ; CounterOne++)
  {

      for(CounterTwo =0; CounterTwo <= CounterOne; CounterTwo++)
      {

          printf("*");

      }

      printf("\n");
  }


    return 0;
}#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int Number_One   ;
    unsigned int CounterOne =0 ;
    unsigned int CounterTwo =0 ;

  printf("Enter the Number of the Rows :");
  scanf("%i",&Number_One);


  for(CounterOne =0 ; CounterOne < Number_One ; CounterOne++)
  {

      for(CounterTwo =0; CounterTwo <= CounterOne; CounterTwo++)
      {

          printf("*");

      }

      printf("\n");
  }


    return 0;
}