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
        class CDOTA_Item_Safety_Bubble : public source2sdk::server::CDOTA_Item
        {
        public:
            bool m_bUnequipped; // 0x690            
            uint8_t _pad0691[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Safety_Bubble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Safety_Bubble) == 0x698);
    };
};
