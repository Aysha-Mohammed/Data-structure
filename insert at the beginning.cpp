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
    for(int i=n;i>=0;i--)
    {
        arr[i]=arr[i-1];

    }
    cout<<"insert value ";
    cin>>value;
    arr[0]=value;
    cout<<"after inserting the value at the beginning"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
