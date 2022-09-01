#include<iostream>
#include<conio.h>
using namespace std;
inline int maxi(int,int);
inline float maxi(float,float);

int main()
{
    int n1,n2;
    float n3,n4;
    cout<<"Enter the two integer numbers";
    cin>>n1>>n2;
    cout<<"The maximum of two integer numbers is "<<maxi(n1,n2)<<endl<<endl;
    cout<<"Enter the two point numbers";
    cin>>n3>>n4;
    cout<<"The maximum of two point number is "<<maxi(n3,n4);
    getch();
    return 0;
}

int maxi(int n1,int n2)
{
    if(n1>n2)
        return n1;
    else
        return n2;
}

float maxi(float n1,float n2)
{
    if(n1>n2)
        return n1;
    else
        return n2;
}
