#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Ward_Maker : public server::CDOTA_Item
    {
    public:
        float sentry_refresh; // 0x648        
        int32_t max_sentry_charges; // 0x64c        
        entity2::GameTime_t m_flLastThinkTime; // 0x650        
        float m_flTimeAccumulator; // 0x654        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Ward_Maker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Ward_Maker) == 0x658);
};
