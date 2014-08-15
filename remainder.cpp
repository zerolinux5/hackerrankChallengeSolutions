#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;
	while(testNum--){
		long long  size, modulo;
		cin >> size >> modulo;

		long long dividend = 1;
		size--;

		if(pow(10, size) > (modulo * 100000000)){
			while(dividend < (modulo * 100000000)){
				dividend *=10;
				dividend +=1;
			}
			//cout << dividend << endl;
			cout << (dividend % modulo) << endl;
		} else {
			while(size){
				dividend *=10;
				dividend +=1;
				size--;
			}
			//cout << dividend << endl;
			cout << (dividend % modulo) << endl;
		}
	}
	return 0;
}