/*
    E
    D E
    C D E
    B C D E
    A B C D E        
*/
#include<iostream>
using namespace std ;
void pattern(int n)
{
    int i , j ,k=65+n-1 ,m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            char ch = (char) k ;
            cout<<ch<<" ";
            k++ ;
        }
        k= k-(i+2) ;
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