#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Skywrath_Mage_Shield_Barrier : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nDamageAbsorbed; // 0x1878            
            float damage_barrier_base; // 0x187c            
            float damage_barrier_per_level; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            // m_flExpirationTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_flExpirationTimes;
            char m_flExpirationTimes[0x18]; // 0x1888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Skywrath_Mage_Shield_Barrier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Skywrath_Mage_Shield_Barrier) == 0x18a0);
    };
};
