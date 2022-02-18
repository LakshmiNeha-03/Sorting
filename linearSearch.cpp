# include <iostream>
using namespace std;

void linearSearch(int a[], int x,int n)
{
    for(int i=0 ; i<n ;i++)
    {
        if(a[i]==x)
        {
            cout<<"The element is found at index "<<  i  <<endl;
        }
    }
}

int main()
{
    int n,x;
    int a[n];
    cin>>n;
    cout<<" enter the element to be found "<<endl;
    cin>>x;
    cout<<" enter the elements of an array "<<endl;
    for(int i=0; i <n; i++)
    {
        cin>>a[i];
    }
    linearSearch(a,x,n);
    return 0;
}
