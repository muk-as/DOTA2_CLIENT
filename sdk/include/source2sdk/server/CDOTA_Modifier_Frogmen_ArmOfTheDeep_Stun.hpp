#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Frogmen_ArmOfTheDeep_Stun : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flStartZ; // 0x17f8            
            float m_flCurTime; // 0x17fc            
            bool m_bDamageApplied; // 0x1800            
            uint8_t _pad1801[0x3]; // 0x1801
            float damage; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Frogmen_ArmOfTheDeep_Stun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Frogmen_ArmOfTheDeep_Stun) == 0x1808);
    };
};
