#include <iostream>
#include "golf.h"
int main() {
    Golf one;
    Golf two("Zhou Dongyang",100);
    two.show();
    two.setgolf("Li yueyue",50);
    two.show();
    one.show();
    return 0;
}
