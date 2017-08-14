#include <iostream>
#include <algorithm>

using namespace std;

int add(int, int);
int sub(int, int);

int main()
{
	int a,b;
	cout << "enter two nos " << endl;
	cin >> a >> b;
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub (int x, int y)
{
	return x - y;
}
