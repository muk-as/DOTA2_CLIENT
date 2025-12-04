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
        class CDOTA_Modifier_Royale_With_Cheese : public source2sdk::client::CDOTA_Buff
        {
        public:
            float shield; // 0x_            
            float regen; // 0x_            
            float idle; // 0x_            
            std::int32_t m_nDamageAbsorbed; // 0x_            
            source2sdk::entity2::GameTime_t m_timeLastTick; // 0x_            
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x_            
            source2sdk::client::ParticleIndex_t nFXIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Royale_With_Cheese because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Royale_With_Cheese) == 0x_);
    };
};
