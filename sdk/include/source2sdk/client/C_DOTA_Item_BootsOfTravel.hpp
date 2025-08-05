#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"

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
        // Size: 0x730
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_BootsOfTravel : public source2sdk::client::C_DOTA_Item
        {
        public:
            float m_flTeleportTimeOverride; // 0x728            
            bool m_bPendingSellExcessScrolls; // 0x72c            
            bool m_bQueueSellScrolls; // 0x72d            
            uint8_t _pad072e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_BootsOfTravel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_BootsOfTravel) == 0x730);
    };
};
