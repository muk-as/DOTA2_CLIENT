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
    // Size: 0x6b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Item_GemOfTrueSight : public client::C_DOTA_Item
    {
    public:
        int32_t m_iTempViewer; // 0x6a0        
        int32_t m_iTeam; // 0x6a4        
        int32_t m_nFXIndex; // 0x6a8        
        [[maybe_unused]] std::uint8_t pad_0x6ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_GemOfTrueSight because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_GemOfTrueSight) == 0x6b0);
};
