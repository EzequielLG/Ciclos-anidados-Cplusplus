// Autor: LozanoSoft

#include <iostream>

using namespace std;

int main(){

  // Bucles/Ciclos anidados

  // for anidado - tablas de mutiplicar

  for(int i = 1; i <= 10; i++){

    for(int j = 1; j <= 10; j++){
      cout << "FOR_ANIDADO -> " << i << " x " << j << " = " << (i * j) << endl;
    }

  }

  // while anidado - tablas de multiplicar

  int i = 1;
  int j = 1;

  while(i <= 10){

    while(j <= 10){

      cout << "WHILE_ANIDADO -> " << i << " x " << j << " = " << (i * j) << endl;
      j++;

    }

    j = 1;
    i++;

  }

  return 0;

}
