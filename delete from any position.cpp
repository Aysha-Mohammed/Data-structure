#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,pos;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"enter all the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position ";
    cin>>pos;
    if(pos<1||pos>n)
    {
        cout<<"invalid position";
    }
    else
    {
        for(int i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        cout<<"after deleting an element from position "<<pos<<endl;
        for(int i=0;i<n-1;i++)
        {
        cout<<arr[i]<<" ";
        }
    }
}

