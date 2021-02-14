#include <iostream>
#include <string>
using namespace std;
int main() {
  char s;
  int n;
  double v, w, x, y, z;
  double sum, sum2, sum3, sum4;
  double difference, difference2, difference3, difference4;
  double product, product2, product3, product4;
  double quotient, quotient2, quotient3, quotient4;
  cout << "Welcome to FourFunctionsCalculator!\nWhat function do you want to use?\nAddition, subtraction, multiplication, or division?\nType +, -, *, or /:\n";
  cin >> s;
  if(s != '+' && s != '-' && s != '*' && s != '/') {
    cout << "Sorry, but an error occured in the calculation process. Please try again.\n";
    return 0;
  }
  else if(s == '+') {
    cout << "How many numbers do you want to add?\nType 2, 3, 4, or 5:\n";
    cin >> n;
  }
  else if(s == '-') {
    cout << "How many numbers do you want to subtract?\nType 2, 3, 4, or 5:\n";
    cin >> n;
  }
  else if(s == '*') {
    cout << "How many numbers do you want to multiply?\nType 2, 3, 4, or 5:\n";
    cin >> n;
  }
  else {
    cout << "How many numbers do you want to divide?\nType 2, 3, 4, or 5:\n";
    cin >> n;
  }
  if(n == 2) {
    cout << "Type a number: \n";
    cin >> v;
    cout << "Type another number: \n";
    cin >> w;
    sum = v + w;
    difference = v - w;
    product = v * w;
    quotient = v / w;
    if(s == '+') {
      cout << "Sum is: " << sum << "\n";
    }
    else if(s == '-') {
      cout << "Difference is: " << difference << "\n";
    }
    else if(s == '*') {
      cout << "Product is: " << product << "\n";
    }
    else if(s == '/') {
      cout << "Quotient is: " << quotient << "\n";
    }
    else {
      cout << "Sorry, but an error occured in the calculation process. Please try again.\n";
    }
  }
  else if(n == 3) {
    cout << "Type a number: \n";
    cin >> v;
    cout << "Type a second number: \n";
    cin >> w;
    cout << "Type the final number: \n";
    cin >> x;
    sum2 = v + w + x;
    difference2 = v - w - x;
    product2 = v * w * x;
    quotient2 = v / w / x;
    if(s == '+') {
      cout << "Sum is: " << sum2 << "\n";
    }
    else if(s == '-') {
      cout << "Difference is: " << difference2 << "\n";
    }
    else if(s == '*') {
      cout << "Product is: " << product2 << "\n";
    }
    else if(s == '/') {
      cout << "Quotient is: " << quotient2 << "\n";
    }
    else {
      cout << "Sorry, but an error occured in the calculation process. Please try again.\n";
    }
  }
  else if(n == 4) {
    cout << "Type a number: \n";
    cin >> v;
    cout << "Type a second number: \n";
    cin >> w;
    cout << "Type a third number: \n";
    cin >> x;
    cout << "Type the final number: \n";
    cin >> y;
    sum3 = v + w + x + y;
    difference3 = v - w - x - y;
    product3 = v * w * x * y;
    quotient3 = v / w / x / y;
    if(s == '+') {
      cout << "Sum is: " << sum3 << "\n";
    }
    else if(s == '-') {
      cout << "Difference is: " << difference3 << "\n";
    }
    else if(s == '*') {
      cout << "Product is: " << product3 << "\n";
    }
    else if(s == '/') {
      cout << "Quotient is: " << quotient3 << "\n";
    }
    else {
      cout << "Sorry, but an error occured in the calculation process. Please try again.\n";
    }
  }
  else if(n == 5) {
    cout << "Type a number: \n";
    cin >> v;
    cout << "Type a second number: \n";
    cin >> w;
    cout << "Type a third number: \n";
    cin >> x;
    cout << "Type a fourth number: \n";
    cin >> y;
    cout << "Type the final number: \n";
    cin >> z;
    sum4 = v + w + x + y + z;
    difference4 = v - w - x - y - z;
    product4 = v * w * x * y * z;
    quotient4 = v / w / x / y / z;
    if(s == '+') {
      cout << "Sum is: " << sum4 << "\n";
    }
    else if(s == '-') {
      cout << "Difference is: " << difference4 << "\n";
    }
    else if(s == '*') {
      cout << "Product is: " << product4 << "\n";
    }
    else if(s == '/') {
      cout << "Quotient is: " << quotient4 << "\n";
    }
    else {
      cout << "Sorry, but an error occured in the calculation process. Please try again.\n";
    }
  }
  else {
    cout << "Sorry, but an error occured in the calculation process. Please try again.\n";
  }
  return 0;
}