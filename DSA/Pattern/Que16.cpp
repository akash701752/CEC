/*
         A
        ABA
       ABCBA
      ABCDCBA         
*/
#include<iostream>
using namespace std ;
void pattern(int n)
{
    int i , j ,k=65 ,m;
    for(i=0;i<n;i++)
    {
        for(m=0;m<n-1-i;m++)
        {
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++)
        {
            char ch = (char)k ;
            if(j<i)
            {
                cout<<(char)ch ;
                k++ ;
            }
            else
            {
                cout<<(char)ch;
                k--;
            }
            
        }
        k=65 ;
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