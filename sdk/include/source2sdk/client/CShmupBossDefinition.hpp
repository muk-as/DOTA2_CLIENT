#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CShmupBossBodyPart.hpp"

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
        class CShmupBossDefinition
        {
        public:
            // m_vecBodyParts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupBossBodyPart> m_vecBodyParts;
            char m_vecBodyParts[0x_]; // 0x_            
            float m_flIntroDuration; // 0x_            
            float m_flMouthLaserChargeTime; // 0x_            
            float m_flMouthLaserDuration; // 0x_            
            float m_flWingBarrageChargeTime; // 0x_            
            float m_flWingBarrageDuration; // 0x_            
            std::int32_t m_nSplinterBlastCount; // 0x_            
            float m_fSplinterBlastChargeTime; // 0x_            
            float m_flSplinterBlastDuration; // 0x_            
            float m_flColdEmbraceDuration; // 0x_            
            Vector2D m_vIdlePosition; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_vecBodyParts) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flIntroDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flMouthLaserChargeTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flMouthLaserDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flWingBarrageChargeTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flWingBarrageDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_nSplinterBlastCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_fSplinterBlastChargeTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flSplinterBlastDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flColdEmbraceDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_vIdlePosition) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupBossDefinition) == 0x_);
    };
};
