#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x888
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CBaseProp : public client::CBaseAnimatingActivity
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x849[0x3]; // 0x849
        int32_t m_iShapeType; // 0x84c        
        bool m_bConformToCollisionBounds; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x851[0x3]; // 0x851
        matrix3x4_t m_mPreferredCatchTransform; // 0x854        
        [[maybe_unused]] std::uint8_t pad_0x884[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0x888);
};
