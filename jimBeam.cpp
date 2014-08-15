#include <iostream>

using namespace std;

struct Point{
	int x;
	int y;
};

int main()
{
	int testNum;
	cin >> testNum;
	while(testNum--){
		int x1,y1,x2,y2,xm,ym;
		cin >> x1 >> y1 >> x2 >> y2 >> xm >> ym;
		struct Point origin = {0,0};
		struct Point mirror = {xm, ym};
		struct Point firstPoint = {x1, y1};
		struct Point secondPoint = {x2, y2};

		//Ferst line
		int a1 = secondPoint.y - firstPoint.y;
		int b1 = firstPoint.x - secondPoint.x;
		int c1 = a1*firstPoint.x + b1*firstPoint.y;

		//Second line
		int a2 = mirror.y - origin.y;
		int b2 = origin.x - mirror.x;
		int c2 = a2*origin.x + b2*origin.y;

		double det = a1*b2 - a2*b1;
		if(det == 0){
			if((firstPoint.x <= mirror.x && firstPoint.x >= origin.x) || (firstPoint.x >= mirror.x && firstPoint.x <= mirror.x)){
				if((firstPoint.y <= mirror.y && firstPoint.y >= origin.y) || (firstPoint.y >= mirror.y && firstPoint.y <= origin.y)){
					cout << "NO" << endl;
				} else {
					cout << "YES" << endl;
				}
			} else {
				cout << "YES" << endl;
			}
		} else {
			double finalX = (b2*c1 - b1*c2)/det;
			double finalY = (a1*c2 - a2*c1)/det;
			if((finalX <= mirror.x && finalX >= origin.x) || (finalX >= mirror.x && finalX <= origin.x)){
				if ((finalY <= mirror.y && finalY >= origin.y) || (finalY >= mirror.y && finalY <= origin.y)){
					cout << "NO" << endl;
				} else {
					cout << "YES" << endl;
				}
			} else {
				cout << "YES" << endl;
			}
		}

		/*
		//equation 1
		double m1 = (y2 - y1)/(x2 - x1);
		//cout << "Slope for m1:" << m1 << endl;
		double b = y2 - m1*x2;
		//cout << "Point for m1:" << b << endl;

		//equation 2
		if(xm == 0){
			if((b < ym && b > 0) || (b > ym && b < 0)){
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		} else {
			double m2 = ym/xm;
			//cout << "Slope for m2:" << m2 << endl;
			if((m1 == m2) && b == 0){
				if((x1 < xm && x1 > 0) || (x1 > xm && x1 < 0)){
					cout << "NO" << endl;
				} else {
					cout << "YES" << endl;
				}
			} else {
				//intercept equation catch
				double interceptMiss = m2 - m1;
				double finalX = b/interceptMiss;
				if((finalX <= xm && finalX >= 0) || (finalX >= xm && finalX <= 0)){
					cout << "NO" << endl;
				} else {
					cout << "YES" << endl;
				}
			}
		}*/
	}
	return 0;
}