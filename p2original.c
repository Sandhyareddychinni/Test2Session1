#include<stdio.h>
void input_line(float *x1, float *y1)
{
  printf("enter two numbers\n");
  scanf("%f,%f",x1,y1);
  }
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float a,b,c;
  printf("enter three sides of a triangle\n");
  scanf("%f%f%f",&a,&b,&c);
  return 0;
  }
void output(float x1, float y1, float x2, float y2, float x3, float y3, int istriangle)
{
  int a,b,c;
  if((a+b)>c || (b+c)>a || (c+a)>b)
  {
    printf("three lines form a triangle\n");
    }
  else
  {
    printf("three lines doesnot form a triangle\n");
    }
  }
int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_line(&x1,&y1);
  is_triangle(x1,y1,x2,y2,x3,y3);
  int istriangle;
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
  }