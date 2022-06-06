#include<iostream>

using namespace std;

int largest(int a[],int n)
{
    int res=0;

    for(int i=1;i<n;i++)
    {
        if(a[i]>a[res])
        res=i;

    }
    return res;

}

int main()
{
    int a[100],n;
    cout<<" Enter the size of the array";
    cin>>n;

    cout<<" \n enter the elements one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    int Largest = largest(a,n) +1 ;
    cout<<"\n "<<Largest;
    return 0;

}