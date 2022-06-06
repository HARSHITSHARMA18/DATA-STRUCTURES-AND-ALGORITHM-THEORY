//-------------------------------to find the  equilibrium point of a given aray in a given range----------------------
#include<iostream>
using namespace std;

//---------------------------------approach 1:O(n2)----------------------------------------
//bool equil(int a[],int n)
//{
//    
//    for(int i=0;i<n;i++)
//    {
//        int lsum=0;
//        for(int j=0;j<i;j++)
//        lsum+=a[j];
//
//        int rsum=0;
//        for(int k=i+1;k<n;k++)
//        rsum+=a[k];
//
//        if(lsum==rsum)
//        return true;
//
//    }
//    return false;
//
//}

bool equil(int a[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=a[i] ;

    int lsum=0;
    for(int i=0;i<n;i++)
    {
        if(lsum==sum-a[i])
        return true ;

        lsum+=a[i];
        sum-=a[i];

    }
    return false;
    
}


int main()
{
    int a[100],n;
    cout<<" Enter the size of array :";
    cin>>n;

    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    if(equil(a,n)==true )
    cout<<endl<<" YES";
    else
    cout<<endl<<"NO";
    return 0;


}