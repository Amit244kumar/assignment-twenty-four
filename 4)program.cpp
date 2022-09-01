#include<iostream>
#include<conio.h>
using namespace std;
inline int comper(int,int);
int fact(int n);
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        for(int r=0;r<=i;r++)
        {
           cout<<comper(i,r)<<" ";
        }
        cout<<endl;
    }
    getch();
    return 0;
}

int comper(int n,int r)
{
   return fact(n)/(fact(r)*(fact(n-r)));
}

int fact(int n)
{
    int f=1;
    while(n!=0)
    {
        f=f*n;
        n--;
    }
    return f;
}
