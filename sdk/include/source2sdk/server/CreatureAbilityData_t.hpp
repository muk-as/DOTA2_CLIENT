#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CreatureAbilityType.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CreatureAbilityData_t
        {
        public:
            // hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hAbility;
            char hAbility[0x_]; // 0x_            
            bool bIsDamage; // 0x_            
            bool bIsDebuff; // 0x_            
            bool bIsStun; // 0x_            
            bool bIsAOE; // 0x_            
            bool bIsLinear; // 0x_            
            bool bUseOnCreeps; // 0x_            
            bool bIsHeal; // 0x_            
            bool bIsBuff; // 0x_            
            bool bUseSelfishly; // 0x_            
            bool bCanHelpOthersEscape; // 0x_            
            bool bUseOnTrees; // 0x_            
            bool bUseOnStrongestAlly; // 0x_            
            std::int32_t nUseAtHealthPercent; // 0x_            
            std::int32_t nRadius; // 0x_            
            std::int32_t nMinimumTargets; // 0x_            
            std::int32_t nMaximumTargets; // 0x_            
            std::int32_t nMinimumHP; // 0x_            
            std::int32_t nMinimumRange; // 0x_            
            float flInitialCooldownMin; // 0x_            
            float flInitialCooldownMax; // 0x_            
            source2sdk::server::CreatureAbilityType nAbilityType; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, hAbility) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bIsDamage) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bIsDebuff) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bIsStun) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bIsAOE) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bIsLinear) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bUseOnCreeps) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bIsHeal) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bIsBuff) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bUseSelfishly) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bCanHelpOthersEscape) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bUseOnTrees) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, bUseOnStrongestAlly) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, nUseAtHealthPercent) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, nRadius) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, nMinimumTargets) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, nMaximumTargets) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, nMinimumHP) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, nMinimumRange) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, flInitialCooldownMin) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, flInitialCooldownMax) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureAbilityData_t, nAbilityType) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CreatureAbilityData_t) == 0x_);
    };
};
