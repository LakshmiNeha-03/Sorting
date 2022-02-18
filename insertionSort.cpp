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

void insert(int a[], int i)
{
    for (int j = i; j>0 ; j--)
    {
        if(a[j] < a[j-1]) //changing the symbol (<) into (>) sorts the array in descending order 
        {
        swap(a[j],a[j-1]);
        }
        else
        {
            break;
        }
    }
}
void insertionSort(int a[],int n)
{
for(int i=1; i<n ; i++)
{
    insert(a,i);
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
    insertionSort(a,n);
    cout<<"sorted array"<<endl;
    printArray(a,n); 
}