//-----------------------------------leaders in an array----------------------------
#include<iostream>
using namespace std;

//-------------------------------approach 1: O(n2)----------------------
//void leaders(int a[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        bool flag=true;
//        for(int j=i+1;j<n;j++)
//        {
//            if(a[j]>=a[i])
//            flag=false;
//        }
//        if(flag==true)
//        cout<<a[i]<<" ";
//
//    }
//
//}

//--------------------------------approach 2: O(n)-----------------------------
void leaders(int a[],int n)
{
    int curr=a[n-1];
    cout<<curr<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>curr)
        {
            curr=a[i];
            cout<<curr<<" ";
        }
    }

}
int main()
{
    int a[100],n;
    cout<<" enter the size of array:";
    cin>>n;
    cout<<endl<<" enter the elements of array:";

    for(int i=0;i<n;i++)
    cin>>a[i];

    leaders(a,n);
    return 0;

}