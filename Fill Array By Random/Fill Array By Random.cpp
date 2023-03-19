#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enPrimeOrNotPrime{Prime = 1 , NotPrime = 2};

enPrimeOrNotPrime CheckPrimeNumber(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0) {
			return enPrimeOrNotPrime::NotPrime;
		}
	}
	return enPrimeOrNotPrime::Prime;
}

int RandNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void ReadArray(int arr[100], int arr2[100], int& Length ) {
	cout << "\nPlease enter a number array" << endl;
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		arr[i] = RandNumber(1, 100);
		arr2[i] = RandNumber(1, 100);
	}
}

void PrintArray(int arr[100], int Length) 
{
	//cout << "Array Elements : " ;
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

void ArrayPrimeNumber(int ArraySource [100], int ArrayDestuins[100], int Length, int& Length2)
{
	int Counter = 0;
	for (int i = 0; i < Length; i++)
	{
		if (CheckPrimeNumber(ArraySource[i]) == enPrimeOrNotPrime::Prime)
		{
			ArrayDestuins[Counter] = ArraySource[i];
			Counter++;
		}
	}
	Length2 = --Counter;
}
void SumArray(int arr[100], int arr2[100], int Length)
{
	cout << "\nSum Of 2 Array\n";
	for (int i = 0; i < Length; i++)
	{
		 cout << arr[i] + arr2[i] << " ";
	}
}

int main() {
		srand((unsigned)time(NULL));
		int arr[100], arr2[100],Length ;
		ReadArray(arr, arr2, Length);
		cout << "\nArray 1 Elemnent \n ";
		PrintArray(arr, Length);
		//int arr2[100], Length2 = 0;
		//ArrayPrimeNumber(arr, arr2, Length, Length2);
		cout << "\nArray 2 Elemnent \n ";
		PrintArray(arr2, Length);
		SumArray(arr, arr2, Length);
		return 0;
}