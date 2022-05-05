// find the square  root of number example
// program to find gross salary
// Find the area of circle
// Find the volume of  cube

#include<stdio.h>
#include<math.h>
#define PI 3.142

/*
int main()
{
  int num;
  printf("Enter the number:");
  scanf("%d",&num);

  printf("Square root: %f",sqrt(num));
  return 0;
}




void main()
{
  int gs, bs, da, ta;
  printf("Enter basic salary: ");
  scanf("%d",&bs);

  da = (10*bs)/100;
  ta = (12*bs)/100;
  gs = bs + da + ta;

  printf("gross salary = %d",gs);
}


void main()
{
  float r, a;

  printf("Enter the radius: \n");
  scanf("%f", &r);

   a = PI*r*r;

   printf("Area of circle is %.2f",a);
}
*/
void main()
{
  int l, b, h, v;
  printf("Enter the value of l: \n");
  scanf("%d",&l );

  printf("Enter the value of b: \n");
  scanf("%d",&b);

  printf("Enter the value of h: \n");
  scanf("%d",&h);

  v = l*b*h;
   printf("Volume of cube :: %d", v);
}
