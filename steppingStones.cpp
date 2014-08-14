#include <iostream>

using namespace std;

void stepsReached(long long numDesire){
	int count = 0;
	long i = 0;
	while(i < 10000000000){
		int summation = ( (i * (i+1) )/ 2 );
		if (summation == numDesire){
			cout << "Go On Bob " << count << endl;
			break;
		} else if (summation > numDesire){
			cout << "Better Luck Next Time" << endl;
			break;
		}
		count++;
		i++;
	}
}

int main()
{
	int testNum;
	cin >> testNum;
	while(testNum--){
		int input;
		cin >> input;
		stepsReached(input);
	}
	return 0;
}