//============================================================================
// Name        : Multivariable.cpp
// Author      : Alexis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdarg.h>
using namespace std;


int sum(int n, ...)
{
   int somme = 0;
   va_list va;
   va_start (va, n);
   int i;

   for (i = 0; i < n; i++)
      {
         somme += va_arg (va, int);
      }

   va_end (va);
   return somme;
}

int main() {
	int somme;
	somme = sum(2,2,4);
	cout << somme << endl;
	return 0;
}
