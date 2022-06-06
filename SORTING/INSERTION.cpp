#include <bits/stdc++.h>
using namespace std;



int main() {
    // Write C++ code here
     int a[]={20,5,40,60,10,30};
     for(int i=0;i<5;i++)
     {
         for(int j=0;i<=i;j++)
         {
             if(a[i]<a[j])
             swap(a[i],a[j]);
         }
     }
     
     for(int i=0;i<6;i++)
     cout<<a[i]<<" ";

    return 0;
}
