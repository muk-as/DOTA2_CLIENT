#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_Item_UltimateScepter_Consumed.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_UltimateScepter_Consumed_Alchemist : public source2sdk::server::CDOTA_Modifier_Item_UltimateScepter_Consumed
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1888            
            std::int32_t bonus_all_stats; // 0x188c            
            std::int32_t bonus_health; // 0x1890            
            std::int32_t bonus_mana; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_UltimateScepter_Consumed_Alchemist because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_UltimateScepter_Consumed_Alchemist) == 0x1898);
    };
};
