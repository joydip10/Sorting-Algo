#include<iostream>
#include<algorithm>
using namespace std;

selectionsort(int *num,int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                swap(num[i],num[j]);
            }
        }
    }
}
int main()
{
    int arr[5]={5,8,6,1,7};
    cout<<"Before sorting: ";
    for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionsort(arr,5);
    cout<<"After Sorting: ";
    for(int i =0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;

}
