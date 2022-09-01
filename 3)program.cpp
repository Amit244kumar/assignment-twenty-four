#include<iostream>
#include<conio.h>
using namespace std;
int power(int,int);
int main()
{
    int x,y;
    cout<<"Enter the value:";
    cin>>x;
    cout<<"Enter the value's power:";
    cin>>y;
    cout<<"The value is "<<power(x,y);
    getch();
    return 0;
}

int power(int x,int y)
{
    int sum=x;
    while(y!=1)
    {
        sum=sum*x;
        y--;
    }
    return sum;
}
