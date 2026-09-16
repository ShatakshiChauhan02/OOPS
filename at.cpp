//attendance of 6 students in a vector in collection. use range based for loop with auto to display all attendance percentage and count how many students have attendance more 75%
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {56,78,96,83,45,66};
    int c=0;
    cout << "Students having attendance more than 75% are:" << endl;

    for (auto a : num)
    {
        if(a>75)
        c++;
    }
    cout<<c;
    return 0;
}