#include <iostream>

using namespace std;

int stepsReached(long long numDesire, int count, long long begin, long long end){
	long long binarySearch = (begin + end)/2;
	long long summation = ( (binarySearch * (binarySearch+1) )/ 2 );
	if(summation == numDesire){
		return binarySearch;
	} else if(binarySearch == begin){
		return -1;
	}else if(summation > numDesire){
		return stepsReached(numDesire, binarySearch, begin, binarySearch);
	} else {
		return stepsReached(numDesire, binarySearch, binarySearch, end);
	}
}

int main()
{
	int testNum;
	cin >> testNum;
	while(testNum--){
		long long input;
		cin >> input;
		long long end = 10000000000;
		int count = stepsReached(input, 0, 0, end);
		if(count == -1){
			cout << "Better Luck Next Time" << endl;
		} else {
			cout << "Go On Bob " << count << endl;
		}
	}
	return 0;
}