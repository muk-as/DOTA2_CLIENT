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
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iStoredRuneType"
    #pragma pack(push, 1)
    class C_DOTA_Item_EmptyBottle : public client::C_DOTA_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnStoredRuneChanged"
        int32_t m_iStoredRuneType; // 0x678        
        entity2::GameTime_t m_fStoredRuneTime; // 0x67c        
        float rune_expire_time; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x684[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_EmptyBottle because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_EmptyBottle) == 0x688);
};
