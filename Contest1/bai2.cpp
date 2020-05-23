#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int array[10000];
	for (int i = 0; i < b; i++) {
		cin >> array[i];
	}
	for (int j = b - 1; j >= 0; j--) {
		if (array[j] < a-b+j-1) {
			array[j]++;
			break;
		}
		else if(array[j-1]<a-b+j-2)
		{
			array[j]=array[j-1]+2;
		}
	}
	for (int i = 0; i < b; i++)
		cout << array[i] << " ";
}
