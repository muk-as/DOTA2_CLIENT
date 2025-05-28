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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue : public source2sdk::client::CDOTA_Buff
        {
        public:
            float frostbite_radius; // 0x1888            
            float anim_delay; // 0x188c            
            bool m_bActivated; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            std::int32_t clone_health; // 0x1894            
            float m_flDamageTaken; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue) == 0x18a0);
    };
};
