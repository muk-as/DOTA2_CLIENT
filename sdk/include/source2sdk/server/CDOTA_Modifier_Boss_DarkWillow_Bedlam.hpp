#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Boss_DarkWillow_Bedlam : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flRotation; // 0x17f8            
            // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWisp;
            char m_hWisp[0x4]; // 0x17fc            
            source2sdk::entity2::GameTime_t m_flLastAttack; // 0x1800            
            bool reversed; // 0x1804            
            uint8_t _pad1805[0x3]; // 0x1805
            std::int32_t roaming_radius; // 0x1808            
            std::int32_t attack_radius; // 0x180c            
            float roaming_seconds_per_rotation; // 0x1810            
            float attack_interval; // 0x1814            
            bool m_bSetupWarning; // 0x1818            
            uint8_t _pad1819[0x3]; // 0x1819
            source2sdk::client::ParticleIndex_t m_nPreviewFX; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Boss_DarkWillow_Bedlam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Boss_DarkWillow_Bedlam) == 0x1820);
    };
};
