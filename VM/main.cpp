#include <iostream>
#include "IMemory.h"
#include "Memory.h"

using namespace sky;

int main() {
    IMemory *memory = new Memory(40);
    float m = -2.987;
    memory->writeFloat(0, -2.987);
    float f = memory->readFloat(0);
    std::cout << f << "and" << m << std::endl;
    return 0;
}
