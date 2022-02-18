#include <iostream>
using namespace std;
void swap(int *s1 , int *s2)
{
    int temp =*s1;
    *s1 = *s2;
    *s2 = temp;
}
void printArray(int a[],int n)
{
    for(int i=0 ; i<n ;i++)
    {
        cout<<a[i]<<"";
    }
}
int partition(int arr[], int l, int h)
{
    int p = arr[h];
    int c = l-1;
 for(int i=l; i<h;i++)
 {
 if(arr[i] < p)
   {
    swap (&arr[i],&arr[c+1]);
    c++;
   }
 }
 swap(&arr[h],&arr[c+1]);
   return (c+1);
}
void quickSort(int arr[],int l,int h)
{
    
    if (l<h)
    {
        int p = partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    } 
}
int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the elements of an array"<<endl;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    cout<<"sorted array"<<endl;
    printArray(a,n); 
}