//----------------------------------------remove duplicaties----------------------------

#include<iostream>
using namespace std;

void remdup(int a[],int n)
{
    int temp[n],res;
    temp[0]=a[0];
    res=1;

    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[res-1])
        {
            temp[res]=a[i];
            res++;
        }
    }
    for(int j=0;j<res;j++)
    cout<<temp[j]<<" ";

}

int main()
{
    int a[100],n;
    cout<<" enter the size of the array:";
    cin>>n;

    cout<<endl<<" enter the array :";
    for(int i=0;i<n;i++)
    cin>>a[i];

    remdup(a,n);
    return 0;

}