#include <iostream>
#include <cmath>
using namespace std;


double perimeter(double a, double b){return 2.0 * (a + b);} // perimeter


double square(double a, double b){return a * b;} // square



double diag_length(double a, double b){return sqrt((a*a) + (b*b));} // length


int main(){
    double a, b;
    cout << "Enter A and B:";
    cin >> a >> b;
    while (a <= 0 || b <= 0){
        cout << "This is not a rectangle! Enter A and B again:";
        cin >> a >> b;}
    cout << "Perimeter: " << perimeter(a, b) << endl;
    cout << "Square: " << square(a, b) << endl;
    cout << "Length of diagonal: " << diag_length(a, b) << endl;
}
