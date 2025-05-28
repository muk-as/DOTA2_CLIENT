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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Furion_SpiritOfTheForest : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_tree_pct; // 0x1888            
            float radius; // 0x188c            
            float multiplier; // 0x1890            
            float radius_treant; // 0x1894            
            std::int32_t m_nTreeAmount; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Furion_SpiritOfTheForest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Furion_SpiritOfTheForest) == 0x18a0);
    };
};
