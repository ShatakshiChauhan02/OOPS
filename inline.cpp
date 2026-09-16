#include <bits/stdc++.h>
using namespace std;

inline int add(int a,int b)
{
  int c=a+b;
  return c;
}
void data(string name="Shatakshi")
{
    cout<<name<<endl;
}
void display(int num)
{
    cout << "Integer: " << num << endl;
}

void display(string text)
{
    cout << "String: " << text << endl;
}
void display()
{
    cout << "No arguments passed." << endl;
}
int main()
{
    int d=10;
    int e=30;
    cout<<"Inline Function"<<endl;
    cout<<add(d,e)<<endl;
    cout<<add(30,40)<<endl;
    cout<<"Default Argument"<<endl;
    data();
    data("Hello");
    cout << "Method Overloading" << endl;
    display(100);
    display("C++");
    display();
}