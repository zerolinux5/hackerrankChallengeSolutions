#include <iostream>

using namespace std;

void reverse(int size, int comparison){
	int end = size-1;
	int start = 0;
	int flag = 0;
	int count = 0;
	while(flag < size){
		if(flag % 2 == 0){
			if(comparison == end){
				cout << count << endl;
				break;
			}
			end--;
		} else {
			if(comparison == start){
				cout << count << endl;
				break;
			}
			start++;
		}
		count++;
		flag++;
	}

	/*
	for(int i = 0; i < size;i++){
		if(array[i] == comparison){
			cout << i << endl;
		break;
		}
	}
	*/
}

int main()
{
	int testNum;
	cin >> testNum;
	while(testNum--){
		int size, num;
		cin >> size >> num;
		reverse(size, num);
	}

	return 0;
}