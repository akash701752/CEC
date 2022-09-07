/*
    1             1
    1 2         2 1
    1 2 3     3 2 1
    1 2 3 4 4 3 2 1
*/
#include<iostream>
using namespace std ;
void pattern(int n)
{
    int i , j ,k ,m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
           cout<<j+1;
        }
        for(k=0;k<2*n-(2*(i+1));k++)
        {
            cout<<" ";
        }
        for(m=i;m>=0;m--)
        {
            cout<<m+1 ;
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