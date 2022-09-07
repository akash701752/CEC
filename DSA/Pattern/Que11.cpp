/*
    1
    0 1 
    1 0 1
    0 1 0 1
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
            if((i+j)%2==0){
                cout<<"1 " ;
            }
            else{
                cout<<"0 " ;
            }
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