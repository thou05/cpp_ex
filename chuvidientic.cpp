#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int r;
	cin >> r;
	float chuvi = 2*3.14*r ;
	float dientic = 3.14*r*r ;
	cout << fixed << setprecision (2) << chuvi << " " << dientic << endl;
	return 0;
}
