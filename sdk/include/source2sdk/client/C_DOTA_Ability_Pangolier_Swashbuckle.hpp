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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Pangolier_Swashbuckle : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float dash_speed; // 0x680            
            float start_radius; // 0x684            
            float end_radius; // 0x688            
            float range; // 0x68c            
            float damage; // 0x690            
            float attack_damage; // 0x694            
            std::int32_t procs_onhit_effects; // 0x698            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Pangolier_Swashbuckle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Pangolier_Swashbuckle) == 0x6a0);
    };
};
