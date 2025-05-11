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
        // Size: 0x19e0
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
            bool m_bInitialized; // 0x1890            
            bool m_bCreatureCanRespawn; // 0x1891            
            bool m_bUsesGestureBasedAttackAnimation; // 0x1892            
            bool m_bIsHybridFlyer; // 0x1893            
            bool m_bRequiresReachingEndPath; // 0x1894            
            bool m_bAggroOwnerOnDamage; // 0x1895            
            bool m_bReceivedAggroOnDamageOrder; // 0x1896            
            uint8_t _pad1897[0x1]; // 0x1897
            // m_vCreatureStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureStateData_t> m_vCreatureStates;
            char m_vCreatureStates[0x18]; // 0x1898            
            char* m_pszDefaultState; // 0x18b0            
            char* m_pszCurrentState; // 0x18b8            
            std::int32_t m_nHPGain; // 0x18c0            
            std::int32_t m_nManaGain; // 0x18c4            
            float m_flHPRegenGain; // 0x18c8            
            float m_flManaRegenGain; // 0x18cc            
            std::int32_t m_nDamageGain; // 0x18d0            
            float m_flArmorGain; // 0x18d4            
            float m_flMagicResistGain; // 0x18d8            
            float m_flDisableResistGain; // 0x18dc            
            float m_flAttackTimeGain; // 0x18e0            
            std::int32_t m_nMoveSpeedGain; // 0x18e4            
            std::int32_t m_nBountyGain; // 0x18e8            
            std::int32_t m_nXPGain; // 0x18ec            
            std::int32_t m_nPermanentDesire; // 0x18f0            
            std::int32_t m_nCreatureDesire; // 0x18f4            
            std::int32_t m_nCurrentCastBehavior; // 0x18f8            
            std::int32_t m_nEconItemGroup; // 0x18fc            
            bool m_bIsBuildingAggressive; // 0x1900            
            bool m_bIsHeroAggressive; // 0x1901            
            bool m_bDisableClumpingBehavior; // 0x1902            
            uint8_t _pad1903[0x1]; // 0x1903
            float m_flDisableResistance; // 0x1904            
            float m_flUltimateDisableResistance; // 0x1908            
            bool m_bHasOffensiveAbility; // 0x190c            
            uint8_t _pad190d[0x3]; // 0x190d
            // m_vOffensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vOffensiveAbilities;
            char m_vOffensiveAbilities[0x18]; // 0x1910            
            bool m_bHasDefensiveAbility; // 0x1928            
            uint8_t _pad1929[0x7]; // 0x1929
            // m_vDefensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vDefensiveAbilities;
            char m_vDefensiveAbilities[0x18]; // 0x1930            
            bool m_bHasEscapeAbility; // 0x1948            
            uint8_t _pad1949[0x7]; // 0x1949
            // m_vEscapeAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vEscapeAbilities;
            char m_vEscapeAbilities[0x18]; // 0x1950            
            source2sdk::server::CDOTABaseAbility* m_pLastUsedAbility; // 0x1968            
            Vector m_vDesiredCastLocation; // 0x1970            
            uint8_t _pad197c[0x4]; // 0x197c
            source2sdk::server::CDOTA_BaseNPC* m_pDesiredNPCTarget; // 0x1980            
            source2sdk::server::CDOTA_BaseNPC* m_pEscortTarget; // 0x1988            
            Vector m_vLastDamageSource; // 0x1990            
            bool m_bIsChampion; // 0x199c            
            uint8_t _pad199d[0x3]; // 0x199d
            // m_vItemDropData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ItemDropData_t*> m_vItemDropData;
            char m_vItemDropData[0x18]; // 0x19a0            
            // m_vecAttachWearableItemDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::WearableData_t> m_vecAttachWearableItemDefs;
            char m_vecAttachWearableItemDefs[0x18]; // 0x19b8            
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x19d0            
            // metadata: MNetworkEnable
            bool m_bIsCurrentlyChanneling; // 0x19d4            
            uint8_t _pad19d5[0x3]; // 0x19d5
            // metadata: MNetworkEnable
            float m_flChannelCycle; // 0x19d8            
            uint8_t _pad19dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creature because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creature) == 0x19e0);
    };
};
