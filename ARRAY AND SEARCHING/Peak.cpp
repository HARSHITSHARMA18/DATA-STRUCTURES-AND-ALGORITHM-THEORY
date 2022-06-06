//-------------------------find the peak element in the array-----------
#include<iostream>
using namespace std;

//-------------------approach 1 :O(n)---------------------------
//int peak(int a[],int n)
//{
//    if(n==1) return a[0];
//    if(a[0]>a[1]) return a[0] ;
//    if(a[n-1]>a[n-2]) return a[n-1];
//
//    for(int i=1;i<n-1;i++)
//    {
//        if(a[i]>=a[i-1] && a[i]>=a[i+1])
//        return a[i];
//
//    }
//
//}

//-----------------approach 2: O(logn)-------------------------------
int peak(int a[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if((mid==low|| a[mid]>=a[mid-1]) && (mid==high|| a[mid]>=a[mid+1]))
        return a[mid];

        else if(a[mid-1]>a[mid])
        high=mid-1;

        else
        low=mid+1;
        
    }
}
int main()
{
     int a[100],n;
    cout<<" Enter the size of array :";
    cin>>n;

    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    int res=peak(a,n);
    cout<<endl<<res;
    return 0;


}