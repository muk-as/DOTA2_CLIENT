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
    #pragma pack(push, 1)
    class CDOTA_Item_Ward_Maker : public client::C_DOTA_Item
    {
    public:
        float sentry_refresh; // 0x6a0        
        int32_t max_sentry_charges; // 0x6a4        
        entity2::GameTime_t m_flLastThinkTime; // 0x6a8        
        float m_flTimeAccumulator; // 0x6ac        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Ward_Maker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Ward_Maker) == 0x6b0);
};
