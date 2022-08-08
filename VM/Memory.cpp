//
// Created by againstsky on 2022/8/8.
//

#include "Memory.h"

namespace sky {
    void Memory::writeByte(uint_32 pos, byte data) {
        _memory[pos] = data;
    }

    void Memory::writeWord(uint_32 pos, word data) {
        pos = pos / 4;
        word *temp = (word *) _memory;
        temp[pos] = data;
    }

    void Memory::writeFloat(uint_32 pos, float data) {
        auto temp =(float *) _memory;
        temp[pos/4] = data;
    }

    float Memory::readFloat(uint_32 pos) {
        auto temp =(float *) _memory;
        return temp[pos/4];
    }
}
