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
        byte *b = (byte *) &data;
        for (int i = 0; i < sizeof(data); i++) {
            _memory[pos + 1] = b[i];
        }
    }

    float Memory::readFloat(uint_32 pos) {
        float result = 0;
        byte *b = (byte*)&result;
        b[0] = _memory[pos+1];

        return 0;
    }
}
