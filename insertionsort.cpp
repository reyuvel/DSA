#include<iostream>
using namespace std;


class solution {
    public:

    void insertion_sort(int arr[],int n)
    {
      int i,j;
      for(i=0;i<n;i++)
      {
        for(j=i;j>0;j--)
        {
            if( arr[j-1]>arr[j])
            {
                swap(arr[j],arr[j-1]);
            }
            
        }
      }

      
    }
};

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

    solution ob;
    ob.insertion_sort(arr,n);

    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    

}