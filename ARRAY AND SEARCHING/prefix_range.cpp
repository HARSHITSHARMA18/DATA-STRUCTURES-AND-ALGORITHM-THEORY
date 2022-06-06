//-------------------------to find the max occuring number in the ranges formed by two arrays----------------
#include<iostream>
#include<vector>
using namespace std;

int maxocc(int L[],int R[],int n)
{
    vector<int> a[1000];
    for(int i=0;i<n;i++)
    {
        a[L[i]] ++; 
        a[R[i]+1] --;

    }
    int max=a[0],res=0;
    


}