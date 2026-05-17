#include <iostream>
#include <cctype>
using namespace std;

int main(){
  string day;
  cout << "Enter a day: ";
  cin >> day;

  for(int i = 0; i < day.length(); i++){
    day[i] = tolower(day[i]);
  }

  if(day == "fri"){
    cout << "It's Friday!" << endl;
  } else if(day == "sun" || day == "sat"){
    cout << "It's a weekend." << endl;
  } else {
    cout << "It's a weekday." << endl;
  }

  return 0;
}