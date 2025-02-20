#include "tests.h"

void test01() {
	int matrix[N][N]{ {1,2,3,4,5}, 
	{2,3,4,5,6}, 
	{3,4,5,6,7}, 
	{4,5,6,7,8}, 
	{5,6,7,8,9} 
	};

	int expected = 0;
	int actual = counte_zero_elements(matrix);
	string msg = expected == actual ? "Pass(green)" : "Fail(red)";

	cout << "test01 - " << msg << endl;
	cout << "-------------------------------" << endl;
}

void test02() {
	int matrix[N][N]{ {1,2,3,4,5},
	{2,3,4,5,6},
	{3,4,5,0,7},
	{4,5,6,7,8},
	{5,6,7,8,9}
	};

	int expected = 1;
	int actual = counte_zero_elements(matrix);
	string msg = expected == actual ? "Pass(green)" : "Fail(red)";

	cout << "test02 - " << msg << endl;
	cout << "-------------------------------" << endl;
}

void test03() {
	int matrix[N][N]{ {1,0,3,4,5},
	{2,3,4,0,6},
	{3,4,5,0,7},
	{4,5,6,7,0},
	{5,0,7,8,9}
	};

	int expected = 5;
	int actual = counte_zero_elements(matrix);
	string msg = expected == actual ? "Pass(green)" : "Fail(red)";

	cout << "test03 - " << msg << endl;
	cout << "-------------------------------" << endl;
}

void test04() {
	int matrix[N][N]{ {0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0}
	};

	int expected = 25;
	int actual = counte_zero_elements(matrix);
	string msg = expected == actual ? "Pass(green)" : "Fail(red)";

	cout << "test04 - " << msg << endl;
	cout << "-------------------------------" << endl;
}