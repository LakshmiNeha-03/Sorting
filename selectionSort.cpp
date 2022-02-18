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
void selectionSort(int a[],int n)
{
for(int i=0; i<n ; i++)
{
    for (int j = i+1; j<n ; j++)
    {
        if(a[i]>a[j])
        swap(a[i],a[j]);
    }
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
    selectionSort(a,n);
    cout<<"sorted array"<<endl;
    printArray(a,n); 
}