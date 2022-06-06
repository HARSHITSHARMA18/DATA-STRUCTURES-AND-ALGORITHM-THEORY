//-------------------------minimum number of flips to make a boolean array same throught-----------------
#include<iostream>
using namespace std;

//------------------------approach effcicient :O(n)------------------------------
void printgroup(bool a[],int n)
{

    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            if(a[i]!=a[0])
                cout<<"From "<<i<<" to";
            else
            cout<<(i-1)<<endl;

        
        }
        if(a[n-1]!=a[0])
        cout<<(n-1)<<endl;
    }
}
int main()
{
       bool a[100];
       int n;

    cout<<" Enter the size of array :";
    cin>>n;

    cout<<"\n enter the elemnts of an array one by one:";
    for(int i=0;i<n;i++)
    cin>>a[i];

    printgroup(a,n);
    return 0;

}