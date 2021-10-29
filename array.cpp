#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
int s,temp;
for(int i=0;i<n-1;i++)
{
s=i;
}
for(int j=i+1;j<n;j++)
{
if(arr[s]>ar[j])
{
s=j;
}
}
temp=arr[i];
arr[i]=arr[s];
arr[s]=temp;
}
}
int main()
{
int n;
cout<<"the size of array is\n");
cin>>n;
int arr[n];
cout<<"enter the elements of array\n";
for(int i=0;i<n;i++)
{
cin>>ar1[n];
}
sort(arr,n);
cout<<"after sorting\n";
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
