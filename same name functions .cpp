#include<iostream>
using namespace std;
void sum(int a, int b)
{
    cout<<a+b<<endl;
}
void sum(float a, float b)
{
    cout<<a-b<<endl;
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b :";
    cin>>a>>b;
    sum(a,b);
    sum(a,b);
    return 0;
}