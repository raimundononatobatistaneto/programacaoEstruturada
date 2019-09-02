#include <iostream>
#include <fstream>

using namespace std;

int main() {

  fstream arquivo;
  
  arquivo.open("input.txt",ios::out);

  
    arquivo << "Estou adicionando uma linha \n";
    arquivo << "C++ é mais fácil que C \n";

    
  arquivo.close();

  return 0;
}