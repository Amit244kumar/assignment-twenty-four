#include<iostream>
#include<conio.h>
using namespace std;
int Hdigit(int);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<"The highest digits in number is "<<Hdigit(n);
    getch();
    return 0;
}

int Hdigit(int n)
{
    int i=0;
    while(n)
    {
        if(n%10>i)
        {
            i=n%10;
        }
        n/=10;
    }
    return i;
}
