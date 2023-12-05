#include <stdio.h>

int main()
{

 int Second ;
 int Minte;
 int Hour;


 printf("Enter the second number \n");
 scanf("%d",&Second);

 Hour   = Second /(60 * 60);
 Minte  = (Second %(60*60)) /60;
 Second = Second -( (Hour * 60 *60 ) + (Minte * 60));

 printf("the time in Hour / Minute / Second is %d h , %d m and %d s ",Hour,Minte,Second);




    return 0;
}
