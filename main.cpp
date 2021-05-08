#include <iostream>
#include <string>
using namespace std;

void TestA(string &str) {
  // printf("str = %s \r\n",&str);
  cout << "str = " << str << endl;
  str = "你个逗逼！";
}

void TestB(string *str) {
  cout << "str = " << *str << endl;
  *str = "你才个逗逼！";
}

int main() {
  std::cout << "Hello, World!" << std::endl;
  string A = "我是你爸爸!";
  TestA(A);

  TestA(A);

  string B = "你是我孙子！";

  string *C = &B;
  TestB(C);
  TestB(C);

  TestB(&B);
  return 0;
}
