#include<iostream>

using namespace std;

class Polygon{
protected:
	int width,height;
public:
	void set_values(int a, int b){
		width = a;
		height = b;
	}
};



class Rectangle:public Polygon{
public:
	int area(){
		return width*height;
	}
};

class Square:protected Polygon{
public:
	int areaa(){
		return width * height;
	}
	void setting(int a){
		width = a;
		height = a;
	}
};

class Triangle:public Polygon{
public:
	int area(){
		return width * height/2;
	}
};

int main(){
	Square sq;
	sq.setting(10);
	cout<<sq.areaa()<<"\n";
	Rectangle rect;
	Triangle trg;
	rect.set_values(10,12);
	trg.set_values(3,4);
	cout<<rect.area()<<"\n";
	cout<<trg.area();
}