#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"
#include "source2sdk/server/CreatureAbilityData_t.hpp"
#include "source2sdk/server/CreatureStateData_t.hpp"
#include "source2sdk/server/WearableData_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    struct ItemDropData_t;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1990
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsCurrentlyChanneling"
    // static metadata: MNetworkVarNames "float m_flChannelCycle"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Creature : public server::CDOTA_BaseNPC_Creep
    {
    public:
        bool m_bInitialized; // 0x1840        
        bool m_bCreatureCanRespawn; // 0x1841        
        bool m_bUsesGestureBasedAttackAnimation; // 0x1842        
        bool m_bIsHybridFlyer; // 0x1843        
        bool m_bRequiresReachingEndPath; // 0x1844        
        bool m_bAggroOwnerOnDamage; // 0x1845        
        bool m_bReceivedAggroOnDamageOrder; // 0x1846        
        [[maybe_unused]] std::uint8_t pad_0x1847[0x1]; // 0x1847
        // m_vCreatureStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CreatureStateData_t> m_vCreatureStates;
        char m_vCreatureStates[0x18]; // 0x1848        
        char* m_pszDefaultState; // 0x1860        
        char* m_pszCurrentState; // 0x1868        
        int32_t m_nHPGain; // 0x1870        
        int32_t m_nManaGain; // 0x1874        
        float m_flHPRegenGain; // 0x1878        
        float m_flManaRegenGain; // 0x187c        
        int32_t m_nDamageGain; // 0x1880        
        float m_flArmorGain; // 0x1884        
        float m_flMagicResistGain; // 0x1888        
        float m_flDisableResistGain; // 0x188c        
        float m_flAttackTimeGain; // 0x1890        
        int32_t m_nMoveSpeedGain; // 0x1894        
        int32_t m_nBountyGain; // 0x1898        
        int32_t m_nXPGain; // 0x189c        
        int32_t m_nPermanentDesire; // 0x18a0        
        int32_t m_nCreatureDesire; // 0x18a4        
        int32_t m_nCurrentCastBehavior; // 0x18a8        
        int32_t m_nEconItemGroup; // 0x18ac        
        bool m_bIsBuildingAggressive; // 0x18b0        
        bool m_bIsHeroAggressive; // 0x18b1        
        bool m_bDisableClumpingBehavior; // 0x18b2        
        [[maybe_unused]] std::uint8_t pad_0x18b3[0x1]; // 0x18b3
        float m_flDisableResistance; // 0x18b4        
        float m_flUltimateDisableResistance; // 0x18b8        
        bool m_bHasOffensiveAbility; // 0x18bc        
        [[maybe_unused]] std::uint8_t pad_0x18bd[0x3]; // 0x18bd
        // m_vOffensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CreatureAbilityData_t> m_vOffensiveAbilities;
        char m_vOffensiveAbilities[0x18]; // 0x18c0        
        bool m_bHasDefensiveAbility; // 0x18d8        
        [[maybe_unused]] std::uint8_t pad_0x18d9[0x7]; // 0x18d9
        // m_vDefensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CreatureAbilityData_t> m_vDefensiveAbilities;
        char m_vDefensiveAbilities[0x18]; // 0x18e0        
        bool m_bHasEscapeAbility; // 0x18f8        
        [[maybe_unused]] std::uint8_t pad_0x18f9[0x7]; // 0x18f9
        // m_vEscapeAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CreatureAbilityData_t> m_vEscapeAbilities;
        char m_vEscapeAbilities[0x18]; // 0x1900        
        server::CDOTABaseAbility* m_pLastUsedAbility; // 0x1918        
        Vector m_vDesiredCastLocation; // 0x1920        
        [[maybe_unused]] std::uint8_t pad_0x192c[0x4]; // 0x192c
        server::CDOTA_BaseNPC* m_pDesiredNPCTarget; // 0x1930        
        server::CDOTA_BaseNPC* m_pEscortTarget; // 0x1938        
        Vector m_vLastDamageSource; // 0x1940        
        bool m_bIsChampion; // 0x194c        
        [[maybe_unused]] std::uint8_t pad_0x194d[0x3]; // 0x194d
        // m_vItemDropData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::ItemDropData_t*> m_vItemDropData;
        char m_vItemDropData[0x18]; // 0x1950        
        // m_vecAttachWearableItemDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::WearableData_t> m_vecAttachWearableItemDefs;
        char m_vecAttachWearableItemDefs[0x18]; // 0x1968        
        entity2::GameTime_t m_flRespawnTime; // 0x1980        
        // metadata: MNetworkEnable
        bool m_bIsCurrentlyChanneling; // 0x1984        
        [[maybe_unused]] std::uint8_t pad_0x1985[0x3]; // 0x1985
        // metadata: MNetworkEnable
        float m_flChannelCycle; // 0x1988        
        [[maybe_unused]] std::uint8_t pad_0x198c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Creature because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Creature) == 0x1990);
};
