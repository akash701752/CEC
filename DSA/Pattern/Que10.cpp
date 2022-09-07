/*
    *
    * * *
    * * * *
    * * *
    * *
    * 
 
*/
#include<iostream>
using namespace std ;
void pattern(int n)
{
    int i , j ,k ;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n" ;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
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