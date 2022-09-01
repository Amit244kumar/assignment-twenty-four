#include<iostream>
#include<conio.h>
using namespace std;
inline int add(int,int);
inline float add(float,float);

int main()
{
    int n1,n2;
    float n3,n4;
    cout<<"Enter the two integer numbers";
    cin>>n1>>n2;
    cout<<"The sum of two integer numbers is "<<add(n1,n2)<<endl<<endl;
    cout<<"Enter the two point numbers";
    cin>>n3>>n4;
    cout<<"The sum of two point number is "<<add(n3,n4);
    getch();
    return 0;
}

int add(int n1,int n2)
{
    return n1+n2;
}

float add(float n1,float n2)
{
    return n1+n2;
}
