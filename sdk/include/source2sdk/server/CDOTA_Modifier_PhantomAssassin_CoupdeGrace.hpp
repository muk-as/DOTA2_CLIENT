#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        class CDOTA_Modifier_PhantomAssassin_CoupdeGrace : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t crit_bonus; // 0x_            
            std::int32_t crit_chance; // 0x_            
            std::int32_t attacks_to_proc; // 0x_            
            std::int32_t attacks_to_proc_creeps; // 0x_            
            std::int32_t dagger_crit_chance; // 0x_            
            std::int32_t m_iCritRecord; // 0x_            
            float duration; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_CoupdeGrace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PhantomAssassin_CoupdeGrace) == 0x_);
    };
};
