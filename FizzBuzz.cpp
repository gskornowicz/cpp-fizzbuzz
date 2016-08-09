// FizzBuzz.cpp : Defines the entry point for the console application.
// Napisz program, kt�ry wypisuje liczby od 1 do 100. 
// Ale dla wielokrotno�ci tr�jki wy�wietl "Fizz" zamiast liczby oraz dla wielokrotno�ci pi�tki wy�wietl "Buzz". 
// Dla liczb b�d�cych wielokrotno�ciami tr�jki oraz pi�tki wy�wietl "FizzBuzz".

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int numbers[100] = { 0 };

int main()
{
	for (int n = 0; n != 100; n++)
	{
		numbers[n] = numbers[n - 1] + 1;
		if (numbers[n] % 5 == 0 && numbers[n] % 3 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if(numbers[n] % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else if(numbers[n] % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else {
			cout << numbers[n] << endl;
		}
		Sleep(250);
	}
	getchar(); getchar();

    return 0;
}

