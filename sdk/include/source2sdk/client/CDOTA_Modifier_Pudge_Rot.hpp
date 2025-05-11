#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Rot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rot_damage; // 0x17f8            
            std::int32_t rot_slow; // 0x17fc            
            std::int32_t scepter_rot_regen_reduction_pct; // 0x1800            
            uint8_t _pad1804[0x8]; // 0x1804
            source2sdk::entity2::GameTime_t m_flLastRotTime; // 0x180c            
            bool m_bQualifiesAsPotentionalDeny; // 0x1810            
            uint8_t _pad1811[0x3]; // 0x1811
            std::int32_t max_total_stacks; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Rot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pudge_Rot) == 0x1818);
    };
};
