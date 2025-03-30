#include <iostream>
using namespace std;

//Exercise 1
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 10; i++) {
//        sum += i;
//    }
//
//    cout << "Sum of numbers from 1 to 10: " << sum << "\n";
//}


//Exercise 2
//int main() {
//    cout << "Celsius | Fahrenheit" << "\n";
//    cout << "----------------------" << "\n";
//
//    for (int celsius = 0 ; celsius <= 100; celsius += 10) {
//        int fahrenheit = (celsius * 9 / 5) + 32;
//        cout << celsius << "      |     " << fahrenheit << "\n";
//    }
//
//}


//Exercise 4
//int main() {
//    int n, fact = 1;
//
//    cout << "Enter a number: ";
//    cin >> n;
//
//    if (n < 0) {
//        cout << "Factorial is not defined for negative numbers." << "\n";
//    }
//
//    for (int i = 2; i <= n; i++) {
//        fact *= i;
//    }
//
//    cout << "Factorial " << n << " = " << fact << "\n";
//}


//Exercise 5
//int main() {
//    int number, sum = 0, count = 0;
//
//    cout << "Enter a number: ";
//    cin >> number;
//
//    while (number != 0) {
//        sum += number % 10;  
//        count++;             
//        number /= 10;      
//    }
//
//    cout << "Number of digits: " << count << "\n";
//    cout << "Sum of digits: " << sum << "\n";
//
//}


//Exercise 6
//int main() {
//    int number;
//
//    cout << "Enter a number: ";
//    cin >> number;
//
//    cout << "The numbers to which " << number << " divides without remainder: ";
//
//    for (int i = 1; i <= number; i++) {
//        if (number % i == 0) { 
//            cout << i << " ";
//        }
//    }
//}


//Exercise 8
//int main() {
//    int number;
//    int prevDigit = -1;
//
//    cout << "Enter a number: ";
//    cin >> number;
//
//    while (number > 0) {
//        int currentDigit = number % 10; 
//
//        if (currentDigit == prevDigit) {
//            cout << "The number has the same digits in a row.." << "\n";
//        }
//
//        prevDigit = currentDigit;  
//        number /= 10; 
//    }
//
//    cout << "The number has no consecutive digits of the same number.." << "\n";
//
//}