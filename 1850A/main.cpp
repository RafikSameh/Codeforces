#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int tests;
    int arr[3];
    cin >> tests;
    while (i < tests)
    {
        for (int j=0; j < 3; j++)
        {
            cin >> arr[j];
            while (arr[j] > 9)
            {
                cin >> arr[j];
            }
        }
        if (arr[0] + arr[1] >= 10)
        {
            cout << "YES" << endl;
        }
        else if (arr[0] + arr[2] >= 10)
        {
            cout << "YES" << endl;
        }
        else if (arr[1] + arr[2] >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout <<"NO" <<endl;
        }

        
        i++;
    }
}