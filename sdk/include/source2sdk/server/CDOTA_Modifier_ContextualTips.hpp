#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18f8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ContextualTips : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bAllEnemiesBots; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            source2sdk::entity2::GameTime_t m_flGloblLastTipSendTime; // 0x187c            
            source2sdk::entity2::GameTime_t m_flLastEnemyHeroDamageTime; // 0x1880            
            source2sdk::entity2::GameTime_t m_flLastEnemyHeroVisibleTime; // 0x1884            
            uint8_t _pad1888[0x70];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ContextualTips because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ContextualTips) == 0x18f8);
    };
};
