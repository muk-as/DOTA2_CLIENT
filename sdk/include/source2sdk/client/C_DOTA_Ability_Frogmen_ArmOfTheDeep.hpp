#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Frogmen_ArmOfTheDeep : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x680            
            float duration; // 0x698            
            std::int32_t speed; // 0x69c            
            float damage; // 0x6a0            
            float range; // 0x6a4            
            std::int32_t projectile_width; // 0x6a8            
            float neutral_shared_cooldown; // 0x6ac            
            uint8_t _pad06b0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Frogmen_ArmOfTheDeep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Frogmen_ArmOfTheDeep) == 0x6c8);
    };
};
