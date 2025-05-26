#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Item.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x6b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_Orb_Of_Revelations : public source2sdk::server::CDOTA_Item
        {
        public:
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x690            
            std::int32_t m_iProjectile; // 0x6a8            
            uint8_t _pad06ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Orb_Of_Revelations because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Orb_Of_Revelations) == 0x6b0);
    };
};
