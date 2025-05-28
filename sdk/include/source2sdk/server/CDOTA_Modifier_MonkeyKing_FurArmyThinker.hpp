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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_FurArmyThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDuration; // 0x1888            
            source2sdk::entity2::GameTime_t m_fTimeThinkerCreated; // 0x188c            
            // m_vTargetPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vTargetPositions;
            char m_vTargetPositions[0x18]; // 0x1890            
            Vector m_vInitialPos; // 0x18a8            
            float first_radius; // 0x18b4            
            std::int32_t num_first_soldiers; // 0x18b8            
            float second_radius; // 0x18bc            
            std::int32_t num_second_soldiers; // 0x18c0            
            source2sdk::client::ParticleIndex_t m_nRingFXIndex; // 0x18c4            
            float final_radius; // 0x18c8            
            float leadership_time_buffer; // 0x18cc            
            source2sdk::entity2::GameTime_t m_flLastTimeInsideRing; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmyThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MonkeyKing_FurArmyThinker) == 0x18d8);
    };
};
