#include <iostream>

using namespace std;

int main() {

  cout << "For to while" << endl;

  // ตัวอย่างโปรแกรมที่ใช้ for

  int i = 0;
  for (i = 0; i < 10; i=i+1) {
    cout << "Run from for" << endl;
  }
  cout << "************END FOR************" << endl;

  // เขียนโปรแกรมที่ทำงานเหมือนด้านบนโดยใช้ while แทน for
  i = 0;
 while (i < 10) {
    cout << "Run from for" << endl;
    i = i + 1;
 }


  return 0;
}
