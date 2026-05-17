#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  cout << setw(6) << "Odd" << setw(8) << "Even" << endl;
  
  int i = 1;
  while(i <= 19){
    cout << setw(6) << i << setw(8) << (i + 1) << endl;
    i += 2;
  }

  return 0;
}