//-------------------------------left rotate by d-------------------------------
#include<iostream>
using namespace std;

//------------------------approach 1:O(n*d),space-0(1)---------------------------------------
//void leftrotate(int a[],int n)
//{
//    int temp=a[0];
//    for(int i=1;i<n;i++)
//    {
//        a[i-1]=a[i];
//    }
//    a[n-1]=temp;
//
//}
//void Lrd(int a[],int n,int d)
//{
//    for(int i=0;i<d;i++)
//    leftrotate(a,n);
//
//    for(int i=0;i<n;i++)
//    cout<<a[i]<<" ";
//
//  
//}

//-----------------------------approach 2: O(n),space-0(d)------------------------------------

//void Lrd(int a[],int n,int d)
//{
//    int temp[d];
//
//    for(int i=0;i<d;i++)
//    temp[i]=a[i];
//
//    for(int i=d;i<n;i++)
//    a[i-d]=a[i];
//
//    for(int i=0;i<d;i++)
//    a[n-d+i]=temp[i];
//
//
//
//   for(int i=0;i<n;i++)
//   cout<<a[i]<<" ";
//
//}

//--------------------------------approach 3: O(n),space-0(1): REVERSE ALGORITHM --------------------------------
void swap (int a[],int low,int high)
{
    while(low<high)
    {
        int temp=a[low];
        a[low]=a[high];
        a[high]=temp;

        low++;
        high--;
    }
}

void Lrd(int a[],int n,int d)
{
   swap(a,0,d-1);
   swap(a,d,n-1);
   swap(a,0,n-1);

   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";


}
int main()
{
    int a[100],n,d;
    cout<<" enter the size:";
    cin>>n;
    cout<<endl<<" enter the value of d:";
    cin>>d;


    cout<<endl<<" enter the elements of array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];

    Lrd(a,n,d) ;

    return 0;
}