#pragma once
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
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
    // Size: 0x800
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CBaseProp : public server::CBaseAnimatingActivity
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0x7c0        
        [[maybe_unused]] std::uint8_t pad_0x7c1[0x3]; // 0x7c1
        int32_t m_iShapeType; // 0x7c4        
        bool m_bConformToCollisionBounds; // 0x7c8        
        [[maybe_unused]] std::uint8_t pad_0x7c9[0x3]; // 0x7c9
        matrix3x4_t m_mPreferredCatchTransform; // 0x7cc        
        [[maybe_unused]] std::uint8_t pad_0x7fc[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0x800);
};
