//-----------------------------Majority ELements in an array-------------------------
#include<iostream>
using namespace std;

//----------------------------------approach 1: O(n2)---------------------------------
//int maj(int a[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        int curr=0;
//        for(int j=0;j<n;j++)
//        {
//            if(a[i]==a[j])
//            curr++;
//
//        }
//        if(curr>n/2)
//        return i;
//
//    }
//    return -1;
//
//}

//------------------------------------approach 2: O(n)-----------------------------------
int maj(int a[],int n)
{
    int res=0;
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[res])
        count++;
        else
        count--;

        if(count==0)
        {res=i;
        count=1;
        }

    }
    int count1 =0;
    for(int i=0;i<n;i++)
    {
        if(a[res]==a[i])
        count1++;
    }
        if(count1<=n/2)
        res= -1;
        
        return res;

    
    
}
int main()
{
    int a[100],n;
    cout<<" enter the size of array:";
    cin>>n;
    cout<<endl<<" enter the elements of array:";

    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int ai=maj(a,n);
    cout<<endl<<a[ai];
    return 0;
    

}
