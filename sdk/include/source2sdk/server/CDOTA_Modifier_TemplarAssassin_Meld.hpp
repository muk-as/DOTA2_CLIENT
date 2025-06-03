#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Modifier_TemplarAssassin_Meld : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_damage; // 0x1878            
            bool launched_attack; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1880            
            std::int32_t m_nAttackRecord; // 0x1884            
            std::int32_t attack_range_increase_max; // 0x1888            
            float attack_range_increase_time; // 0x188c            
            float m_fAttackRangeIncreaseSpeed; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFXIndexAoE; // 0x1894            
            float m_fElapsedTime; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_Meld because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TemplarAssassin_Meld) == 0x18a0);
    };
};
