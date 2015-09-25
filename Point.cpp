#include <iostream>
#include <math.h>
using namespace std;

class Point{

	double x_ , y_;
public:
	Point(){
		cout << "Constructor" << endl;
		x_ = 0.0;
		y_ = 0.0;
	}
	Point(double x, double y){
		cout << "Constructor with args" << endl;
		x_ = x;
		y_ = y;
	}

	double get_x(){
		return x_;
	}
	double get_y(){
		return y_;
	}
	void set_x(double x){
		x_ = x;
	}
	void set_y(double y){
		y_ = y;
	}
	void print(){
		cout << "(" << x_ << ", " << y_ << ")" << endl; 
	}
	void add(Point other){
		//x_ = x_ + other.x_;
		x_ += other.x_;
		y_ += other.y_;
	}
	void sub(Point other){
		x_ -= other.x_;
		y_ -= other.y_;
	}
	int dist(Point other){
		double dx = x_ - other.x_;
		double dy = y_ - other.y_;
		return sqrt(dx * dx + dy * dy);
	}

};

Point add(Point a, Point b){
	Point result(a.get_x(), a.get_y());
	result.add(b);
	return result;
}

Point sub(Point a, Point b){
	Point result(a.get_x(), a.get_y());
	result.sub(b);
	return result;
}


int main(){
	Point p1;
	Point p2(3.0, 4.0), p3(1.0, 2.0);

}
