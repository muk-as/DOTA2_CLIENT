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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x740
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_Orb_Of_Revelations : public source2sdk::client::C_DOTA_Item
        {
        public:
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x720            
            std::int32_t m_iProjectile; // 0x738            
            uint8_t _pad073c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Orb_Of_Revelations because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Orb_Of_Revelations) == 0x740);
    };
};
