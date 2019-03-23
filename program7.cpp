/*A program to enter radius and calculate area of circle and its perimeter*/

#include<iostream.h>
#include<conio.h>

void main()
{
 float area(float);
 float peri(float);
 float ar,pr,r ;
 clrscr();
 cout<<"Enter Radius:\t" ;
 cin>>r ;
 ar = area(r);
 pr = peri(r) ;
 cout<<"\nArea of circle:\t"<<ar<<"\n" ;
 cout<<"\nPerimeter of circle:\t"<<pr<<"\n" ;
 getche();
}
float area(float m)
{
 return(3.14*m*m) ;
}
float peri(float m)
{
 return(2*3.14*m)  ;
}