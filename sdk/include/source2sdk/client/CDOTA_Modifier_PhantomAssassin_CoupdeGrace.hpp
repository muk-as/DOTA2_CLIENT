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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PhantomAssassin_CoupdeGrace : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t crit_bonus; // 0x1878            
            std::int32_t crit_chance; // 0x187c            
            std::int32_t attacks_to_proc; // 0x1880            
            std::int32_t attacks_to_proc_creeps; // 0x1884            
            std::int32_t dagger_crit_chance; // 0x1888            
            std::int32_t m_iCritRecord; // 0x188c            
            float duration; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_CoupdeGrace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PhantomAssassin_CoupdeGrace) == 0x1898);
    };
};
