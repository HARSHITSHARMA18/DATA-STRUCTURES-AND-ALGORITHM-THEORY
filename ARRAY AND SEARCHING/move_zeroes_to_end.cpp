//----------------------- move to zeroes to end---------------------

#include<iostream>
using namespace std;

void movetoend(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            int temp=a[i];
            a[i]=a[count];
            a[count]=temp;
            count++;

        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}

int main()
{
    int a[100],n;
    cout<<" enter the size:";
    cin>>n;

    cout<<endl<<" enter the elements :";
    for(int i=0;i<n;i++)
    cin>>a[i];

    movetoend(a,n);
    return 0;

}