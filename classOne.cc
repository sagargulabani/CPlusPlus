#include<iostream>
using namespace std;

class Rectangle{
	int width, height;
public:
	Rectangle(int a,int b);
	Rectangle(){
		
	}
	void set_values(int a, int b);
	int area(){
		return width * height;
	}
	
};

Rectangle::Rectangle(int x,int y) : width(x), height(y){}

void Rectangle::set_values(int x,int y){
	width = x;
	height = y;
}


int main(){
	
	Rectangle rect(5,6);
	Rectangle *foo, *bar, *baz;
	foo = &rect;
	baz = new Rectangle[2];
	baz+1 = &rect;
	
	bar = new Rectangle(4,5);
	cout<<bar->area()<<"\n";
	cout<<foo->area()<<"\n";
	Rectangle rect2;
	rect2.set_values(1,2);
	cout<<"Area: "<<rect2.area()<<"\n";
	cout<<"Area: "<<rect.area();
	return 0;
}