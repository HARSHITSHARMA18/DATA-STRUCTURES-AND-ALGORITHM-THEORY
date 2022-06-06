//---------------------sorted array increasingly or equal--------------------------------

#include<iostream>
using namespace std;
//---------------------------approach 1:O(n2)

//bool sorted(int a[],int n)
//{
// for(int i=0;i<n;i++)
// {
//     for(int j=i+1;j<n;j++)
//     {
//         if(a[j]<a[i])
//         return false;
//
//     }
// }
// return true;
//
//}
//----------------------approach 2: O(n)-------------------------

bool sorted (int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        return false;
    }
    return true ;
}

int main()
{
    int a[00],n;
    cout<<"enter the size of the array :";
    cin>>n;

    cout<<"\n enter the elements one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    bool temp=sorted(a,n);
                     
    if(temp==true)
    cout<<endl<<" the array is sorted increasingly";
     if(temp==false)
    cout<<endl<<" the array is unsorted ";

    return 0;
    
}