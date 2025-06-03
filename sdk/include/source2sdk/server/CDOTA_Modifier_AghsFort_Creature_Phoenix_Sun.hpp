#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        class CDOTA_Modifier_AghsFort_Creature_Phoenix_Sun : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_radius; // 0x1878            
            float stun_duration; // 0x187c            
            std::int32_t max_hero_attacks; // 0x1880            
            std::int32_t max_hero_attacks_scepter; // 0x1884            
            std::int32_t max_hero_attacks_required; // 0x1888            
            float caster_life_pct; // 0x188c            
            // m_hSecondaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecondaryTarget;
            char m_hSecondaryTarget[0x4]; // 0x1890            
            std::int32_t m_iAttackCount; // 0x1894            
            std::int32_t creep_attacks_count; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Creature_Phoenix_Sun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_Creature_Phoenix_Sun) == 0x18a0);
    };
};
