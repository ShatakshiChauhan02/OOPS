#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int Roll_Num;
    
    void input()
    {
        cout<<"Enter Student's name: ";
        getline(cin,name);
        cout<<"Enter roll number: ";
        cin>>Roll_Num;
    }
    void display()
    {
        cout<<"Name of student: "<<name<<endl;
        cout<<"Roll number: "<<Roll_Num<<endl;
    }
    void displayGrade(int num)
    {
       if(num>=90)
       cout<<"1st Division";
       else if(num>=70)
       cout<<"2nd Division";
       else if(num>=50)
       cout<<"3rd Division";
       else if(num<50)
       cout<<"Fail";
    }
};
int main()
{
    Student s;
    s.input();
    s.display();
    int num;
    cout<<"Enter marks of the student: ";
    cin>>num;
    s.displayGrade(num);
    return 0;
}