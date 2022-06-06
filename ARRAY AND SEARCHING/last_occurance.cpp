//--------------------------to find out the last occurence of element--------------
#include<iostream>
using namespace std;

//----------------approach 1: recuursive binary search----------------
//int lastocc(int a[],int low,int high,int x)
//{
//    if(low>high)
//    return -1;
//
//    int mid=(low+high)/2;
//
//    if(x<a[mid])
//    return lastocc(a,low,mid-1,x);
//
//    else if( x>a[mid])
//    return lastocc(a,mid+1,high,x);
//    
//    else
//    {
//        if(mid==high || a[mid+1]!=a[mid])
//        return mid;
//        else
//        return lastocc(a,mid+1,high,x);
//    }
//
//
//}

//----------------------approach 2: iterative binary search----------------
int lastocc(int a[],int n,int x)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(x<a[mid])
        high= mid-1;

        else if (x>a[mid])
        low=mid+1;

        else
        {
            if(mid==high || a[mid+1]!=a[mid])
            return mid;
            else
            low=mid+1;

        }
    }
}

int main()
{
     int a[100],n,x;
    cout<<" enter the size:";
    cin>>n;
    cout<<endl<<" enter the value of element:";
    cin>>x;


    cout<<endl<<" enter the elements of array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    //int low=0,high=n-1;
    //int mid=lastocc(a,low,high,x);

    int mid=lastocc(a,n,x);

    if(mid==-1)
    cout<<endl<<"element is not in the array:";
    else
    cout<<endl<<mid<<"th index";

    return 0;


}