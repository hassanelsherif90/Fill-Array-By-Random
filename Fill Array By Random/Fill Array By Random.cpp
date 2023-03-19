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

void CopyArray(int ArraySource[100], int ArrayDestions[100], int Length)
{
	for (int i = 0; i < Length; i++)
	{
		ArrayDestions[i] = ArraySource[i];
	}
}

int MaxNumber(int arr[100], int Length)
{
	int Max = 0;
	for (int i = 0; i < Length; i++) {
		if (arr[i] > Max) {
			// swap with Max 
			Max = arr[i];
		}
	}
	return Max;

}

int MinNumber(int arr[100], int Length)
{
	int Min = 0;
	Min = arr[0];
	for (int i = 0; i < Length; i++)
	{
		if (arr[i] < Min)
		{
			Min = arr[i];
		}
	}
	return Min;
}

int SumArrayNumber(int arr[100], int Length)
{
	int Sum = 0;
	for (int i = 0; i < Length; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;
}

float AverageArray(int arr[100], int Length)
{
	return (float) SumArrayNumber(arr, Length) / Length;
}



int main() {
		srand((unsigned)time(NULL));
		int arr[100], arr2[100],Length;
		ReadArray(arr, Length);
		CopyArray(arr,arr2, Length);
		PrintArray(arr, Length);
		cout << endl;
		PrintArray(arr2, Length);
		cout <<"\n" << MaxNumber(arr, Length);
		cout <<"\n" << MinNumber(arr, Length);
		cout <<"\nSum is : " << SumArrayNumber(arr, Length);
		cout <<"\nAverage is : " << AverageArray(arr, Length);
		return 0;
}