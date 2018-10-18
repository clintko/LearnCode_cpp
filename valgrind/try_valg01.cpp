#include <iostream>

void set_val(bool &b, const int val) {
    if (val > 1) {
        b = false;
    } // end if
} // end func

int main(const int argc, const char *[]) {
    bool b; // THE VALUE IS UNINTIALIZED
    set_val(b, argc);
    if (b) {
        std::cout << "value set\n";
    } // end if
} // end main

