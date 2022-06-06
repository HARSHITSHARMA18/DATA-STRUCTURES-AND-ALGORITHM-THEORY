//----------------find the pair in the array having the given sum--------------------
#include<iostream>
using namespace std;
//------------------------------------approach 1: O(n2)----------------------

//bool twopoint(int a[], int n, int x)
//{
//    for(int i=0;i<n;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//            if(a[i]+a[j]==x)
//            return true;
//        }
//    }
//    return false;
//
//}

//---------------------approach 2: O(logn)----------------
bool twopoint(int a[], int n, int x)
{
    int left=0,right=n-1;

    while(left<=right)
    {
        if(a[left]+a[right]==x)
        return true;

        else if(a[left]+a[right]>x)
        right--;

        else
        left++;
    }
}

int main()
{
     int a[100],n,x;
    cout<<" Enter the size of array :";
    cin>>n;
    cout<<" enter the value of x";
    cin>>x;

    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    bool res=twopoint(a,n,x);
    if(res==true)
    cout<<endl<<"YES";
    else
    cout<<endl<<"NO";

    return 0;

}
