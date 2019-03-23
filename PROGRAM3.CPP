/*A program to input any two numbers of type integers and display their subtraction*/

#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b,c ;
 int subtract(int,int);
 clrscr();
 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;
 c = subtract(a,b) ;
 cout<<"\nSubtraction of Digits:\t"<<c ;
 getche();
}
int subtract(int x ,int y)
{
 return(x-y)  ;
}
