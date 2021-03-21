#include <iostream>
#include <math.h>
using namespace std;

long double fact(int N)
{
    if(N < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (N == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
    else // Во всех остальных случаях
        return N * fact(N - 1); // делаем рекурсию.
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
		i++;
	} while (i < amnt);

	cout << "Значение суммы " << amnt << " итераций: " << sum;
}
