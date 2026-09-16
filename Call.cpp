#include <iostream>
using namespace std;

void data(int x)
{
    x=50;
    cout<<x<<endl;
}
void data1(int &x)
{
    x=50;
    cout<<x<<endl;
}
int main()
{
    int m=100;
    cout<<"Pass by Value: "<<endl;
    data(m);
    cout<<m<<endl;
    cout<<"Pass by Reference: "<<endl;
    data1(m);
    cout<<m<<endl;
}