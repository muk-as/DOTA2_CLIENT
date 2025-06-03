#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Treant_NaturesGuise : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::CountdownTimer m_RevealTimer; // 0x1878            
            source2sdk::client::CountdownTimer m_InvisAttackTimer; // 0x1890            
            source2sdk::client::CountdownTimer m_CooldownTimer; // 0x18a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGuise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Treant_NaturesGuise) == 0x18c0);
    };
};
