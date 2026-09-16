#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int Roll_Num;
    
    void display()
    {
        cout<<"Enter Student's name: ";
        getline(cin,name);
        cout<<"Enter roll number: ";
        cin>>Roll_Num;
        cout<<"Name of student: "<<name<<endl;
        cout<<"Roll number: "<<Roll_Num<<endl;
    }
    void display(string name,int roll)
    {
        cout<<"Name of student: "<<name<<endl;
        cout<<"Roll number: "<<roll<<endl;
    }
    void display(string name,int roll,int num)
    {
        cout<<"Name of student: "<<name<<endl;
        cout<<"Roll number: "<<roll<<endl;
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
    s.display();
    string name;
    cout<<"Name of student: ";
    getline(cin>>ws,name);
    int roll;
    cout<<"Roll number: ";
    cin>>roll;
    s.display(name,roll);
    int num;
    cout<<"Enter marks of the student: ";
    cin>>num;
    s.display(name,roll,num);
    return 0;
}