#include<iostream>
#include<conio.h>
using namespace std;
int Isprime(int);
int main()
{
    int i;
    cout<<"Enter the number";
    cin>>i;
    if(Isprime(i))
    {
       cout<<"The number is prime";
    }
    else
    {
        cout<<"The number is not prime";
    }
    getch();
    return 0;
}

int Isprime(int j)
{
    for(int i=2;i<j;i++)
    {
        if(j%i==0)
            return 0;
    }
    return 1;
}
