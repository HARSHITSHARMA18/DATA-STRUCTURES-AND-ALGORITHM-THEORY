//------------------------------------ Maximum Differnce-------------------
#include<iostream>
#include<algorithm>

using namespace std;

//--------------------------------approach 1:O(n2)---------------------
//int maxdiff(int a[],int n)
//{
//  int res=a[1]-a[0];
//  for(int i=0;i<n-1;i++)
//  {
//      for(int j=i+1;j<n;j++)
//      {
//          res=max(res,a[j]-a[i]) ;
//      }
//  }
//  return res;
//
//}

//--------------------------------------approach 2 : O(n)--------------------------
int maxdiff(int a[],int n)
{
    int res=a[1]-a[0];
    int minval=a[0];

    for(int i=1;i<n;i++)
    {
        res=max(res,a[i]-minval);
        minval=min(minval,a[i]);

    }
    return res;

}

int main()
{
    int a[100],n;
     cout<<" enter the size:";
    cin>>n;
    cout<<endl<<" enter the elements of array: ";
    for(int i=0;i<n;i++)

    cin>>a[i];
    int maxd=maxdiff(a,n);

    cout<<endl<<maxd;
    return 0;
}