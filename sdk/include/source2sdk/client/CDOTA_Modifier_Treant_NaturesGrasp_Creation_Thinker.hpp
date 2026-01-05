#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creation_interval; // 0x_            
            float vines_duration; // 0x_            
            std::int32_t vine_spawn_interval; // 0x_            
            Vector m_vInitialLoc; // 0x_            
            Vector m_vFinalLoc; // 0x_            
            std::int32_t m_iVineCount; // 0x_            
            std::int32_t m_iVinesIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker) == 0x_);
    };
};
