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
        // Size: 0x690
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_AetherialHalo : public source2sdk::server::CDOTA_Item
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x688            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x68c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_AetherialHalo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_AetherialHalo) == 0x690);
    };
};
