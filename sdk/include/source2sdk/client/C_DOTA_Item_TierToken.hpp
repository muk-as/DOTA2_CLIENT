#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/C_DOTA_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x738
        // Has VTable
        // Is Abstract
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "AbilityID_t m_vecChoices"
        #pragma pack(push, 1)
        class C_DOTA_Item_TierToken : public source2sdk::client::C_DOTA_Item
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnChoicesChanged"
            source2sdk::client::AbilityID_t m_vecChoices[5]; // 0x720            
            uint8_t _pad0734[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_TierToken because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_TierToken) == 0x738);
    };
};
