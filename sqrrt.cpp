#include <iostream>

using namespace std;

int main()
{
    int i, x;
    cout << "enter number" << endl;
    cin >> x;
    for(int m = 1; m * m <= x; m++)
    {
        i = m;
    }
    cout << i << endl;
}