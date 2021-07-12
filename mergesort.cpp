#include<iostream>
#include<algorithm>
using namespace std;

mergesort(int* num,int l,int m,int r)
{
    int i ,j , k;
    int n1= m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i =0;i<n1;i++)
    {
        L[i]=num[l+i];
    }
    for(int i =0;i<n2;i++)
    {
        R[i]=num[m+1+i];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            num[k]=L[i];
            i++;
        }
        else
        {
            num[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        num[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        num[k]=R[j];
        j++;
        k++;

    }
}
mergearray(int *arr,int l ,int r)
{
    if(l<r){
    int m= l+(r-l)/2;
    mergearray(arr,l,m);
    mergearray(arr,m+1,r);
    mergesort(arr,l,m,r);
    }
}
int main()
{
    int arr[5]={5,4,3,2,1};
    cout<<"Before sorting: ";
    for(int i =0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    mergearray(arr,0,5);
    cout<<"After sorting: ";
    for(int i =0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;

    return 0;
}
