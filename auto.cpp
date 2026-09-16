#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {10, 20, 30, 40, 50};

    cout << "Elements of the collection:" << endl;

    for (auto a : num)
    {
        cout << a<< " ";
    }
    return 0;
}