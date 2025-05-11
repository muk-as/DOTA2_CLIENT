#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_MeteorHammer : public source2sdk::server::CDOTA_Item
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x688            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x68c            
            Vector m_vecCastPosition; // 0x690            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_MeteorHammer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_MeteorHammer) == 0x6a0);
    };
};
