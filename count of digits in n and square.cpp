#include<iostream>
using namespace std;
void counts(int n)
{
    int count=0;
    int temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    cout<<"number of digits in "<<n<< " is :"<<count <<endl;
    int square=n*n;
    cout<<"the square of the given number is:"<<square<<endl;
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    counts(n);
    return 0;
}