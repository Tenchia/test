#include <iostream>
#include <math.h>
using namespace std;

long double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

int main() {

	int amnt;
	double i = 1;
	double x, f;
	double sum = 0;
	setlocale(0, "");

	cout << "Введите кол-во итераций и значение х:" << endl;
	cin >> amnt >> x;

	do {
		f = i * cos(pow(i + x, 2))/fact(3*i + x);
		sum = sum + f;
		cout << "Значение элемента суммы №" << i << " : " << f << endl;
		i++;
	} while (i <= amnt);

	cout << "Значение суммы " << amnt << " итераций: " << sum;
}
