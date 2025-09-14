#include <iostream>
using namespace std;

class Shape{
public:
	int x,y ;
	void get_data(){
		cout<<"Enter x as one side (in cm):";
	    cin>>x;
	    cout<<"Enter y as another side(in cm):";
	    cin>>y;
	}
	virtual void display()=0;
};

class Triangle:public Shape{
	void display(){
	    cout<<"Area of Trianagle :"<<0.5*x*y<<"cm"<<endl;
	}
};

class Rectangle:public Shape{
	void display(){
	    cout<<"Area of Rectangle(in cm):"<<x*y<<"cm"<<endl;
	}
};

int main() {
	Shape *ptr;
	Triangle t;
	Rectangle r;
	ptr=&t;
	ptr->get_data();
	ptr-> display();
	ptr=&r;
	ptr->get_data();
	ptr-> display();
	return 0;
}
