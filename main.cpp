#include <iostream>
#include <vector>
#include "utils.h"


int main() {


    std::vector <float> v;
    while (getchar() != '\n') {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    std::vector <float> f;
    while (getchar() != '\n') {
        int x;
        std::cin >> x;
        f.push_back(x);
    }

    int lag;
    std::cin >> lag;

    corr(v, f, lag);
}