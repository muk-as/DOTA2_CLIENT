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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Skywrath_Mage_Shield_Barrier : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nDamageAbsorbed; // 0x_            
            float damage_barrier_base; // 0x_            
            float damage_barrier_per_level; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_flExpirationTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_flExpirationTimes;
            char m_flExpirationTimes[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Skywrath_Mage_Shield_Barrier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Skywrath_Mage_Shield_Barrier) == 0x_);
    };
};
