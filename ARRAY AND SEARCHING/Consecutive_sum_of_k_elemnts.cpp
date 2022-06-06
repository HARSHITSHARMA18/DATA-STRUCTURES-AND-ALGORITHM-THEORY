//------------------------------Maximum Consecutive Sum of k elements in an array-------------------
#include<iostream>
#include<algorithm>
using namespace std;

//--------------------------approach 1: O(n2)-------------------------------------------------
//int consum(int a[],int n,int k)
//{
//    int maxsum=0;
//    for(int i=0;i<n-k+1;i++)
//    {
//        int curr=0;
//        for(int j=0;j<k;j++)
//        curr+=a[i+j];
//    
//         maxsum=max(maxsum,curr);
//
//    }
// return maxsum;
//}

//----------------------------------Approach 2:O(n) : WINDOW SLIDING-----------------------------------

int consum(int a[],int n,int k)
{
    int res=0, curr=0;
    for(int i=0;i<k;i++)
    curr+=a[i];

    res=curr;

    for(int i=k;i<n;i++)
    {
        curr+=a[i]-a[i-k];
        res=max(curr,res);

    }

    return res;
    
}

int main()
{
    int a[100],n,k;
    cout<<" Enter the size of array :";
    cin>>n;
    cout<<" enter the value of k";
    cin>>k;

    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int sum=consum(a,n,k) ;
    cout<<endl<<sum;
    return 0;
}