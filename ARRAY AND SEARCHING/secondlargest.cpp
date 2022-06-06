#include<iostream>
using namespace std;

//approach 1 : use largest func and find the second largest 
//int largest(int a[],int n)
//{
//    int res=0;
//
//    for(int i=1;i<n;i++)
//    {
//        if(a[i]>a[res])
//        res=i;
//
//    }
//    return res;
//
//}
//
//int secondlargest(int a[],int n)
//
//{
//    int Largest=largest(a,n);
//    int res=-1;
//
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]!=a[Largest])
//        {
//           if(res==-1)
//           res=i;
//
//           else if(a[i]>a[res])
//           res=i;
//        }
//    }
//
//    return res;
//
//}
//--------------------------------------------------------------------approach 2:O(N)--------------------------------------------------------

int secondlargest(int a[],int n)
{
    int res=-1,largest=0;

    for(int i=1;i<n;i++)
    {
        if(a[i]>a[largest])
        {
            res=largest;
            largest=i;
        }
        else if(a[i]!=a[largest])
        {
            if(res==-1||a[i]>a[res])
            res=i;
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

    int seclargest= secondlargest(a,n)+1;

    cout<<endl<<seclargest;
    return 0;

}