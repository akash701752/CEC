/*
    A B C D E
    A B C D
    A B C
    A B
    A       
*/
#include<iostream>
using namespace std ;
void pattern(int n)
{
    int i , j ,k=65 ,m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            char ch = (char)k ;
            cout<<(char)ch <<" ";
            k++ ;
        }
        k = 65 ;
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