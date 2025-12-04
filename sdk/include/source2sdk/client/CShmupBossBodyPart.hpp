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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupBossBodyPart
        {
        public:
            CUtlString m_strAttachName; // 0x_            
            float m_flRadius; // 0x_            
            std::int32_t m_nHitRegionIndex; // 0x_            
            std::int32_t m_nDamageMultiplier; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupBossBodyPart, m_strAttachName) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossBodyPart, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossBodyPart, m_nHitRegionIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossBodyPart, m_nDamageMultiplier) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupBossBodyPart) == 0x_);
    };
};
