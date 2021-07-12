#include<iostream>
#include<algorithm>
using namespace std;

bubblesort(int *num,int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n-i-1;j++)
        {
            int temp=0;
            if(num[j+1]<num[j])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[5]={5,4,3,2,1};
    cout<<"Before sorting: ";
    for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,5);
    cout<<"After Sorting: ";
    for(int i =0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;

}
