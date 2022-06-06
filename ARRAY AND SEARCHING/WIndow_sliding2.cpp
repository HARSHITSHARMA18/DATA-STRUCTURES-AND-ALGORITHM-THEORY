//---------------------Given an unsorted NON_NEGATIVE array and sum , find if there is a subarray having given sum----------
#include<iostream>
#include<algorithm>
using namespace std;

//---------------------------------approach 1:O(n2)------------------------
//bool issubsum(int a[],int n,int sum)
//{
//    for(int i=0;i<n;i++)
//    {
//        int curr=0;
//        for(int j=i;j<n;j++)
//        {
//          curr+=a[j];
//          if(curr==sum)
//          return true ;
//
//        }
//    }
//    return false;
//
//}

//--------------------------approach 2:O(n)------------------------------------

bool issubsum(int a[],int n,int sum)
{
    int curr=a[0],s=0;
    int e;
    for( e=1;e<n;e++)
    {
        while(curr>sum && s<e-1)                     // to remove the first element of the window till the curr sum becomes less than given
                                                     // given sum
        {
            curr-=a[e];
            s++;

        }
        if(curr==sum)
        return true;

        if(e<n)
        curr+=a[e];
    }
    return(curr==sum);                      // if total sum at the end is smaller and don't match with the given sum and comes 
                                             // out of the loop   
    
}

int main()
{
    int a[100],n,sum;
    cout<<" Enter the size of array :";
    cin>>n;

    cout<<" Enter the sum:";
    cin>>sum;

    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    if(issubsum(a,n,sum)==true)
    cout<<endl<<"YES";
    else
    cout<<endl<<"NO";
    return 0;

}