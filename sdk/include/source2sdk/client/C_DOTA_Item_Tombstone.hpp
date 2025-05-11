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
        // Size: 0x660
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_Tombstone : public source2sdk::client::C_DOTA_Item
        {
        public:
            float m_flTimer; // 0x650            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x654            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x658            
            uint8_t _pad065c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Tombstone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Tombstone) == 0x660);
    };
};
