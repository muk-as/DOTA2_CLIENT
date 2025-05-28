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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_EMP_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t drag_speed; // 0x1888            
            float aura_origin_x; // 0x188c            
            float aura_origin_y; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1894            
            Vector m_vCenter; // 0x1898            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_EMP_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Invoker_EMP_Pull) == 0x18a8);
    };
};
