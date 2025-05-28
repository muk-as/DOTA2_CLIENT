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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t familiar_speed; // 0x1888            
            std::int32_t m_nFXIndex; // 0x188c            
            std::int32_t m_nFXIndexB; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            source2sdk::server::CountdownTimer m_ctTimer; // 0x1898            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge) == 0x18b0);
    };
};
