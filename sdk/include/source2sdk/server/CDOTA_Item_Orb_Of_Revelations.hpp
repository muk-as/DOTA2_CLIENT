#pragma once
#include "source2sdk/server/CDOTA_Item.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x668
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Orb_Of_Revelations : public server::CDOTA_Item
    {
    public:
        server::CountdownTimer m_ViewerTimer; // 0x648        
        int32_t m_iProjectile; // 0x660        
        [[maybe_unused]] std::uint8_t pad_0x664[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Orb_Of_Revelations because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Orb_Of_Revelations) == 0x668);
};
