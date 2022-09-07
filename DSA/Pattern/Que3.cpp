/*
    1 
    1 2 
    1 2 3 
    1 2 3 4  
    1 2 3 4 5 
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
            cout<<j+1 <<" ";
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