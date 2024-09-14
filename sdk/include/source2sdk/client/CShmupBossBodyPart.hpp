#pragma once
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
    // Standard-layout class: true
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CShmupBossBodyPart
    {
    public:
        CUtlString m_strAttachName; // 0x0        
        float m_flRadius; // 0x8        
        int32_t m_nHitRegionIndex; // 0xc        
        int32_t m_nDamageMultiplier; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupBossBodyPart, m_strAttachName) == 0x0);
    static_assert(offsetof(CShmupBossBodyPart, m_flRadius) == 0x8);
    static_assert(offsetof(CShmupBossBodyPart, m_nHitRegionIndex) == 0xc);
    static_assert(offsetof(CShmupBossBodyPart, m_nDamageMultiplier) == 0x10);
    
    static_assert(sizeof(CShmupBossBodyPart) == 0x18);
};
