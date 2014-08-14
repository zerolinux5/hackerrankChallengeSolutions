#include <iostream>

using namespace std;

int main()
{
	int testNum;
	cin >> testNum;
	while(testNum--){
		int size, modulo;
		cin >> size >> modulo;

		int dividend = 1;
		for(int i = 1; i < size;i++){
			dividend *=10;
			dividend +=1;
		}
		cout << (dividend % modulo) << endl;

	}
	return 0;
}