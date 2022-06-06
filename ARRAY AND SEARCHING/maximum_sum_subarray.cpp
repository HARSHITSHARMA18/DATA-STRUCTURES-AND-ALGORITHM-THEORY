//-----------------------------------------maximum sum subarray--------------
#include<iostream>
#include<algorithm>                        //for max and min
using namespace std;

//----------------------approach 1:O(n2)------------------------
//int maxsum(int a[],int n)
//{
//    int res=a[0];
//    for(int i=0;i<n;i++)
//    {
//        int curr=0;
//        for(int j=i;j<n;j++)
//        {
//            curr+=a[j];
//            res=max(res,curr);
//
//        }
//
//    }
//    return res;
//
//}

//-------------------------approach 2: O(n) KADEN'S ALGO -------------------------------
int maxsum(int a[],int n)
{
    int res=a[0];
    int maxending= a[0];

    for(int i=1;i<n;i++)
    {
        maxending=max(maxending+a[i],a[i]);
        res=max(res,maxending);
    }

    return res;
    
}

int main()
{
    int a[100],n;
    cout<<" Enter the size of array :";
    cin>>n;

    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    int sum=maxsum(a,n);
    cout<<endl<<sum;
    return 0;

}