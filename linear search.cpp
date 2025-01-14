#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,value,y=0;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"enter all the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the search element ";
    cin>>value;
    for(int i=0;i<n;i++)
    {
     if(arr[i]==value)
        {
        y++;
        break;
        }
    }
    if(y==1)
    {
     cout<<"found";
    }
    else{
        cout<<"not found";
    }
}
