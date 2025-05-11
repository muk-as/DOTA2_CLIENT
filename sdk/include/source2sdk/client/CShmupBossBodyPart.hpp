#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            std::int32_t m_nHitRegionIndex; // 0xc            
            std::int32_t m_nDamageMultiplier; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupBossBodyPart, m_strAttachName) == 0x0);
        static_assert(offsetof(source2sdk::client::CShmupBossBodyPart, m_flRadius) == 0x8);
        static_assert(offsetof(source2sdk::client::CShmupBossBodyPart, m_nHitRegionIndex) == 0xc);
        static_assert(offsetof(source2sdk::client::CShmupBossBodyPart, m_nDamageMultiplier) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CShmupBossBodyPart) == 0x18);
    };
};
