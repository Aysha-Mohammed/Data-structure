#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,value,pos;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n+1];
    cout<<"enter all the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position ";
    cin>>pos;
    while(pos<1||pos>n+1)
    {
        cout<<"invalid position";
        cout<<"enter new position";
        cin>>pos;
    }
    for(int i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];

    }
    cout<<"insert value ";
    cin>>value;
    arr[pos-1]=value;
    cout<<"after entering at position "<<pos<<endl;
    for(int i=0;i<=n;i++)
    {
       cout<<arr[i]<<" ";
    }
}

