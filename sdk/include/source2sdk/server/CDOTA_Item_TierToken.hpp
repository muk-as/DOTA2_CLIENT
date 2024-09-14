#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x660
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "AbilityID_t m_vecChoices"
    #pragma pack(push, 1)
    class CDOTA_Item_TierToken : public server::CDOTA_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChoicesChanged"
        client::AbilityID_t m_vecChoices[6]; // 0x648        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_TierToken because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_TierToken) == 0x660);
};
