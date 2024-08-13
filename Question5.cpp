// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.
#include<iostream>
using namespace std;
int main()
{
    string arr[5]={"vishal","lade","arun","utkarsh","mayank"};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n-1;i++)
    {
        bool flag =false;
        for(int j=0;j<n-1-i;j++)
        {
            
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}