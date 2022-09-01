#include<iostream>
#include<conio.h>
using namespace std;
void Swap(int&,int&);

int main()
{
    int n1,n2;
    cout<<"Enter two numbers";
    cin>>n1>>n2;
    Swap(n1,n2);
    cout<<"first number "<<n1<<" second number "<<n2;
    getch();
    return 0;
}
void Swap(int &s,int &t)
{
    int f;
    f=t;
    t=s;
    s=f;
}
