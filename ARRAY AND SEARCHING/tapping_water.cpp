//--------------------------tapping rain water -----------------------
#include<iostream>
#include<algorithm>
using namespace std;

//-----------------------approach 1: find lmax and rmax individually--------------------

//int getwater(int a[],int n)
//{
//    int res=0;
//    for(int i=1;i<n-1;i++)
//    {  
//        int lmax=a[i];
//        for(int j=0;j<i;j++)
//        lmax=max(lmax,a[j]);
//
//        int rmax=a[i];
//        for(int j=i+1;j<n;j++)
//        rmax=max(rmax,a[j]);
//
//        res += min(lmax,rmax)-a[i];
//
//        
//    }
//
//    return res;
//
//}

//------------------------approach 2: precomputing lmax and rmax----------------------------

int getwater(int a[],int n)
{   
    int res=0;
    int lmax[n],rmax[n];
    
    lmax[0]=a[0];
    for(int i=0;i<n;i++)
    lmax[i]=max(a[i],lmax[i-1]);

    rmax[0]=a[n-1];
    for(int i=n-2;i>=0;i--)
    rmax[i]=max(a[i],rmax[i+1]);

    for(int i=0;i<n;i++)
    res+=min(lmax[i],rmax[i])-a[i];

    return res;

}

int main()
{
     int a[100],n;
    cout<<" enter the size:";
    cin>>n;

    cout<<endl<<" enter the elements :";
    for(int i=0;i<n;i++)
    cin>>a[i];

    int water=getwater(a,n);
    cout<<endl<<water;

    return 0;

}