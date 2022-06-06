//------------------------count the the number of ones in a boolean array---------
#include<iostream>
using namespace std;

//---------------approach 1: naive---------------------
//int countone(int a[],int n)
//{    int i;
//    for( i=0;i<n;i++)
//    {
//        if(a[i]==1)
//        break;
//    }
//    return n-i;
//
//}

//-----------------approach 2: using binary serach and finding the first occurence----------------
int countone(int a[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]==0)
        low=mid+1;

        else
        {
         if(mid==0 || a[mid-1]!=a[mid])
         return (n-mid);
         else
         high=mid-1;

        }
    }
    return 0;
    
}

int main()
{
    int a[100],n,x;
    cout<<" Enter the size of array :";
    cin>>n;


    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    int res=countone(a,n);
    if(res==0)
    cout<<endl<<" only zeroes in the array";
    else
    cout<<res;
    return 0;

}
