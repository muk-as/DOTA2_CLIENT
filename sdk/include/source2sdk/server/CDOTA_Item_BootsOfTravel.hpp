#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_BootsOfTravel : public source2sdk::server::CDOTA_Item
        {
        public:
            float m_flTeleportTimeOverride; // 0x690            
            bool m_bPendingSellExcessScrolls; // 0x694            
            bool m_bQueueSellScrolls; // 0x695            
            uint8_t _pad0696[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_BootsOfTravel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_BootsOfTravel) == 0x698);
    };
};
