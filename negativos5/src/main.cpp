#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void){
  int numeros[5];
  int flag = 0;
  
  for (int i = 0; i < SIZE; i++){
    cin >> numeros[i];
    if(numeros[i] < 0)
      flag++;
  }
  cout << flag;
  cout << "Modificando hehe.."<<endl;
    return 0;
}

// arquivos untraked não estão sob o controle de versão. Um desses comandos é o commit
