#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c;

	cout << "Введите стороны треугольника a b c: ";
	cin >> a >> b >> c;

	if(a + b <= c || a + c <= b || b + c <= a){
		cout << "Ошибка. Треугольника с такими сторонами не существует" << endl;
		return 1;
	}

	double perimeter = a + b + c;
	cout << "Периметр: " << perimeter << endl;

	double p = perimeter / 2;
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь: " << area << endl;

	if(a == b || a == c || b == c){
		cout << "Треугольник равнобедренный" << endl;
	}else{
		cout << "Треугольник не равнобедренный" << endl;
	}

	return 0;
}
