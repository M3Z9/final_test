#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
 //Написать программу, которая из имеющегося массива строк формирует массив строк, длина которых меньше или равна 3 символа. Первоначальный массив можно ввести с клавиатуры, либо задать на старте выполнения алгоритма. При решении не рекомендуется пользоваться коллекциями, лучше обойтись исключительно массивами. 
{
int main() {
  char arr[100];
  char arr2[100];
  char arr3[100];
  std::cout << ("Введите символы: ") << std::endl;
  std::cin >> arr;
  std::cout << ("Введите символы: ") << std::endl;
  std::cin >> arr2;
  std::cout << ("Введите символы: ") << std::endl;
  std::cin >> arr3;
  if (strlen(arr) <= 3) {
    printf("\nДлина массива не более 3 символов.\n");
    printf(arr);
  };
  if (strlen(arr2) <= 3) {
    printf("\nДлина массива не более 3 символов.\n");
    printf(arr2);
  }
  if (strlen(arr3) <= 3) {
    printf("\nДлина массива не более 3 символов.\n");
    printf(arr3);
  }
  return 0;

}




