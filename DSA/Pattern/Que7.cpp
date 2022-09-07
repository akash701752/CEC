/*
         *
        ***
       *****
      *******
*/
#include<iostream>
using namespace std ;
void pattern(int n)
{
    int i , j ,k ;
    for(i=0;i<n;i++)
    {
        for(k=0;k<=n-1-i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        cout<<"\n" ;
    }
}
int main()
{
    int n ;
    cout<<"Enter N : ";
    cin>>n;
    pattern(n) ;
    return 0 ;
}