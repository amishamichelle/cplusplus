#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,7,3,9,2};
    int s,n;
    cout<<"enter number to be searched";
    cin>>s;

    for(int i=0; i<n;i++)
    {
        if(arr[i]==s)
        {
            cout<<"number is found at "<<i+1<<" position";
            break;
        }
    }
    return 0;
}
