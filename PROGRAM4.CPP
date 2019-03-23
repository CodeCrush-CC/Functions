/*A program to input any two numbers of type integers and display their product*/

#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b,c ;
 int multiply(int,int) ;
 clrscr();
 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;
 c = multiply(a,b) ;
 cout<<"\nMultiplication of Digits:\t"<<c ;
 getche();
}
int multiply(int x,int y)
{
 return(x*y) ;
}