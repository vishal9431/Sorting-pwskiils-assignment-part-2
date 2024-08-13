// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[6]={3,6,1,9,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i+=2)
    {
        sum1=arr[i]+10*sum1;
    }   
    for(int i=1;i<n;i+=2)
    {
        sum2=arr[i]+10*sum2;
    }
    cout<<"MINIMUM possible sum of this are  : "<<sum1+sum2<<endl;
}