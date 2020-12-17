#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
 int main()
 {
     double d,x1,y1,x2,y2;
     cout<< "Enter the coordinates(x,y) of p1:";
     cin>>x1>>y1;
     cout<<"Enter the coordinates(x,y) of p2:";
     cin>>x2>>y2;
     d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
     cout<<"the distance is:"<<d<<endl;
     return 0;
 }