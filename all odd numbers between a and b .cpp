#include<iostream>
using namespace std;
void odd(int a, int b)
{
    int i;
    for( i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
        cout<<i<<" ";
        }
    }
    cout<<endl;

}
int main()
{
 int a,b;
 cout<<"enter the value of a and b respectively:";
 cin>>a>>b;
 cout<<"the odd numbers between a and b is :";
 odd(a,b);
}