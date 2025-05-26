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
        // Size: 0x1a18
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
            bool m_bInitialized; // 0x18c8            
            bool m_bCreatureCanRespawn; // 0x18c9            
            bool m_bUsesGestureBasedAttackAnimation; // 0x18ca            
            bool m_bIsHybridFlyer; // 0x18cb            
            bool m_bRequiresReachingEndPath; // 0x18cc            
            bool m_bAggroOwnerOnDamage; // 0x18cd            
            bool m_bReceivedAggroOnDamageOrder; // 0x18ce            
            uint8_t _pad18cf[0x1]; // 0x18cf
            // m_vCreatureStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureStateData_t> m_vCreatureStates;
            char m_vCreatureStates[0x18]; // 0x18d0            
            char* m_pszDefaultState; // 0x18e8            
            char* m_pszCurrentState; // 0x18f0            
            std::int32_t m_nHPGain; // 0x18f8            
            std::int32_t m_nManaGain; // 0x18fc            
            float m_flHPRegenGain; // 0x1900            
            float m_flManaRegenGain; // 0x1904            
            std::int32_t m_nDamageGain; // 0x1908            
            float m_flArmorGain; // 0x190c            
            float m_flMagicResistGain; // 0x1910            
            float m_flDisableResistGain; // 0x1914            
            float m_flAttackTimeGain; // 0x1918            
            std::int32_t m_nMoveSpeedGain; // 0x191c            
            std::int32_t m_nBountyGain; // 0x1920            
            std::int32_t m_nXPGain; // 0x1924            
            std::int32_t m_nPermanentDesire; // 0x1928            
            std::int32_t m_nCreatureDesire; // 0x192c            
            std::int32_t m_nCurrentCastBehavior; // 0x1930            
            std::int32_t m_nEconItemGroup; // 0x1934            
            bool m_bIsBuildingAggressive; // 0x1938            
            bool m_bIsHeroAggressive; // 0x1939            
            bool m_bDisableClumpingBehavior; // 0x193a            
            uint8_t _pad193b[0x1]; // 0x193b
            float m_flDisableResistance; // 0x193c            
            float m_flUltimateDisableResistance; // 0x1940            
            bool m_bHasOffensiveAbility; // 0x1944            
            uint8_t _pad1945[0x3]; // 0x1945
            // m_vOffensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vOffensiveAbilities;
            char m_vOffensiveAbilities[0x18]; // 0x1948            
            bool m_bHasDefensiveAbility; // 0x1960            
            uint8_t _pad1961[0x7]; // 0x1961
            // m_vDefensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vDefensiveAbilities;
            char m_vDefensiveAbilities[0x18]; // 0x1968            
            bool m_bHasEscapeAbility; // 0x1980            
            uint8_t _pad1981[0x7]; // 0x1981
            // m_vEscapeAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vEscapeAbilities;
            char m_vEscapeAbilities[0x18]; // 0x1988            
            source2sdk::server::CDOTABaseAbility* m_pLastUsedAbility; // 0x19a0            
            Vector m_vDesiredCastLocation; // 0x19a8            
            uint8_t _pad19b4[0x4]; // 0x19b4
            source2sdk::server::CDOTA_BaseNPC* m_pDesiredNPCTarget; // 0x19b8            
            source2sdk::server::CDOTA_BaseNPC* m_pEscortTarget; // 0x19c0            
            Vector m_vLastDamageSource; // 0x19c8            
            bool m_bIsChampion; // 0x19d4            
            uint8_t _pad19d5[0x3]; // 0x19d5
            // m_vItemDropData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ItemDropData_t*> m_vItemDropData;
            char m_vItemDropData[0x18]; // 0x19d8            
            // m_vecAttachWearableItemDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::WearableData_t> m_vecAttachWearableItemDefs;
            char m_vecAttachWearableItemDefs[0x18]; // 0x19f0            
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1a08            
            // metadata: MNetworkEnable
            bool m_bIsCurrentlyChanneling; // 0x1a0c            
            uint8_t _pad1a0d[0x3]; // 0x1a0d
            // metadata: MNetworkEnable
            float m_flChannelCycle; // 0x1a10            
            uint8_t _pad1a14[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creature because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creature) == 0x1a18);
    };
};
