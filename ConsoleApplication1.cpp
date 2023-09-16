#include <iostream>
#include <cstdint>
#include <ciso646>
#include "solve.h"

int main()
{
    int n = 0;
#ifdef _WIN32
    system("chcp 65001");
#endif
    std::cout << "\033[41mПривет\033[0m " << std::endl;
    std::cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    };

    print_array(a, n); std::cout << std::endl;
    sort_array(a, n);
    print_array(a, n); std::cout << std::endl;

    delete[] a;
    return 0;
}
