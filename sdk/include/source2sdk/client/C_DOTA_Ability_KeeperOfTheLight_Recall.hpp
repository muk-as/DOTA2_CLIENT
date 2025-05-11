#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_KeeperOfTheLight_Recall : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bIsAltCastState; // 0x5b0            
            uint8_t _pad05b1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_KeeperOfTheLight_Recall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_KeeperOfTheLight_Recall) == 0x5b8);
    };
};
