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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_FurArmyThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDuration; // 0x17f8            
            source2sdk::entity2::GameTime_t m_fTimeThinkerCreated; // 0x17fc            
            // m_vTargetPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vTargetPositions;
            char m_vTargetPositions[0x18]; // 0x1800            
            Vector m_vInitialPos; // 0x1818            
            float first_radius; // 0x1824            
            std::int32_t num_first_soldiers; // 0x1828            
            float second_radius; // 0x182c            
            std::int32_t num_second_soldiers; // 0x1830            
            source2sdk::client::ParticleIndex_t m_nRingFXIndex; // 0x1834            
            float final_radius; // 0x1838            
            float leadership_time_buffer; // 0x183c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmyThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MonkeyKing_FurArmyThinker) == 0x1840);
    };
};
