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
        class CDOTA_Item_Trusty_Shovel : public source2sdk::client::C_DOTA_Item
        {
        public:
            Vector m_vChannelPos; // 0x720            
            bool m_bIsUnderwater; // 0x72c            
            uint8_t _pad072d[0x3]; // 0x72d
            source2sdk::client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x730            
            uint8_t _pad0734[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Trusty_Shovel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Item_Trusty_Shovel) == 0x738);
    };
};
