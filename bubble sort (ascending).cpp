#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
 int counter=1;
 int a[]={22,55,44,88,77,11,66,33};
 int n=sizeof(a)/sizeof(a[0]);
 while(counter<n){
 for(int i=0;i<n-counter;i++)
 {
   if (a[i]>a[i+1])
   {
     int temp=a[i];
     a[i]=a[i+1];
     a[i+1]=temp;
   }
 }
 counter++;
 }
 cout<<"the sorted array:";
 for(int i=0;i<n;i++)
  {
   cout<<a[i]<<" ";
  }
  return 0;
}
