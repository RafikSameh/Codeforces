#include <iostream>

using namespace std;

int main()
{
    int i = 0, tests;
    cin >> tests;
    int b,c,h,max;
    while (i < tests)
    {
        cin >> b;
        while (b < 2 || b > 100){
            cin >> b;}

        cin >> c;
        while (c < 1 || c > 100){
            cin >> c;}

        cin >> h;
        while (h < 1 || h > 100){
            cin >> h;}

        if(b > c+h)
        {
            max = ((c+h)*2)+1;
        }
        else if(b < c || b < h || b <= (c+h))
        {
            max = (b*2) - 1;
        }
        cout << max <<endl;

        i++;
    }
}