#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x738
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_MeteorHammer : public source2sdk::client::C_DOTA_Item
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x720            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x724            
            Vector m_vecCastPosition; // 0x728            
            uint8_t _pad0734[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_MeteorHammer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_MeteorHammer) == 0x738);
    };
};
