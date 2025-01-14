#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,value;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n+1];
    cout<<"enter all the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"insert value ";
    cin>>value;
    arr[n]=value;
    cout<<"after inserting the value at the end"<<endl;
    for(int i=0;i<=n;i++)
    {
       cout<<arr[i]<<" ";
    }
}

