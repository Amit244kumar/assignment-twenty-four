#include<iostream>
#include<conio.h>
using namespace std;
int check(int n);
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(check(n))
    {
        cout<<"The number is in fibonacci";
    }
    else
    {
        cout<<"The number is not in fibonacci";
    }
    getch();
    return 0;
}

int check(int n)
{
    int i=0,j=1,t;
    while(i<=n)
    {
        if(i==n)
        {
            return 1;
        }
        t=i;
        i=j;
        j=j+t;

    }
    return 0;
}
