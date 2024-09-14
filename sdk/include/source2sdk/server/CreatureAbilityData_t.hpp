#pragma once
#include "source2sdk/server/CreatureAbilityType.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x34
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CreatureAbilityData_t
    {
    public:
        // hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hAbility;
        char hAbility[0x4]; // 0x0        
        bool bIsDamage; // 0x4        
        bool bIsDebuff; // 0x5        
        bool bIsStun; // 0x6        
        bool bIsAOE; // 0x7        
        bool bIsLinear; // 0x8        
        bool bUseOnCreeps; // 0x9        
        bool bIsHeal; // 0xa        
        bool bIsBuff; // 0xb        
        bool bUseSelfishly; // 0xc        
        bool bCanHelpOthersEscape; // 0xd        
        bool bUseOnTrees; // 0xe        
        bool bUseOnStrongestAlly; // 0xf        
        int32_t nUseAtHealthPercent; // 0x10        
        int32_t nRadius; // 0x14        
        int32_t nMinimumTargets; // 0x18        
        int32_t nMaximumTargets; // 0x1c        
        int32_t nMinimumHP; // 0x20        
        int32_t nMinimumRange; // 0x24        
        float flInitialCooldownMin; // 0x28        
        float flInitialCooldownMax; // 0x2c        
        server::CreatureAbilityType nAbilityType; // 0x30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CreatureAbilityData_t, hAbility) == 0x0);
    static_assert(offsetof(CreatureAbilityData_t, bIsDamage) == 0x4);
    static_assert(offsetof(CreatureAbilityData_t, bIsDebuff) == 0x5);
    static_assert(offsetof(CreatureAbilityData_t, bIsStun) == 0x6);
    static_assert(offsetof(CreatureAbilityData_t, bIsAOE) == 0x7);
    static_assert(offsetof(CreatureAbilityData_t, bIsLinear) == 0x8);
    static_assert(offsetof(CreatureAbilityData_t, bUseOnCreeps) == 0x9);
    static_assert(offsetof(CreatureAbilityData_t, bIsHeal) == 0xa);
    static_assert(offsetof(CreatureAbilityData_t, bIsBuff) == 0xb);
    static_assert(offsetof(CreatureAbilityData_t, bUseSelfishly) == 0xc);
    static_assert(offsetof(CreatureAbilityData_t, bCanHelpOthersEscape) == 0xd);
    static_assert(offsetof(CreatureAbilityData_t, bUseOnTrees) == 0xe);
    static_assert(offsetof(CreatureAbilityData_t, bUseOnStrongestAlly) == 0xf);
    static_assert(offsetof(CreatureAbilityData_t, nUseAtHealthPercent) == 0x10);
    static_assert(offsetof(CreatureAbilityData_t, nRadius) == 0x14);
    static_assert(offsetof(CreatureAbilityData_t, nMinimumTargets) == 0x18);
    static_assert(offsetof(CreatureAbilityData_t, nMaximumTargets) == 0x1c);
    static_assert(offsetof(CreatureAbilityData_t, nMinimumHP) == 0x20);
    static_assert(offsetof(CreatureAbilityData_t, nMinimumRange) == 0x24);
    static_assert(offsetof(CreatureAbilityData_t, flInitialCooldownMin) == 0x28);
    static_assert(offsetof(CreatureAbilityData_t, flInitialCooldownMax) == 0x2c);
    static_assert(offsetof(CreatureAbilityData_t, nAbilityType) == 0x30);
    
    static_assert(sizeof(CreatureAbilityData_t) == 0x34);
};
