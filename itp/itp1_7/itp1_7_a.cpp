#include <iostream>
using namespace std;

int main() {
  while (true) {
    int m, f, r; cin >> m >> f >> r;
    if (m==-1 && f==-1 && r==-1) { break; }

    char grade;
    if (m==-1 || f==-1) {
      grade = 'F';
    } else if (m+f >= 80) {
      grade = 'A';
    } else if (m+f >= 65) {
      grade = 'B';
    } else if (m+f >= 50) {
      grade = 'C';
    } else if (m+f >= 30) {
      if (r >= 50) {
        grade = 'C';
      } else {
        grade = 'D';
      }
    } else {
      grade = 'F';
    }

    cout << grade << endl;
  }
}