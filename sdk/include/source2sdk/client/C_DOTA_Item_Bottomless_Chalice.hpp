#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // 
    // static metadata: MNetworkVarNames "int m_iStoredRuneType"
    #pragma pack(push, 1)
    class C_DOTA_Item_Bottomless_Chalice : public client::C_DOTA_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChaliceStoredRuneChanged"
        int32_t m_iStoredRuneType; // 0x6a0        
        entity2::GameTime_t m_fStoredRuneTime; // 0x6a4        
        float stored_rune_duration; // 0x6a8        
        [[maybe_unused]] std::uint8_t pad_0x6ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_Bottomless_Chalice because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_Bottomless_Chalice) == 0x6b0);
};
