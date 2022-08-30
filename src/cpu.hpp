#pragma once

#include <string>

#include <mem.hpp>

namespace mulator::cpu
{
    class Cpu
    {
    public:
        virtual std::string dumpRegs() = 0;

        virtual void reset() = 0;
        virtual int execute(mem::Mem &memory) = 0; // Returns cycle count
    };
}