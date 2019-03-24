/*A program to read coordinates of two points and calculate the distance between them as per following formula*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 double x1,y1,x2,y2,d  ;
 double distance(double,double,double,double) ;
 clrscr();
 cout<<"\nEnter x1 coordinate:\t" ;
 cin>>x1 ;
 cout<<"\nEnter y1 coordinate:\t" ;
 cin>>y1 ;
 cout<<"\nEnter x2 coordinate:\t" ;
 cin>>x2 ;
 cout<<"\nEnter y2 coordinate:\t" ;
 cin>>y2 ;

  d = distance(x1,y1,x2,y2) ;

 cout<<"\nDistance between ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is:\t"<<d ;

 getche();
}
double distance(double s1, double t1, double s2, double t2)
{
 double s ;
 s = sqrt((s1-t1)*(s1-t1)+(s2-t2)*(s2-t2)) ;
 return(s) ;
}