#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
int n;
cout<<"enter n: ";
cin>>n;
int arr[n];
cout<<"enter all the elements: ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    int min=i;
    for(int j=i+1;j<n;j++)
    {
       if(arr[j]<arr[min])
       {
           min=j;
       }
    }
       if(arr[min]!=i)
       {
           swap
           (arr[i], arr[min]);
       }
  }
  cout<<"sorted elements: ";
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
}
