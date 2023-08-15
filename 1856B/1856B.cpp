#include <iostream>

using namespace std;

int main()
{
    int tc;
    
    cin >> tc;
    
    
    while(tc--)
    {
        long long sum(0);
        long n=0;
        cin >> n;
        long x;
        for (int i=0;i<n;i++)
        {
            cin >> x;
            while(x <= 0)
            {
                cin >> x;
            }
            
            if(x == 1)
            {
                --sum;
            }
            else
            {
                sum += (x-1);
            }
        }
        if(n > 1 && sum >= 0)
        {
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}