#include<iostream>
#include<iomanip>
using namespace std;

void Algo_1(int Bus[4][5]);
void Algo_2(int Bus[4][5]);
void Algo_3(int Bus[4][5]);
void Algo_4(int Bus[4][5]);
void Algo_5(int Bus[4][5]);
void Algo_6(int Bus[4][5]);

int main()
{
	int bus[4][5] = { { 8, 12, 9, 7, 10 },{ 5, 7, 3, 0, 4 },{ 20, 15, 18, 21, 14 },{ 6, 9, 5, 8, 11 } };

	Algo_1(bus);
	cout << endl;
	Algo_2(bus);
	cout << endl;
	Algo_3(bus);
	cout << endl;
	Algo_4(bus);
	cout << endl;
	Algo_5(bus);
	cout << endl;
	Algo_6(bus);
	cout << endl;
	system("pause>0");
}

void Algo_1(int Bus[4][5])//First Function
{
	for (int row = 0; row < 5; ++row)//for rows
	{
		cout << "Enter passengers for day " << row + 1 << " : " << endl;//input 
		for (int col = 0; col < 4; ++col)//for coloumns
		{
			cout << " ";
			cin >> Bus[col][row];
		
		}
		cout << endl;
	}
}


void Algo_2(int Bus[4][5])//Second Function
{
	cout << "Days of week: Monday: Tuesday: Wednesday: Thursday: Friday" << endl;
	for (int rows = 0; rows < 4; ++rows)
	{
		cout << "Route " << rows << " :         ";
		for (int col = 0; col < 5; col++)
		{
			cout << Bus[rows][col] << "      ";
		}
		cout << endl;
	}
}

void Algo_3(int Bus[4][5])//Third Function
{
	int sum = 0;
	for (int col = 0; col < 5; col++)
	{
		sum =sum+Bus[0][col];
	}
	cout << "Total Number Of Passengers For The Route 0: " << sum << endl;
	cout << endl;
}

void Algo_4(int Bus[4][5])
{
	int less = 0;
	for (int row = 0; row < 4; ++row)
	{
		for (int col = 1; col < 4; ++col)
		{
			if (Bus[col][3] < Bus[row][3])
			{
				less = Bus[col][3];
			}
		}
	}
	cout << "Minimum Number of Passengers  are: " << less << endl;
	cout << endl;
}

void Algo_5(int Bus[4][5])
{
	int sum = 0;
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			sum = sum + Bus[row][col];
		}
		cout << "Average Passengers On Route " << row << " are: " << sum / 5 << endl;
		sum = 0;
	}

	cout << endl;

	int Sum = 0;
	for (int col = 0; col < 5; ++col)
	{
		for (int row = 0; row < 4; ++row)
		{
			Sum = sum + Bus[row][col];
		}
		cout << "Average Passengers On Day " << col + 1 << " are: " << Sum / 4 << endl;
		Sum = 0;

	}cout << endl;
}

void Algo_6(int Bus[4][5])//6th function 
{
	int large = 0, largest = 0, TheLargest = 0;
	for (int row = 0; row < 4; row++)//rows 
	{
		for (int col = 0; col< 5; col++)//coloums
		{
			if (Bus[row][col] >= large)
			{
				large = Bus[row][col];
				largest = row;
				TheLargest = col;
			}
		}
	}
	cout << "Largest Number Of Passengers are in " << largest << "  row " << endl;
	cout << endl;
	cout << "Maximum NUmber of Passengers are " << large << endl;
	cout << endl;
	cout << "Matrix Represntation : [" << largest << "][" << TheLargest << "]" << endl;
}
