#include <iostream> 
#include <string>

template<typename T>    // 关键字 typename 标识了一个类型参数, T 是类型参数
T max (T a, T b) {
  // typeid().name() 返回值参考：https://blog.csdn.net/chenyiming_1990/article/details/8979260
  std::cout << "\n T: " << typeid(T).name() << " " << typeid(T).hash_code() << std::endl;
  return b < a ? a : b;
}

int main() {
  int i = 42;
  std::cout << "max(7,i): " << ::max(7, i) << std::endl;
  
  float f1 = 3.4;
  float f2 = -6.7;
  std::cout << "max(f1,f2): " << ::max(f1, f2) << std::endl;

  double d1 = 35.5;
  double d2 = -6.7;
  std::cout << "max(d1,d2): " << ::max(d1, d2) << std::endl;
  
  std::string s1 = "mathematics";
  std::string s2 = "math";
  std::cout << "max(s1,s2): " << ::max(s1, s2) << std::endl;

  std::string *ps1 = &s1;
  std::string *ps2 = &s2;
  std::cout << "max(ps1, ps2): " << ::max(ps1, ps2) << std::endl;

  return 0;
}