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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_iRiverPaintColor"
        #pragma pack(push, 1)
        class CDOTA_Item_RiverPainter : public source2sdk::server::CDOTA_Item
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iRiverPaintColor; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_RiverPainter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_RiverPainter) == 0x_);
    };
};
