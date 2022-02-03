// #include <stdio.h>
// void display(); // function prototype

// int main()
// {
//   int a;
//   printf("intialising display function\n");
//   display(); // function call
//   printf("display function finished its work\n");
//   return 0;
// }

//  function definition
// void display()
// {
//   printf("this is display\n");
// }

//program 2
#include <stdio.h>
void italy();
void brazil();
void argentina();
int main()
{
  printf("i am in main\n");
  italy();
  brazil();
  argentina();
  return 0;
}

void italy()
{
  printf("i am in italy\n");
}
void brazil()
{
  printf("i am in brazil\n");
}
void argentina()
{
  printf("i am in argentina\n");
}

// program 3
// #include <stdio.h>
// void fun(int);
// int main()
// {
//   int a = 30;
//   fun(a);
//   printf("%d\n", a);
//   return (0);
// }
// void fun(int b)
// {
//   b = 60;
//   printf("%d\n", b);
// }

//program 4
// #include <stdio.h>
// long cube(long x);  // function prototype (arguments/formal parameter)
// long input, answer; //global variables

// int main(void)
// {
//   printf("Enter an integer value: "); //local variables
//   scanf("%d", &input);
//   answer = cube(input); //calling function
//   printf("\nThe cube of %ld is %ld\n", input, answer);
//   return 0;
// }

// long cube(long x) //function definition
// {
//   long x_cubed;
//   x_cubed = x * x * x;
//   return x_cubed;
// }