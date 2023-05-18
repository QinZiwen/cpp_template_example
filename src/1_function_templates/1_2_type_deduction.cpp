#include <iostream>

template<typename T>
T max_decay(T a, T b) {
  std::cout << "\nmax_decay T: " << typeid(T).name() << " " << typeid(T).hash_code() << std::endl;
  return b < a ? a : b;
}

template<typename T>
T max(const T& a, const T& b) {
  std::cout << "\nmax T: " << typeid(T).name() << " " << typeid(T).hash_code() << std::endl;
  return b < a ? a : b;
}

int main() {
  const int c = 42;
  int i = 1;
  max_decay(i, c); // OK: T 被推断为 int，c 中的 const 被 decay 掉
  max(i, c);
  max_decay(c, c); // OK: T 被推断为 int
  max(c, c);
  
  int& ir = i;
  max_decay(i, ir); // OK: T 被推断为 int， ir 中的引用被 decay 掉
  max(i, ir);
  
  int arr[4];
  max_decay(&i, arr); // OK: T 被推断为 int*
  // max(&i, arr);  // error: no matching function for call to 'max'

  return 0;
}