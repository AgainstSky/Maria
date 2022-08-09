//
// Created by againstsky on 2022/8/9.
//

#ifndef VM_IREG_H
#define VM_IREG_H

#include "Common.h"

namespace sky {

    enum RegTag : byte {

    };

    class IReg {
    public:
        virtual ~IReg() = default;

    };
}
#endif //VM_IREG_H
