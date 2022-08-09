//
// Created by againstsky on 2022/8/9.
//

#ifndef VM_REG_H
#define VM_REG_H
#include "IReg.h"
#include "Common.h"
namespace sky{
    class Reg: public IReg{
        byte _reg[4];

    };
}



#endif //VM_REG_H
