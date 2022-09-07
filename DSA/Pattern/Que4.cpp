/*
    1 
    2 2 
    3 3 3 
    4 4 4 4  
    5 5 5 5 5 
*/
#include<iostream>
using namespace std ;
void pattern(int n)
{
    int i , j ;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<i+1 <<" ";
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