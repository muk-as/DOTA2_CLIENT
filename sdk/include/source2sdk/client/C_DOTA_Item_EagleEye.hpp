#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Item_EagleEye : public client::C_DOTA_Item
    {
    public:
        int32_t m_iTempViewer; // 0x678        
        int32_t m_iTeam; // 0x67c        
        int32_t m_nFXIndex; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x684[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_EagleEye because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_EagleEye) == 0x688);
};
