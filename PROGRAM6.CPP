/*A program to read length and breadth of rectangle, calculate area and
 perimeter and display them.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 float ar,pr,l,b ;
 float area(float,float);
 float perimeter(float,float) ;
 clrscr();
 cout<<"\nEnter length of rectangle:\t" ;
 cin>>l ;
 cout<<"\nEnter breadth of rectangle:\t" ;
 cin>>b ;
 ar = area(l,b) ;
 cout<<"\nArea:\t"<<ar<<"\n" ;
 pr = perimeter(l,b);
 cout<<"\nPerimeter:\t"<<pr ;
 getche();
}
float area(float x,float y)
{
 float r ;
 r = x*y ;
 return(r) ;
}
float perimeter(float x,float y)
{
 float p ;
 p=2*(x+y) ;
 return(p) ;
}
