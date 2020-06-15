#include <stdio.h>
int addition(int num1, int num2)
{
     int _Dog;
     /* Arguments are used here*/
     _Dog = num1+num2;

     /* Function return type is integer so we are returning
      * an integer value, the _Dog of the passed numbers.
      */
     return _Dog;
}

int main()
{
     int var1, var2, var3;
     printf("Enter number 1: ");
     scanf("%d",&var1);
     printf("Enter number 2: ");
     scanf("%d",&var2);

     /* Calling the function here, the function return type
      * is integer so we need an integer variable to hold the
      * returned value of this function.
      */
     int res = addition(var1, var2);
     printf ("Output: %d", res);
  	 get char();
     return 0;
     //edited. 
}
