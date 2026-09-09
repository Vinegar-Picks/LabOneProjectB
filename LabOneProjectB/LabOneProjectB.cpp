#include <iostream>
using namespace std;
void LargestNumber(double, double, double, double, double);
void SmallestNumber(double, double, double, double, double);


int main()
{
    double num1 = 0.0, num2 = 0.0, num3=0.0, num4=0.0, num5=0.0;
    cout << "Determing Largest and Smallest Values with Functions\n";
    cout << "----------------------------------------------------\n\n";
    cout << "Enter 5 numbers ==>";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    LargestNumber(num1, num2, num3, num4, num5);
    SmallestNumber(num1, num2, num3, num4, num5);

}

void LargestNumber(double num1, double num2, double num3, double num4, double num5)
{
    double largest = num1;

    if (num2 > largest) largest = num2;
    if (num3 > largest) largest = num3;
    if (num4 > largest) largest = num4;
    if (num5 > largest) largest = num5;

    cout << "The largest number is: " << largest << endl;

}

void SmallestNumber(double num1, double num2, double num3, double num4, double num5)
{
    double Smallest = num1;

    if (num2 < Smallest) Smallest = num2;
    if (num3 < Smallest) Smallest = num3;
    if (num4 < Smallest) Smallest = num4;
    if (num5 < Smallest) Smallest = num5;

    cout << "The smallest number is: " << Smallest << endl;

}