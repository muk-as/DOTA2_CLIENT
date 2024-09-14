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
    // Size: 0x840
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBaseProp : public client::CBaseAnimatingActivity
    {
    public:
        bool m_bModelOverrodeBlockLOS; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x801[0x3]; // 0x801
        int32_t m_iShapeType; // 0x804        
        bool m_bConformToCollisionBounds; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x809[0x3]; // 0x809
        matrix3x4_t m_mPreferredCatchTransform; // 0x80c        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4];
        
        // Datamap fields:
        // void health; // 0x7fffffff
        // CUtlSymbolLarge propdata_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
    static_assert(sizeof(CBaseProp) == 0x840);
};
