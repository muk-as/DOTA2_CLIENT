#pragma once
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
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
    // Size: 0x58
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CHandshakeAnimTagBase : public animgraphlib::CAnimTagBase
    {
    public:
        // metadata: MPropertyFriendlyName "Disables Handshake"
        bool m_bIsDisableTag; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CHandshakeAnimTagBase because it is not a standard-layout class
    static_assert(sizeof(CHandshakeAnimTagBase) == 0x58);
};
