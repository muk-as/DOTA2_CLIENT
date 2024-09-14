#pragma once
#include "source2sdk/animgraphlib/CAnimMotorUpdaterBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x28
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPathAnimMotorUpdaterBase : public animgraphlib::CAnimMotorUpdaterBase
    {
    public:
        bool m_bLockToPath; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathAnimMotorUpdaterBase because it is not a standard-layout class
    static_assert(sizeof(CPathAnimMotorUpdaterBase) == 0x28);
};
