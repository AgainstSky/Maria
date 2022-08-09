//
// Created by againstsky on 2022/8/8.
//

#ifndef VM_IMEMORY_H
#define VM_IMEMORY_H

#include "Common.h"

namespace sky {
    /**
     * 内存读写除了byte外都需要4k对齐的。也就是传入的pos必须是4的倍数。
     */
    class IMemory {
    public:
        virtual void writeByte(uint_32 pos, byte data) = 0;

        virtual byte readByte(uint_32 pos) = 0;

        virtual void writeWord(uint_32 pos, word data) = 0;

        virtual word readWord(uint_32 pos) = 0;

        virtual void writeFloat(uint_32 pos, float data) = 0;

        virtual float readFloat(uint_32 pos) = 0;

        virtual ~IMemory() = default;
    };

}
#endif //VM_IMEMORY_H
