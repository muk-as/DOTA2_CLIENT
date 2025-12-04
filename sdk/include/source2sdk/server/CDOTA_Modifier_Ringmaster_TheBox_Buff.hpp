#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_TheBox_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t leash_radius; // 0x_            
            Vector m_vLeashLocation; // 0x_            
            float transform_time; // 0x_            
            float invis_duration; // 0x_            
            std::int32_t radius; // 0x_            
            std::int32_t move_speed; // 0x_            
            std::int32_t magic_resist; // 0x_            
            std::int32_t grant_flying; // 0x_            
            std::int32_t grant_debuff_immunity; // 0x_            
            float slow_resist; // 0x_            
            float m_flDamageTaken; // 0x_            
            source2sdk::entity2::GameTime_t m_flCancelTime; // 0x_            
            source2sdk::client::ParticleIndex_t m_nCircleFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_TheBox_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Ringmaster_TheBox_Buff) == 0x_);
    };
};
