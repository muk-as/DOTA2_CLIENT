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
        // Size: 0x690
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Huskar_Berserkers_Blood : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool activatable; // 0x680            
            uint8_t _pad0681[0x3]; // 0x681
            std::int32_t m_nHealthCost; // 0x684            
            std::int32_t m_nDebuffCount; // 0x688            
            uint8_t _pad068c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Huskar_Berserkers_Blood because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Huskar_Berserkers_Blood) == 0x690);
    };
};
