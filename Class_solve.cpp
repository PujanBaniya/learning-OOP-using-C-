#include<iostream>
#include<conio.h>
using namespace std;

class Mat{
	private:
		float x,y,Dx,Dy,Det;
	public:
		void input()
		{
			float a1,b1,c1,a2,b2,c2;
			cout<<"Enter value of a1,b1,c1"<<endl;
			cin>>a1>>b1>>c1;
			cout<<"Enter value of a2,b2,c2"<<endl;
			cin>>a2>>b2>>c2;
			Dx= det(c1,b1,c2,b2);
			Dy= det(a1,c1,a2,c2);
			Det = det(a1,b1,a2,b2);
		}
		void process()
		{
			x= Dx/Det;
			y= Dy/Det;
		}
		void display()
		{
			cout<<"Value of x="<<x<<endl<<"Value of y="<<y<<endl;
		}
		float det(float r1,float c1,float r2,float c2)
		{
			return (r1*c2)-(c1*r2);
		}
};
int main()
{
	Mat m;
	m.input();
	m.process();
	m.display();
	getch();
	return 0;
}
