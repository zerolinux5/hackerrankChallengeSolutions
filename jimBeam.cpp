#include <iostream>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;
	while(testNum--){
		int x1,y1,x2,y2,xm,ym;
		cin >> x1 >> y1 >> x2 >> y2 >> xm >> ym;

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
		}
	}
	return 0;
}