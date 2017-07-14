#include <iostream>
#include "macro_for_each.h"

template<typename T>
T print(const char* name, const T& t) {
    std::cout << name << "=" << t << std::endl;
    return t;
}
#define PRINT(a) print(#a, a)
template<typename T>
T same(T t) {
    return t;
}
int sum() {
    return 0;
}
template<typename T, typename... Args>
T sum(T t, Args... args) {
    return t + sum(args...);
}
#define TO_STRING_(a) #a
#define TO_STRING(a) TO_STRING_(a)
#define SUM(...) print(TO_STRING(SEPERATOR_ARGS(+,__VA_ARGS__)), sum(__VA_ARGS__))
int main() {
    std::cout << SEPERATOR_ARGS(<<, 1, 2, 3, 4, std::endl);

    std::cout << FOR_EACH(same, +, 1, 2, 3, 4) << std::endl;

    std::cout << WRAP_CALL(sum, PRINT, 1, 2, 3, 4) << std::endl;

    std::cout << WRAP_CALL(SUM, PRINT, 1, 2, 3, 4);

    return 0;
}

/*
-->

int main() {
    std::cout << 1 << 2 << 3 << 4 << std::endl;
   
    std::cout << same(1) + same(2) + same(3) + same(4) << std::endl;

    std::cout << sum(print("1", 1) , print("2", 2) , print("3", 3) , print("4", 4)) << std::endl;

    std::cout << print("print(\"1\", 1) + print(\"2\", 2) + print(\"3\", 3) + print(\"4\", 4)", sum(print("1", 1) , print("2", 2) , print("3", 3) , print("4", 4)));

    return 0;
}
*/
