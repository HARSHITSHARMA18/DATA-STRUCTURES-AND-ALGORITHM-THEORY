//---------------------------------------------binary Search using iteration and reccursion --------------------------
#include<iostream>
using namespace std;

//---------------------------------------approach 1 ITERATION :O(logn) and aux-O(1)-----------------------------------
//int binarysearch(int a[],int n,int x)
//{
//    int low=0, high=n-1;
//
//    while(low<=high)
//    {   
//        int mid=(low+high)/2;
//        if(a[mid]==x)
//        return mid;
//
//        else if(a[mid]>x)
//        high=mid-1;
//
//        else
//        low=mid+1;
//
//    }
//   return -1;
//} 

//------------------------------Approach 2: O(logn) and aux-O(logn)-------------------------------
int binarysearch(int a[],int low,int high,int x)
{
    if(low>high)
    return -1;

    int mid= (low+high)/2;

    if(a[mid]==x)
    return mid;

    else if(a[mid]>x)
    return binarysearch(a,low,mid-1,x);

    else
    return binarysearch(a,mid+1,high,x);
    

}
int main()
{
    int a[100],n,x;
    cout<<" Enter the size of array :";
    cin>>n;
    cout<<"\n enter the element to be find out:";
    cin>>x; 

    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int low =0,high=n-1;

    int res=binarysearch(a,low,high,x);
    cout<<endl<<res;
    return 0;


}
