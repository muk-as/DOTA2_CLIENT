#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Frogmen_TendrilsOfTheDeep : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x5c0            
            float duration; // 0x5d8            
            std::int32_t speed; // 0x5dc            
            float damage; // 0x5e0            
            float range; // 0x5e4            
            float yaw_offset; // 0x5e8            
            std::int32_t projectile_width; // 0x5ec            
            float neutral_shared_cooldown; // 0x5f0            
            uint8_t _pad05f4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Frogmen_TendrilsOfTheDeep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Frogmen_TendrilsOfTheDeep) == 0x608);
    };
};
