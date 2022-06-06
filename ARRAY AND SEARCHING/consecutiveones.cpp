//------------------------------------------- Maximum consecutive Ones in an array------------------------------
#include<iostream>
#include<algorithm>
using namespace std;

//--------------------------------------- approach 1: O(n2)-------------------------------------
//int maxcons(int a[],int n)
//{
//    int res=0;
//
//    for(int i=0;i<n;i++)
//    {
//        int curr=0;
//        for(int j=i+1;j<n;j++)
//        {
//            if(a[j]==1)
//            curr++;
//            else break;
//
//        }
//        res=max(res,curr);
//
//    }
//    return res;
//
//}

//--------------------------------------------approach 2: O(n)-------------------------------------
int maxcons(int a[],int n)
{
    int res=0;
    int curr=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        curr=0;
        else
        {
         curr++;
         res=max(res,curr);

        }
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

    int resu=maxcons(a,n);
    cout<<endl<<resu;

    return 0;

}