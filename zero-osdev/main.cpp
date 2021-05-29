#include <iostream>
 int main() {
    unsigned long long_var = 0x40200000;
    float* float_ptr = (float*)&long_var;
    std::cout << *float_ptr << std::endl;

    *float_ptr = 1.0;
    std::cout << std::hex << long_var << std::endl;
    return 0;
}
