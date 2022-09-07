/*
    1
    2 3
    4 5 6
    7 8 9 10            
*/
#include<iostream>
using namespace std ;
void pattern(int n)
{
    int i , j ,k=1 ,m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<k <<"\t";
            k++ ;
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