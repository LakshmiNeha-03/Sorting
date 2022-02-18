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

void merge(int arr[], int low,int mid, int high)
{
   int S1 = mid-low+1 , S2 = high-mid;
   int X[S1] , Y[S2];
   for (int i=0; i<S1 ; i++)
   {
       X[i] = arr[low + i];
   } 
   for (int i=0; i<S2 ;i++)
   {
       Y[i]= arr[mid+1+i];
   }
   int px =0,py=0,p=low;
   while(px < S1 && py<S2) 
   {
       if(X[px]<=Y[py])
       {
           arr[p]=X[px];
           px ++;
           p ++;
       }
       else
       {
           arr[p]=Y[py];
           py ++;
           p ++;
       }
   }
   while(px<S1)
   {
       arr[p]=X[px];
       p ++;
       px ++;
   }
   while(py<S2)
   {
       arr[p]=Y[py];
       p ++;
       py ++;
   }

}
void mergeSort(int arr[], int low, int high)
{
 if(low<high) 
    {
       int mid=low+(high-low)/2;
       mergeSort(arr,low,mid);
       mergeSort(arr,mid+1,high);
       merge(arr,low,mid,high);
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
    mergeSort(a,0,n-1);
    cout<<"sorted array"<<endl;
    printArray(a,n); 
}