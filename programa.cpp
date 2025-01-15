# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Parašykite operatorių: +, -, *, /: ";
  cin >> op;

  cout << "Parašykite skaičius: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:

      cout << "Klaida! Operatorius parašytas netaisyklingai"; 
      break;
  }

  return 0;
}
