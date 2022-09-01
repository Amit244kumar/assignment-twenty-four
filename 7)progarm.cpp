#include<iostream>
#include<conio.h>
using namespace std;

int add(int,int,int=0);

int main()
{
    int n1,n2,n3;
    cout<<"Enter two numbers";
    cin>>n1>>n2;
    cout<<"The sum of two numbers is "<<add(n1,n2)<<endl;
    cout<<"Enter third number";
    cin>>n3;
    cout<<"The sum of three is "<<add(n1,n2,n3);
    getch();
    return 0;
}

int add(int i,int j,int n)
{
    return i+j+n;
}
