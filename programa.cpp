//kalkuliatorius 
# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2; //skaičiai gali buti įvairus

  cout << "Parašykite operatorių: +, -, *, / "; //Rekia pasirinkti ženklą sprendimui
  cin >> op;

  cout << "Parašykite skaičius: "; //Reikia parašyti sprendinį
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2; //Jeigu operatorius yra "+", tada parašytas toks sprendimas
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2; //Jeigu operatorius yra "-", tada parašytas toks sprendimas
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2; //Jeigu operatorius yra "*", tada parašytas toks sprendimas
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;  //Jeigu operatorius yra "/", tada parašytas toks sprendimas
      break;

    default:

      cout << "Klaida! Operatorius parašytas netaisyklingai"; //Jeigu operatorius yra ne "-, +, *, /", tada bus klaida
      break;
  }

  return 0;
}
