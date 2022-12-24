#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
 //Написать программу, которая из имеющегося массива строк формирует массив строк, длина которых меньше или равна 3 символа. Первоначальный массив можно ввести с клавиатуры, либо задать на старте выполнения алгоритма. При решении не рекомендуется пользоваться коллекциями, лучше обойтись исключительно массивами. 
{
char arr[100];
char arrar[100];
char arrarar[100];
  std::cout << ("Введите символы: ") << std::endl;
  std::cin >> arr;
  std::cout << ("Введите символы: ") << std::endl;
  std::cin >> arrar;
  std::cout << ("Введите символы: ") << std::endl;
  std::cin >> arrarar;
  printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(arr));
  return 0;

}




