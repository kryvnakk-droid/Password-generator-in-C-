#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  string lowercase = "abcdefghijklmnopqrstuvwxyz";
  string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string digits = "123456789";
  string symbols = "!@#$%^&*()_+-=[]{}";

  int length;
  bool useUpper, useDigits, useSymbols;
  
  cout << "Длина пароля: ";
  cin >> length;

  cout << "Использовать заглавные буквы? (1-да / 0-нет): ";
  cin >> useUpper;

  cout << "Использовать цифры? (1-да / 0-нет): ";
  cin >> useDigits;

  cout << "Использовать символы? (1-да / 0-нет): ";
  cin >> useSymbols;

  string charset = lowercase;

  if (useUpper)   charset += uppercase;
  if (useDigits)  charset += digits;
  if (useSymbols) charset += symbols;

  srand(time(0));
  string password = "";

  for (int i = 0; i < length; i++) {
    int index = rand() % charset.length();
    password += charset[index];
  }

  cout << "\nВаш пароль: " <<password << endl;
  return 0;
}
