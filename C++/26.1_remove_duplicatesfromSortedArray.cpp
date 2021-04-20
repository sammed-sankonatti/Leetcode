#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,2,3,4,5,6,6,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    int temp[n]={0};
    int j=0;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
            temp[j++]=arr[i];    
    }
    temp[j]=arr[n-1];

    for(int i=0;i<=j;i++)
    {
       arr[i]=temp[i];
    }
    for (int i = 0; i <= j; i++)
    {
       cout<<arr[i]<<" ";
    }

    cout<<"--------------------------------------------------------"<<endl;
    int array[]={5,6,6,7,7,8};
    int m = sizeof(array) / sizeof(array[0]);
    int k=0;
    for(int i=0;i<m-1;i++)
    {
        if(array[i]!=array[i+1])
        {
            array[k++]=array[i];
        }
    }
    array[k++]=array[m-1];
    cout<<"array is"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<array[i]<< " ";
    }
}