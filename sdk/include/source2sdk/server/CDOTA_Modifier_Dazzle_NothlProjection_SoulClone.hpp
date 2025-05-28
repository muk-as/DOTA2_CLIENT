#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dazzle_NothlProjection_SoulClone : public source2sdk::client::CDOTA_Buff
        {
        public:
            float shadow_wave_cdr; // 0x1888            
            float healing_amp; // 0x188c            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1890            
            float leash_start; // 0x1894            
            float base_leash_pull; // 0x1898            
            float leash_increase; // 0x189c            
            // m_hBody has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hBody;
            char m_hBody[0x4]; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_NothlProjection_SoulClone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dazzle_NothlProjection_SoulClone) == 0x18a8);
    };
};
