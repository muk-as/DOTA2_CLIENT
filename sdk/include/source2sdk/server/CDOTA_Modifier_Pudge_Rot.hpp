#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Pudge_Rot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rot_damage; // 0x1888            
            std::int32_t rot_slow; // 0x188c            
            std::int32_t scepter_rot_regen_reduction_pct; // 0x1890            
            uint8_t _pad1894[0x14]; // 0x1894
            source2sdk::entity2::GameTime_t m_flLastRotTime; // 0x18a8            
            bool m_bQualifiesAsPotentionalDeny; // 0x18ac            
            uint8_t _pad18ad[0x3]; // 0x18ad
            std::int32_t max_total_stacks; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Rot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_Rot) == 0x18b8);
    };
};
