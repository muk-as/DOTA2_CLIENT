#pragma once
#include "source2sdk/animgraphlib/CSequenceUpdateNodeBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x80
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPairedSequenceUpdateNode : public animgraphlib::CSequenceUpdateNodeBase
    {
    public:
        CGlobalSymbol m_sPairedSequenceRole; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x78[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPairedSequenceUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CPairedSequenceUpdateNode) == 0x80);
};
