#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string linha;

  fstream arquivo;
  
  arquivo.open("input.txt",ios::in);

  
  if(arquivo.is_open()){
    while(getline(arquivo,linha))
      cout << linha << endl;
    }
  else {
    cout << "Não foi possível abrir o arquivo!"<<endl;
  }
    
  arquivo.close();

  return 0;
}