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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Rot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rot_damage; // 0x1878            
            std::int32_t rot_slow; // 0x187c            
            std::int32_t scepter_rot_regen_reduction_pct; // 0x1880            
            uint8_t _pad1884[0x14]; // 0x1884
            source2sdk::entity2::GameTime_t m_flLastRotTime; // 0x1898            
            bool m_bQualifiesAsPotentionalDeny; // 0x189c            
            uint8_t _pad189d[0x3]; // 0x189d
            std::int32_t max_total_stacks; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Rot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_Rot) == 0x18a8);
    };
};
