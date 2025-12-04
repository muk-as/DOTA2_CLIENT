#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Modifier_MonkeyKing_FurArmyThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDuration; // 0x_            
            source2sdk::entity2::GameTime_t m_fTimeThinkerCreated; // 0x_            
            // m_vTargetPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vTargetPositions;
            char m_vTargetPositions[0x_]; // 0x_            
            Vector m_vInitialPos; // 0x_            
            float first_radius; // 0x_            
            std::int32_t num_first_soldiers; // 0x_            
            float second_radius; // 0x_            
            std::int32_t num_second_soldiers; // 0x_            
            source2sdk::client::ParticleIndex_t m_nRingFXIndex; // 0x_            
            float final_radius; // 0x_            
            float leadership_time_buffer; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmyThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MonkeyKing_FurArmyThinker) == 0x_);
    };
};
