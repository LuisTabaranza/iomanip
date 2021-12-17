#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << "            MULTIPLICATION TABLE";
    for (int row = 1; row <= 10; row++)
    {
        for (int column = 1; column <= 10; column++)
        cout << setw(3) << row*column << " ";
        cout << endl;
    }

    return 0;
}
