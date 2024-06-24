#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    int arr[50];

    cout << "enter the number of elements:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout << "enter the "<< i << "indexed element";
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
              swap(arr[j],arr[j+1]);
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout << arr[i] << "\n";
    }
}