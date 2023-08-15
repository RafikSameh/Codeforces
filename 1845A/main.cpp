#include <iostream>

using namespace std;
int main()
{
    int i = 0, tests;
    cin >> tests;
    int n,k,x;
    while (i < tests)
    {
        cin >> n;
        while (n < 1 || n > 100){
            cin >> n;}

        cin >> k;
        while (k < 1 || k > n){
            cin >> k;}

        cin >> x;
        while (x < 1 || x > k){
            cin >> x;}

        if (n == k && x != n)
        {
            cout << "YES\n1" << endl;
            cout << n << endl;
        }
        else if (k == 1 && x == 1)
        {
            cout << "NO" << endl;
        }


        i++;
    }

}