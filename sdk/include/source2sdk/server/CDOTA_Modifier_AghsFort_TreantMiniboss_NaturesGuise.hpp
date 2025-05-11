#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_TreantMiniboss_NaturesGuise : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::server::CountdownTimer m_RevealTimer; // 0x17f8            
            source2sdk::server::CountdownTimer m_InvisAttackTimer; // 0x1810            
            source2sdk::server::CountdownTimer m_CooldownTimer; // 0x1828            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_TreantMiniboss_NaturesGuise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_TreantMiniboss_NaturesGuise) == 0x1840);
    };
};
