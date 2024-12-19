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
    // Size: 0x19e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "bool m_bIsCurrentlyChanneling"
    // static metadata: MNetworkVarNames "float m_flChannelCycle"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Creature : public server::CDOTA_BaseNPC_Creep
    {
    public:
        bool m_bInitialized; // 0x1898        
        bool m_bCreatureCanRespawn; // 0x1899        
        bool m_bUsesGestureBasedAttackAnimation; // 0x189a        
        bool m_bIsHybridFlyer; // 0x189b        
        bool m_bRequiresReachingEndPath; // 0x189c        
        bool m_bAggroOwnerOnDamage; // 0x189d        
        bool m_bReceivedAggroOnDamageOrder; // 0x189e        
        [[maybe_unused]] std::uint8_t pad_0x189f[0x1]; // 0x189f
        // m_vCreatureStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CreatureStateData_t> m_vCreatureStates;
        char m_vCreatureStates[0x18]; // 0x18a0        
        char* m_pszDefaultState; // 0x18b8        
        char* m_pszCurrentState; // 0x18c0        
        int32_t m_nHPGain; // 0x18c8        
        int32_t m_nManaGain; // 0x18cc        
        float m_flHPRegenGain; // 0x18d0        
        float m_flManaRegenGain; // 0x18d4        
        int32_t m_nDamageGain; // 0x18d8        
        float m_flArmorGain; // 0x18dc        
        float m_flMagicResistGain; // 0x18e0        
        float m_flDisableResistGain; // 0x18e4        
        float m_flAttackTimeGain; // 0x18e8        
        int32_t m_nMoveSpeedGain; // 0x18ec        
        int32_t m_nBountyGain; // 0x18f0        
        int32_t m_nXPGain; // 0x18f4        
        int32_t m_nPermanentDesire; // 0x18f8        
        int32_t m_nCreatureDesire; // 0x18fc        
        int32_t m_nCurrentCastBehavior; // 0x1900        
        int32_t m_nEconItemGroup; // 0x1904        
        bool m_bIsBuildingAggressive; // 0x1908        
        bool m_bIsHeroAggressive; // 0x1909        
        bool m_bDisableClumpingBehavior; // 0x190a        
        [[maybe_unused]] std::uint8_t pad_0x190b[0x1]; // 0x190b
        float m_flDisableResistance; // 0x190c        
        float m_flUltimateDisableResistance; // 0x1910        
        bool m_bHasOffensiveAbility; // 0x1914        
        [[maybe_unused]] std::uint8_t pad_0x1915[0x3]; // 0x1915
        // m_vOffensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CreatureAbilityData_t> m_vOffensiveAbilities;
        char m_vOffensiveAbilities[0x18]; // 0x1918        
        bool m_bHasDefensiveAbility; // 0x1930        
        [[maybe_unused]] std::uint8_t pad_0x1931[0x7]; // 0x1931
        // m_vDefensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CreatureAbilityData_t> m_vDefensiveAbilities;
        char m_vDefensiveAbilities[0x18]; // 0x1938        
        bool m_bHasEscapeAbility; // 0x1950        
        [[maybe_unused]] std::uint8_t pad_0x1951[0x7]; // 0x1951
        // m_vEscapeAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CreatureAbilityData_t> m_vEscapeAbilities;
        char m_vEscapeAbilities[0x18]; // 0x1958        
        server::CDOTABaseAbility* m_pLastUsedAbility; // 0x1970        
        Vector m_vDesiredCastLocation; // 0x1978        
        [[maybe_unused]] std::uint8_t pad_0x1984[0x4]; // 0x1984
        server::CDOTA_BaseNPC* m_pDesiredNPCTarget; // 0x1988        
        server::CDOTA_BaseNPC* m_pEscortTarget; // 0x1990        
        Vector m_vLastDamageSource; // 0x1998        
        bool m_bIsChampion; // 0x19a4        
        [[maybe_unused]] std::uint8_t pad_0x19a5[0x3]; // 0x19a5
        // m_vItemDropData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::ItemDropData_t*> m_vItemDropData;
        char m_vItemDropData[0x18]; // 0x19a8        
        // m_vecAttachWearableItemDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::WearableData_t> m_vecAttachWearableItemDefs;
        char m_vecAttachWearableItemDefs[0x18]; // 0x19c0        
        entity2::GameTime_t m_flRespawnTime; // 0x19d8        
        // metadata: MNetworkEnable
        bool m_bIsCurrentlyChanneling; // 0x19dc        
        [[maybe_unused]] std::uint8_t pad_0x19dd[0x3]; // 0x19dd
        // metadata: MNetworkEnable
        float m_flChannelCycle; // 0x19e0        
        [[maybe_unused]] std::uint8_t pad_0x19e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Creature because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Creature) == 0x19e8);
};
