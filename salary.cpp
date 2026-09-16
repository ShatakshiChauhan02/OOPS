//to store monthly salary of the employees in a vector double collection. Use range based for loop with auto 
//display all employees salary
//calculate total salary of the employees
//find the highest salaried employee
//count how many employees have salary>50000
//average salary
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> sal = {45000.50, 60000.75, 52000.00, 48000.25, 75000.80};
    double total = 0;
    double highest = sal[0];
    int c= 0;
    cout << "Employee Salaries:" << endl;

    for (auto s : sal)
    {
        cout << s << endl;
        total += s;
        if (s > highest)
        {
            highest = s;
        }
        if (s > 50000)
        {
            c++;
        }
    }
    double avg = total / sal.size();
    cout << "Total Salary Expense = " << total << endl;
    cout << "Highest Salary = " << highest << endl;
    cout << "Employees with salary > 50000 = " << c << endl;
    cout << "Average Salary = " << avg << endl;
    return 0;
}