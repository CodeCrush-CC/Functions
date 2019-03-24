/*Enter marks of five subjects and calculate it's average*/

#include<iostream.h>
#include<conio.h>
void main()
{
 float a,b,c,d,e,f;
 float average(float,float,float,float,float) ;
 clrscr();

  cout<<"\n\nEnter marks1:\t" ;
  cin>>a ;
  cout<<"\nEnter marks2:\t" ;
  cin>>b ;
  cout<<"\nEnter marks3:\t" ;
  cin>>c ;
  cout<<"\nEnter marks4:\t" ;
  cin>>d ;
  cout<<"\nEnter marks5:\t" ;
  cin>>e ;


  f = average(a,b,c,d,e) ;

  cout<<"\nAverage marks of five subjects:\t"<<f ;
 getche();
}

float average(float r, float s,float t, float u,float v)
{
 float q;
 q = (r+s+t+u+v)/5 ;
 return(q);
}