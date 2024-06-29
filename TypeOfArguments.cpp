#include<iostream>
#include<cstdarg>
using namespace std;
int MySum(int a, ...) {
	int sum = 0, num;
	va_list vl;
	va_start(vl, a);
	for (int i = 0; i < a; i++) {
		num = va_arg(vl, int);
		cout << num << " + ";
		sum += num;
	}
	cout << endl;
	va_end(vl);
	return sum;
}
int main() {
	int result = MySum(5,3,6,4,2,3);
	int result1 = MySum(0);

	cout << "Result : " << result<< endl;
}