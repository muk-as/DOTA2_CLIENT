#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Pulverize_Self : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hTarget;
            char m_hTarget[0x4]; // 0x1878            
            Vector m_vPulverizeCenter; // 0x187c            
            Vector m_vCasterStartPos; // 0x1888            
            float splash_radius; // 0x1894            
            float interval; // 0x1898            
            float ministun; // 0x189c            
            std::int32_t damage; // 0x18a0            
            std::int32_t bonus_damage_per_hit; // 0x18a4            
            std::int32_t m_nHitCount; // 0x18a8            
            float bonus_aoe_duration; // 0x18ac            
            std::int32_t max_stacks; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Pulverize_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PrimalBeast_Pulverize_Self) == 0x18b8);
    };
};
