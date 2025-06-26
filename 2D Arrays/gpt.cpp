#include<iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter number of rows = ";
    cin >> r;

    int c;
    cout << "Enter number of columns = ";
    cin >> c;

    int arr[r][c];

    // Input
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output: Reverse only even-indexed rows
    for(int i = 0; i < r; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = c - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for(int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
