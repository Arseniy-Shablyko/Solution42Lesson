#include "tests.h"

void test01() {
	int matrix[N][N]{ {1,2,3,4,5}, 
	{2,3,4,5,6}, 
	{3,4,5,6,7}, 
	{4,5,6,7,8}, 
	{5,6,7,8,9} 
	};

	string expected = "";
	string actual = get_row_with_zero_element(matrix);
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

	string expected = "3 ";
	string actual = get_row_with_zero_element(matrix);
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

	string expected = "1 2 3 4 5 ";
	string actual = get_row_with_zero_element(matrix);
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

	string expected = "1 2 3 4 5 ";
	string actual = get_row_with_zero_element(matrix);
	string msg = expected == actual ? "Pass(green)" : "Fail(red)";

	cout << "test04 - " << msg << endl;
	cout << "-------------------------------" << endl;
}

void test05() {
	int matrix[N][N]{ {1,0,3,0,5},
	{2,3,4,7,6},
	{3,4,5,9,7},
	{4,5,6,7,0},
	{5,0,0,8,9}
	};

	string expected = "1 4 5 ";
	string actual = get_row_with_zero_element(matrix);
	string msg = expected == actual ? "Pass(green)" : "Fail(red)";

	cout << "test05 - " << msg << endl;
	cout << "-------------------------------" << endl;
}