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
        class CDOTA_Modifier_Muerta_PierceTheVeil_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t modelscale; // 0x1878            
            std::int32_t bonus_damage; // 0x187c            
            std::int32_t spell_lifesteal; // 0x1880            
            std::int32_t attack_projectile_speed_bonus; // 0x1884            
            std::int32_t attack_range_bonus; // 0x1888            
            std::int32_t m_iOriginalAttackCapabilities; // 0x188c            
            source2sdk::client::ParticleIndex_t m_nScreenFXIndex; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_PierceTheVeil_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Muerta_PierceTheVeil_Buff) == 0x1898);
    };
};
