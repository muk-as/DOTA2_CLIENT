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
        // Size: 0x1a60
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
            bool m_bInitialized; // 0x1910            
            bool m_bCreatureCanRespawn; // 0x1911            
            bool m_bUsesGestureBasedAttackAnimation; // 0x1912            
            bool m_bIsHybridFlyer; // 0x1913            
            bool m_bRequiresReachingEndPath; // 0x1914            
            bool m_bAggroOwnerOnDamage; // 0x1915            
            bool m_bReceivedAggroOnDamageOrder; // 0x1916            
            uint8_t _pad1917[0x1]; // 0x1917
            // m_vCreatureStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureStateData_t> m_vCreatureStates;
            char m_vCreatureStates[0x18]; // 0x1918            
            char* m_pszDefaultState; // 0x1930            
            char* m_pszCurrentState; // 0x1938            
            std::int32_t m_nHPGain; // 0x1940            
            std::int32_t m_nManaGain; // 0x1944            
            float m_flHPRegenGain; // 0x1948            
            float m_flManaRegenGain; // 0x194c            
            std::int32_t m_nDamageGain; // 0x1950            
            float m_flArmorGain; // 0x1954            
            float m_flMagicResistGain; // 0x1958            
            float m_flDisableResistGain; // 0x195c            
            float m_flAttackTimeGain; // 0x1960            
            std::int32_t m_nMoveSpeedGain; // 0x1964            
            std::int32_t m_nBountyGain; // 0x1968            
            std::int32_t m_nXPGain; // 0x196c            
            std::int32_t m_nPermanentDesire; // 0x1970            
            std::int32_t m_nCreatureDesire; // 0x1974            
            std::int32_t m_nCurrentCastBehavior; // 0x1978            
            std::int32_t m_nEconItemGroup; // 0x197c            
            bool m_bIsBuildingAggressive; // 0x1980            
            bool m_bIsHeroAggressive; // 0x1981            
            bool m_bDisableClumpingBehavior; // 0x1982            
            uint8_t _pad1983[0x1]; // 0x1983
            float m_flDisableResistance; // 0x1984            
            float m_flUltimateDisableResistance; // 0x1988            
            bool m_bHasOffensiveAbility; // 0x198c            
            uint8_t _pad198d[0x3]; // 0x198d
            // m_vOffensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vOffensiveAbilities;
            char m_vOffensiveAbilities[0x18]; // 0x1990            
            bool m_bHasDefensiveAbility; // 0x19a8            
            uint8_t _pad19a9[0x7]; // 0x19a9
            // m_vDefensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vDefensiveAbilities;
            char m_vDefensiveAbilities[0x18]; // 0x19b0            
            bool m_bHasEscapeAbility; // 0x19c8            
            uint8_t _pad19c9[0x7]; // 0x19c9
            // m_vEscapeAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vEscapeAbilities;
            char m_vEscapeAbilities[0x18]; // 0x19d0            
            source2sdk::server::CDOTABaseAbility* m_pLastUsedAbility; // 0x19e8            
            Vector m_vDesiredCastLocation; // 0x19f0            
            uint8_t _pad19fc[0x4]; // 0x19fc
            source2sdk::server::CDOTA_BaseNPC* m_pDesiredNPCTarget; // 0x1a00            
            source2sdk::server::CDOTA_BaseNPC* m_pEscortTarget; // 0x1a08            
            Vector m_vLastDamageSource; // 0x1a10            
            bool m_bIsChampion; // 0x1a1c            
            uint8_t _pad1a1d[0x3]; // 0x1a1d
            // m_vItemDropData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ItemDropData_t*> m_vItemDropData;
            char m_vItemDropData[0x18]; // 0x1a20            
            // m_vecAttachWearableItemDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::WearableData_t> m_vecAttachWearableItemDefs;
            char m_vecAttachWearableItemDefs[0x18]; // 0x1a38            
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1a50            
            // metadata: MNetworkEnable
            bool m_bIsCurrentlyChanneling; // 0x1a54            
            uint8_t _pad1a55[0x3]; // 0x1a55
            // metadata: MNetworkEnable
            float m_flChannelCycle; // 0x1a58            
            uint8_t _pad1a5c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creature because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creature) == 0x1a60);
    };
};
