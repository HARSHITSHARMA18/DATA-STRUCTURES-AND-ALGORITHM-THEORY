//--------------------------reverse an array -----------------------------------
#include<iostream>
using namespace std;

//-------------- my approach :O(n) -----------------

//void reverse(int a[],int n)
//{
//    for(int i=0;i<n/2;i++)
//    {
//        int temp=a[i];
//        a[i]=a[n-(i+1)];
//        a[n-i-1]=temp;
//    }
//     for(int i=0;i<n;i++)
//    cout<<a[i]<<" ";
//}

//---------------------------approach 2: O(n)------------------------
void reverse(int a[],int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        int temp=a[low];
        a[low]=a[high];
        a[high]=temp;

        low++;
        high--;

        
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}

int main()
{
    int a[100],n;
    cout<<" Enter the size of the array";
    cin>>n;

    cout<<" \n enter the elements one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    reverse(a,n);
    return 0;
}    