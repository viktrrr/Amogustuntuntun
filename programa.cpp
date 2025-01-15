//kalkuliatorius 
# include <iostream>
#include <cassert> // Testavimui
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
}

void run_tests() {
    cout << "Pradedami testai..." << endl;

    // Testai
    assert(calculate('+', 3, 2) == 5);  
    assert(calculate('-', 10, 4) == 6); 
    assert(calculate('*', 3, 3) == 9);  
    assert(calculate('/', 8, 2) == 4);  
    assert(calculate('/', 8, 0) == 0);  // Patikrinimas, kai dalinama iš nulio
    assert(calculate('%', 5, 3) == 0);  // Netinkamas operatorius, grąžins 0

    cout << "Visi testai sėkmingai atlikti!" << endl;
}

int main() {
    run_tests();  // Atlikti testus
    return 0;     // Baigti programą
}
