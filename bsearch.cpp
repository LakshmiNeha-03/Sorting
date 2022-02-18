#include<iostream>
using namespace std;
int binarySearch(int a[], int l , int h,int x)
{
while(l<=h)
{
    //the flow of the code can be seen with the help of below statement
    //cout<<"l = "<<l<<" h= "<<h<<endl;
    int c = l+(h-l)/2;

    if(a[c]==x)
    {
    return c;
    }
    else if(a[c]>x)
    {
        h=c-1;
    }
    else 
    {
        l=c+1;
    } 
    
}
return -1;
}

int main()
{
    int n,x;
    cout<<"enter the total no. of elements"<<endl;
    cin>>n;
    cout<<"enter the element to be found"<<endl;
    cin>>x;
    cout<<"enter the elements of an array"<<endl;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The element is found at index "<<binarySearch(a,0,n-1,x)<<endl;
}
