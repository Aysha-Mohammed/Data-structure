#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"enter all the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"after deleting an element for the beginning"<<endl;
    for(int i=0;i<n-1;i++)
    {
       cout<<arr[i]<<" ";
    }
}
