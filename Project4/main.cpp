
#include <iostream>
using namespace std;
//Завдання 1
//int Pow(int num, int step)
//{
//    if (step == 0)
//        return 1;
//
//    return num * Pow(num, step - 1);
//}
//
//int main()
//{
//    int num, step;
//
//    cout << "Enter number: ";
//    cin >> num;
//
//    cout << "Enter step: ";
//    cin >> step;
//
//    cout << "Result: " << Pow(num, step) << endl;
//}
//Завдання 2

//void stars(int n)
//{
//    if (n == 0)
//        return;
//
//    cout << "*";
//    stars(n - 1);
//}
//
//int main()
//{
//    int n;
//
//    cout << "Enter number: ";
//    cin >> n;
//
//    stars(n);
//
//    cout << endl;
//}
//Завдання 3

int Sum(int a, int b)
{
    if (a == b)
        return a;

    return a + Sum(a + 1, b);
}

int main()
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Sum: " << Sum(a, b) << endl;
}