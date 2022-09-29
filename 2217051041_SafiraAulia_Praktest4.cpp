#include <iostream>
using namespace std;

int main() {
  int x, y;

  cin>>x;
  cin>>y;

  for (int i =x; i<=y; i+=x) {
    cout << i << endl;
  
  }
  return 0;
}