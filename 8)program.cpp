#include<iostream>
#include<conio.h>
using namespace std;
inline int area(int,int);
inline float area(int);
inline float area(int,int,int);
int main()
{
   int l,b,r,h;
   cout<<"Enter length and breadth of rectangle";
   cin>>l>>b;
   cout<<"The area of rectangle is "<<area(l,b)<<endl<<endl;

   cout<<"Enter the radius of circle";
   cin>>r;
   cout<<"The area of circle is "<<area(r)<<endl<<endl;

   cout<<"Enter the length and height of triangle";
   cin>>l>>h;
   cout<<"The area of triangle is "<<area(l,h,2);

   getch();
   return 0;

}

int area(int l,int b)
{
    return l*b;
}

float area(int r)
{
    return 3.14*r*r;
}
float area(int l,int h,int e)
{
    return (l*h)/e;
}
