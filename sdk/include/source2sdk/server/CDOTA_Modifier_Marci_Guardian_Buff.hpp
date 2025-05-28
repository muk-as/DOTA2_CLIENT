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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Guardian_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float lifesteal_pct; // 0x1888            
            std::int32_t bonus_damage; // 0x188c            
            std::int32_t bonus_attack_range; // 0x1890            
            std::int32_t max_partner_distance; // 0x1894            
            std::int32_t max_partner_penalty; // 0x1898            
            std::int32_t creep_lifesteal_reduction_pct; // 0x189c            
            float m_fLifestealPct; // 0x18a0            
            float m_fDamageAbsorbed; // 0x18a4            
            bool m_bActive; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x18ac            
            // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartner;
            char m_hPartner[0x4]; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Guardian_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Guardian_Buff) == 0x18b8);
    };
};
