//
// Created by againstsky on 2022/8/8.
//

#ifndef VM_IMEMORY_H
#define VM_IMEMORY_H

#include "Common.h"

namespace sky {
    class IMemory {
    public:
        virtual void writeByte(uint_32 posByByte, byte data) = 0;

        virtual void writeWord(uint_32 pos, word data) = 0;

        virtual void writeFloat(uint_32 pos, float data) = 0;

        virtual float readFloat(uint_32 pos)=0;
    };

}
#endif //VM_IMEMORY_H
