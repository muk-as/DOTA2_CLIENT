#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"
#include "source2sdk/server/CreatureAbilityData_t.hpp"
#include "source2sdk/server/CreatureStateData_t.hpp"
#include "source2sdk/server/WearableData_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct ItemDropData_t;
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
        // Size: 0x1a38
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bIsCurrentlyChanneling"
        // static metadata: MNetworkVarNames "float m_flChannelCycle"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Creature : public source2sdk::server::CDOTA_BaseNPC_Creep
        {
        public:
            bool m_bInitialized; // 0x18e8            
            bool m_bCreatureCanRespawn; // 0x18e9            
            bool m_bUsesGestureBasedAttackAnimation; // 0x18ea            
            bool m_bIsHybridFlyer; // 0x18eb            
            bool m_bRequiresReachingEndPath; // 0x18ec            
            bool m_bAggroOwnerOnDamage; // 0x18ed            
            bool m_bReceivedAggroOnDamageOrder; // 0x18ee            
            uint8_t _pad18ef[0x1]; // 0x18ef
            // m_vCreatureStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureStateData_t> m_vCreatureStates;
            char m_vCreatureStates[0x18]; // 0x18f0            
            char* m_pszDefaultState; // 0x1908            
            char* m_pszCurrentState; // 0x1910            
            std::int32_t m_nHPGain; // 0x1918            
            std::int32_t m_nManaGain; // 0x191c            
            float m_flHPRegenGain; // 0x1920            
            float m_flManaRegenGain; // 0x1924            
            std::int32_t m_nDamageGain; // 0x1928            
            float m_flArmorGain; // 0x192c            
            float m_flMagicResistGain; // 0x1930            
            float m_flDisableResistGain; // 0x1934            
            float m_flAttackTimeGain; // 0x1938            
            std::int32_t m_nMoveSpeedGain; // 0x193c            
            std::int32_t m_nBountyGain; // 0x1940            
            std::int32_t m_nXPGain; // 0x1944            
            std::int32_t m_nPermanentDesire; // 0x1948            
            std::int32_t m_nCreatureDesire; // 0x194c            
            std::int32_t m_nCurrentCastBehavior; // 0x1950            
            std::int32_t m_nEconItemGroup; // 0x1954            
            bool m_bIsBuildingAggressive; // 0x1958            
            bool m_bIsHeroAggressive; // 0x1959            
            bool m_bDisableClumpingBehavior; // 0x195a            
            uint8_t _pad195b[0x1]; // 0x195b
            float m_flDisableResistance; // 0x195c            
            float m_flUltimateDisableResistance; // 0x1960            
            bool m_bHasOffensiveAbility; // 0x1964            
            uint8_t _pad1965[0x3]; // 0x1965
            // m_vOffensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vOffensiveAbilities;
            char m_vOffensiveAbilities[0x18]; // 0x1968            
            bool m_bHasDefensiveAbility; // 0x1980            
            uint8_t _pad1981[0x7]; // 0x1981
            // m_vDefensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vDefensiveAbilities;
            char m_vDefensiveAbilities[0x18]; // 0x1988            
            bool m_bHasEscapeAbility; // 0x19a0            
            uint8_t _pad19a1[0x7]; // 0x19a1
            // m_vEscapeAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vEscapeAbilities;
            char m_vEscapeAbilities[0x18]; // 0x19a8            
            source2sdk::server::CDOTABaseAbility* m_pLastUsedAbility; // 0x19c0            
            Vector m_vDesiredCastLocation; // 0x19c8            
            uint8_t _pad19d4[0x4]; // 0x19d4
            source2sdk::server::CDOTA_BaseNPC* m_pDesiredNPCTarget; // 0x19d8            
            source2sdk::server::CDOTA_BaseNPC* m_pEscortTarget; // 0x19e0            
            Vector m_vLastDamageSource; // 0x19e8            
            bool m_bIsChampion; // 0x19f4            
            uint8_t _pad19f5[0x3]; // 0x19f5
            // m_vItemDropData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ItemDropData_t*> m_vItemDropData;
            char m_vItemDropData[0x18]; // 0x19f8            
            // m_vecAttachWearableItemDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::WearableData_t> m_vecAttachWearableItemDefs;
            char m_vecAttachWearableItemDefs[0x18]; // 0x1a10            
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1a28            
            // metadata: MNetworkEnable
            bool m_bIsCurrentlyChanneling; // 0x1a2c            
            uint8_t _pad1a2d[0x3]; // 0x1a2d
            // metadata: MNetworkEnable
            float m_flChannelCycle; // 0x1a30            
            uint8_t _pad1a34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creature because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creature) == 0x1a38);
    };
};
