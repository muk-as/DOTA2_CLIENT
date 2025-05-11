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
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Frogmen_CongregationOfTheDeep : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x5b8            
            float duration; // 0x5d0            
            std::int32_t speed; // 0x5d4            
            float damage; // 0x5d8            
            float range; // 0x5dc            
            std::int32_t projectile_count; // 0x5e0            
            std::int32_t projectile_width; // 0x5e4            
            float neutral_shared_cooldown; // 0x5e8            
            uint8_t _pad05ec[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Frogmen_CongregationOfTheDeep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Frogmen_CongregationOfTheDeep) == 0x5f8);
    };
};
