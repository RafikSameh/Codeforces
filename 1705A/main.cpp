#include <iostream>
#include <string>


using namespace std;

int main()
{
    int i=0,j=0,q=0,z=0,temp=0;
    cin>>q;
    while(q<1 || q>100){
        cin>>q;
    }
    for(z=0;z<q;z++){
    int n=2,x;   //n number of each row , x height dif.
    cin>>n>>x;
    while(n<1 || n>100){
        cin>>n;
    }
    while(x<1 || x>1000){
        cin>>x;
    }
    int height[2*n];
    for(i=0;i<(2*n);i++){
        cin>>height[i];
        while(height[i]<1 || height[i]>1000){
            cin>>x;
        }
    }
    for(i=0;i<(2*n);i++)
    {
        for(j=0;j<(2*n);j++)
        {
            if(height[i]>height[j]){
                temp=height[i];
                height[i]=height[j];
                height[j]=temp;
            }
            else{
                continue;
            }
        }
    }
    int taller[n];
    int shorter[n];
    for(i=0;i<(2*n);i++){
        if(i<n){
            taller[i]=height[i];
        }
        else if(i>=n){
            shorter[i-n]=height[i];
        }

    }
    bool check=1;
    for(i=0;i<n;i++){
        if((taller[i]-shorter[i])>=x){
            check=1;
        }
        else{
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}
