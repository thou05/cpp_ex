#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	float denta = b^2 - 4*a*c ;
	if ( denta > 0){
		float x1 = (-b + sqrt (denta)) / (2*a);
		float x2 = (-b - sqrt (denta)) / (2*a);
		cout << "pt co 2 nghiem pb :" << x1 << " va " << x2 << endl;
	}
	else if (denta == 0){
		float x = (-b)/(2*a);
		cout << "pt co 2 nghiem kep x1=x2= " << x << endl;
	}
	else{
		cout << "pt vo nghiem" << endl;
	}
}
