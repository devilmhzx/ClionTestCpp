#include <iostream>
#include <string>
using namespace std;

void TestA(string &str) {
  // printf("str = %s \r\n",&str);
  cout << "str = " << str << endl;
  str = "������ƣ�";
}

void TestB(string *str) {
  cout << "str = " << *str << endl;
  *str = "��Ÿ����ƣ�";
}

int main() {
  std::cout << "Hello, World!" << std::endl;
  string A = "������ְ�!";
  TestA(A);

  TestA(A);

  string B = "���������ӣ�";

  string *C = &B;
  TestB(C);
  TestB(C);

  TestB(&B);
  return 0;
}
