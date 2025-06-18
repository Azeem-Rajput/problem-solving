#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number=";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int half=n/2+1;
            if (i == half || j == half)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}