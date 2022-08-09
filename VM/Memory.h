//
// Created by againstsky on 2022/8/8.
//

#ifndef VM_MEMORY_H
#define VM_MEMORY_H

#include <cstdlib>
#include "IMemory.h"

namespace sky {
    class Memory : public IMemory {
        byte *_memory;
        uint_32 _size;
        bool _inited;

    public:
        explicit Memory(uint_32 size) : _size(size) {
            _memory = (byte *) malloc(size * sizeof(byte));
            _inited = true;
        }

        ~Memory() override { free(_memory); }

        void writeByte(uint_32 pos, byte data) override;

        byte readByte(uint_32 pos) override;

        void writeWord(uint_32 pos, word data) override;

        word readWord(uint_32 pos) override;

        void writeFloat(uint_32 pos, float data) override;

        float readFloat(uint_32 pos) override;
    };
}


#endif //VM_MEMORY_H
