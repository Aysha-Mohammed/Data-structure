#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch(int n,int arr[],int value)
{
 int left=0,right=n-1,mid;
 while(left<=right)
 {
  mid=(right+left)/2;
  if(arr[mid]==value)
  { 
  return mid;
  }
  if(arr[mid]>value)
  {
   right=mid -1;
  }
  else
  {
   left =mid+1;
  }
 }
 return -1;
}
int main()
{
 int value;
 int arr[]={10,5,12,19,18};
 int n=sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+n);
 for(int i =0;i<n;i++)
 {
  cout<<arr[i]<<" ";
 }
 cout<<endl;
  cin>>value;
  int result= binarysearch(n,arr,value);
  if (result!=-1)
  {
   cout<<"the element is present in index "<<result;
  }
  else
  {
   cout<<"the element is not present";
  }
  return 0;
}
