#include<iostream>
using namespace std;
int radius(int r)
{
    int area=3.14*r*r;
    return area;
}
int main()
{
    int r;
    cout<<"enter the radius value :";
    cin>>r;
    cout<<"the square of "<<r<<" is "<<radius(r)<<endl;
    return 0;
}