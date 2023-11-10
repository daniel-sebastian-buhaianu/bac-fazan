#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bac.txt");
int main()
{
	int x, lg, lgmax, y, uc, pc;
	lg = lgmax = 1;
	fin >> x;
	while (fin >> y)
	{
		uc = x%10;
		for (pc = y; pc > 9; pc /= 10);
		if (uc != pc)
		{
			if (lg > lgmax) lgmax = lg;
			lg = 1;
		}
		else lg++;
		x = y;
	}
	if (lg > lgmax) lgmax = lg;
	cout << lgmax;
	return 0;
}
