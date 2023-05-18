#include <iostream>
#include <functional>

template <typename T1, typename T2>
auto max(T1 a, T2 b) -> decltype(b < a ? a : b) {
  std::cout << "\nmax T: " << typeid(T1).name() << " " << typeid(T2).name() << std::endl;
  return b < a ? a : b;
}

template <typename T1, typename T2>
auto max14(T1 a, T2 b) {
  std::cout << "\nmax14 T: " << typeid(T1).name() << " " << typeid(T2).name() << std::endl;
  return b < a ? a : b;
}

template <typename T1, typename T2>
auto max_decay(T1 a, T2 b) -> typename std::decay<decltype(true? a : b)>::type {
  std::cout << "\nmax_decay T: " << typeid(T1).name() << " " << typeid(T2).name() << std::endl;
  return b < a ? a : b;
}

template <typename T1, typename T2>
std::common_type_t<T1,T2> max_common_type(T1 a, T2 b) {
  std::cout << "\nmax_common_type T: " << typeid(T1).name() << " " << typeid(T2).name() << std::endl;
  return b < a ? a : b;
}

template <typename T>
void printT(T t) {
  std::cout << "print T: " << typeid(T).name() << std::endl;
}

int main() {
  // int a = 50;
  // double b = 10.5;
  // auto c = max(a, b);
  // std::cout << "c: " << typeid(c).name() << std::endl;

  // int a = 50;
  // double b = 10.5;
  // auto c = max(a, b);
  // std::cout << "c: " << typeid(c).name() << std::endl;

  // int a = 50;
  // double b = 10.5;
  // auto c = max_decay(a, b);
  // std::cout << "c: " << typeid(c).name() << std::endl;

  // int aa = 33;
  // const int &bb = aa;
  // auto cc = bb;
  // std::cout << "bb type: " << typeid(bb).name() << std::endl;
  // std::cout << "cc type: " << typeid(cc).name() << std::endl;

  int a = 50;
  double b = 10.5;
  auto c = max_common_type(a, b);
  std::cout << "c: " << typeid(c).name() << std::endl;

  std::string s = "hello";
  printT(s); //pass s By value
  printT(std::cref(s)); // pass s “as if by reference”

  return 0;
}