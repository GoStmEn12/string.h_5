#include <iostream>
#include<string.h>
using namespace std;

int main() {
  char dest[50] = "Learning C++ is fun"; 
  char src[50] = " and easy"; 
  strcat(dest, src); //фунуція для копіювання  destto src працює тільки з масивами char
  cout << dest ;
  //Функция iscntrl() в C++ проверяет, является ли данный символ управляющим символом или нет.
cout << endl; 
char ch1 = '\t'; 
  char ch2 = 'x'; 
  iscntrl(ch1)? cout << ch1 << " is a control character":cout << ch1 << " is not a control character"; 
cout << endl; 
iscntrl(ch2)? cout << ch2 << " is a control character":cout << ch2 << " is not a control character";
}