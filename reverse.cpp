#include <iostream>

using namespace std;

void reverse(int *array, int size, int comparison){
	for(int n = 0; n < size; n++){
		int j = size - 1;
		int i = n;
		while(i < j){
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
		if(array[n] == comparison){
			cout << n << endl;
			break;
		}
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
		int array[size];
		for(int i = 0; i < size;i++){
			array[i] = i;
		}
		reverse(array, size, num);
	}

	return 0;
}