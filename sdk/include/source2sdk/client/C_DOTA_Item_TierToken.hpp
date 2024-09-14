#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x690
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "AbilityID_t m_vecChoices"
    #pragma pack(push, 1)
    class C_DOTA_Item_TierToken : public client::C_DOTA_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChoicesChanged"
        client::AbilityID_t m_vecChoices[6]; // 0x678        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_TierToken because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_TierToken) == 0x690);
};
