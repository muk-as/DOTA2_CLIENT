#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t visual_height; // 0x1878            
            float animation_rate; // 0x187c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1880            
            bool m_bPullComplete; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            std::uint32_t m_TreeId; // 0x1888            
            float m_flDamagePerTick; // 0x188c            
            std::int32_t m_nDamageTicks; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Bushwhack_Trap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Hoodwink_Bushwhack_Trap) == 0x1898);
    };
};
