#include<stdio.h>

int main()
{
    int i,j,n;
    int arr[50];


printf("enter the number of elements:");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("enter the %d index number:",i);
    scanf("%d",&arr[i]);
}

    for (i=0;i<=n-2;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
           if (arr[j]<arr[min])
           {
            min=j;
           }
           
                   
        }
        
        int temp;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        
    }

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }


}