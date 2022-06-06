//-----------------------------------finding a element in a sorted rotated array---------------------------
#include<iostream>
using namespace std;

//--------------------approach 1: O(n)----------------------
//int sortrot(int a[],int n,int x)
//
//{
//   for(int i=0;i<n;i++)
//   if(a[i]==x)
//   return i;
//
//}

int sortrot(int a[],int n, int x)
{
    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]==x)
        return mid;

        else if(a[mid]>a[low])
        {
            if((a[low]<=x) && (x<=a[mid]))
            high=mid-1;
            else
            low=mid+1;

        }
        else
        {
              if((a[mid]>=x) && (x<=a[high]))
              low=mid+1;
              else
              high=mid-1;


        }

    }
    return -1;

}

int main()
{
    int a[100],n,x;
    cout<<"enter the size of the array:";
    cin>>n;

    cout<<endl<<"enter the elements of the array:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<endl<<"enter the number that has to be find out:";
    cin>>x;

    int res=sortrot(a,n,x);
    if(res==-1)
    cout<<endl<<"element no present:";
    else
    cout<<endl<<res+1<<"the position:";

    return 0;

}
