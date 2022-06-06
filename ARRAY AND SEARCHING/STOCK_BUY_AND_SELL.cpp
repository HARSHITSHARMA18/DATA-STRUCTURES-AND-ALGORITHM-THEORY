//-----------------------------------------------stock buy and sell-----------------------
#include<iostream>
#include<algorithm>
using namespace std;

// -------------------------------------------approach 1: using recurrsion ----------------------------
//int maxprofit(int a[],int start ,int end)
//{
//    if(end<=start)                        //if there is only one element or less
//    return 0;
//
//    int profit=0;
//    
//    for(int i=start;i<end;i++)
//    {
//        for(int j=i+1;j<=end;j++)
//        {
//            if(a[j]>a[i])
//            {
//                int curr= (a[j]-a[i]) +
//                          maxprofit(a,start,i-1) +            // finding the profit in left of the array
//                          maxprofit(a,j+1,end) ;              //finding the profit in right of the array
//
//                profit=max(profit,curr);
//            }
//        }
//    }
//    return profit;
//}

//------------------------------------ approach 2: buying at bottom and selling at peak ------------------

int maxprofit(int a[],int n)
{
    int profit=0;

    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        profit += a[i]-a[i-1];

    }
    return profit;

}

int main()
{   
    int a[100],n;
    cout<<" enter the size of the array:";
    cin>>n;

    cout<<endl<<" enter the array :";
    for(int i=0;i<n;i++)
    cin>>a[i];

    //int profit =maxprofit(a,0,n-1);
    int profit=maxprofit(a,n);
    cout<<endl<<profit;
    return 0;
}