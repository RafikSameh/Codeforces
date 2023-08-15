#include <iostream>
#include <string>
#include <cctype>

using namespace std;
string toUpper(string input);
int main()
{

    int q;
    string input;
    cin>>q;
    while(q<1 || q>1000){
        cin>>q;
    }
    for(int i =0;i<q;i++){
    cin>>input;
    string yes= toUpper(input);

    if (yes =="YES")
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;;
    }
    }
    return 0;
}
string toUpper(string input)
{
    for(int i=0;i<3;i++){
        input[i]=toupper(input[i]);
    }
    return input;


}
