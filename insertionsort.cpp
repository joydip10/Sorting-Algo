#include<iostream>

using namespace std;
void insertionsorting(int *num,int n)
{
    for(int i =0;i<n;i++)
    {
        int x= num[i];
        int j = i-1;
        while(j>=0 && num[j]>x)
        {
            num[j+1]= num[j];
            j--;
        }
        num[j+1]=x;
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
    insertionsorting(arr,5);
    cout<<"After Sorting: ";
    for(int i =0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;

}
