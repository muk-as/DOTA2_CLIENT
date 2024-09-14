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
    #pragma pack(push, 1)
    class CDOTA_Item_Ward_Maker : public client::C_DOTA_Item
    {
    public:
        float sentry_refresh; // 0x678        
        int32_t max_sentry_charges; // 0x67c        
        entity2::GameTime_t m_flLastThinkTime; // 0x680        
        float m_flTimeAccumulator; // 0x684        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Ward_Maker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Ward_Maker) == 0x688);
};
