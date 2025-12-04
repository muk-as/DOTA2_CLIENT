#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_Orb_Of_Revelations : public source2sdk::client::C_DOTA_Item
        {
        public:
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x_            
            std::int32_t m_iProjectile; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Orb_Of_Revelations because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Orb_Of_Revelations) == 0x_);
    };
};
