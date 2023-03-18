#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void ReadArray(int arr[100], int& Length ) {
	cout << "\nPlease enter a number array" << endl;
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		arr[i] = RandNumber(1, 100);
	}
}

void PrintArray(int arr[100], int Length) 
{
	cout << "Array Elements : " ;
	for (int i = 0; i < Length; i++)
	{
		cout <<  arr[i] << " ";
	}
}


int main() {
		srand((unsigned)time(NULL));
		int arr[100], Length;
		ReadArray(arr, Length);
		PrintArray(arr, Length);
		return 0;
}