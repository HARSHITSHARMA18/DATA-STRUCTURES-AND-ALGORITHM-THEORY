//-----------------count the  no of occurances of an elements/ frequency------------------
#include<iostream>
using namespace std;

//------------------ approach : two time use of binary search-------
int firstocc(int a[],int n,int x)
{ 
    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(x<a[mid])
        high=mid-1;

        else if(x>a[mid])
        low=mid+1;

        else
        {
            if(mid==0 || a[mid-1]!=a[mid])
            return mid;
            else
            high=mid-1;

        }
    }
    return -1;

}
int lastocc(int a[],int n,int x)
{
    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(x<a[mid])
        high= mid-1;

        else if (x>a[mid])
        low=mid+1;

        else
        {
            if(mid==high || a[mid+1]!=a[mid])
            return mid;
            else
            low=mid+1;

        }
    }
}
int countocc(int a[],int n,int x)
{
   int first=firstocc(a,n,x);

   if(first==-1)
   return 0;
   else
   {
       return (lastocc(a,n,x)-first) +1;

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

    int res=countocc(a,n,x);
    if(res==0)
    cout<<endl<<" the element is not present in the array";
    else
    cout<<endl<<res;

    return 0;
    
}