#pragma once
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa60
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class COrnamentProp : public server::CDynamicProp
    {
    public:
        CUtlSymbolLarge m_initialOwner; // 0xa58        
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetAttached; // 0x0
        // void InputDetach; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in COrnamentProp because it is not a standard-layout class
    static_assert(sizeof(COrnamentProp) == 0xa60);
};
