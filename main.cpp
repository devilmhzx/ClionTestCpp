#include "TestA.h"
#include <cassert>
#include <iostream>
#include <string>
using namespace std;

void TestA(string &str) {
  // printf("str = %s \r\n",&str);
  cout << "str = " << str << endl;
  str = "你个逗逼！";
}

void TestB(string *str) {
  assert(str != nullptr);
  cout << "str = " << *str << endl;
  *str = "你才个逗逼！";
}



int main() {

  TestA(StrA);

  std::cout << "Hello, World!" << std::endl;
  string A = "我是你爸爸!";
  TestA(A);

  TestA(A);

  string B = "你是我孙子！";

  string *C = &B;
  TestB(C);
  TestB(C);

  TestB(&B);

  const char *str1 = "我是你大爷！";

  char str2[10] = {'1','2','3'};
  string stra2 = str1;
  TestB(&stra2);

  TestB(&stra2);

  size_t strLen = strlen(str1);
  size_t str2len = strlen(str2);

  printf("str1 len = %d", strLen);
  printf("str2 len = %d", str2len);
  return 0;
}
