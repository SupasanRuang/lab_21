#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap( Rect *m, Rect *n ){
	double ax,ay;
	double w1,w2;
	double a1=m->x,a2=n->x,c1=m->x+m->w,c2=n->x+n->w;
	if(a1<=a2)
	{
		w1=a2;
	}
	else
	{
		w1=a1;
	}
	if(c1<=c2)
	{
		w2=c1;
	}
	else 
	{
		w2=c2;
	}
	if(w1>=w2)
	{
		return 0;
	}
	else 
	{
		ax=w2-w1;
	}
	double h1,h2;
	double b1=m->y,b2=n->y,e1=m->y-m->h,e2=n->y-n->h;
	if(b1>=b2)
	{
		h1=b2;
	}
	else 
	{
		h1=b1;
	}
	if(e1>=e2)
	{
		h2=e1;
	}
	else 
	{
		h2=e2;
	}
	if(h1<=h2)
	{
		return 0;
	}
	else 
	{
		ay=h1-h2;
	}
	return ax*ay;

}

int main()
{
	
Rect R1 = {-1,2,6.9,9.6};
Rect R2 = {0,0,1.2,2.5};	
cout << overlap(&R1,&R2);	
	return 0;
}
