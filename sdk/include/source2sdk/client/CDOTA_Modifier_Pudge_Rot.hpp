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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Rot : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t rot_damage; // 0x_            
            std::int32_t rot_slow; // 0x_            
            std::int32_t scepter_rot_regen_reduction_pct; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flLastRotTime; // 0x_            
            bool m_bQualifiesAsPotentionalDeny; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t max_total_stacks; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Rot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pudge_Rot) == 0x_);
    };
};
