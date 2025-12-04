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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            bool m_bInitialized; // 0x_            
            bool m_bCreatureCanRespawn; // 0x_            
            bool m_bUsesGestureBasedAttackAnimation; // 0x_            
            bool m_bIsHybridFlyer; // 0x_            
            bool m_bRequiresReachingEndPath; // 0x_            
            bool m_bAggroOwnerOnDamage; // 0x_            
            bool m_bReceivedAggroOnDamageOrder; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vCreatureStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureStateData_t> m_vCreatureStates;
            char m_vCreatureStates[0x_]; // 0x_            
            char* m_pszDefaultState; // 0x_            
            char* m_pszCurrentState; // 0x_            
            std::int32_t m_nHPGain; // 0x_            
            std::int32_t m_nManaGain; // 0x_            
            float m_flHPRegenGain; // 0x_            
            float m_flManaRegenGain; // 0x_            
            std::int32_t m_nDamageGain; // 0x_            
            float m_flArmorGain; // 0x_            
            float m_flMagicResistGain; // 0x_            
            float m_flDisableResistGain; // 0x_            
            float m_flAttackTimeGain; // 0x_            
            std::int32_t m_nMoveSpeedGain; // 0x_            
            std::int32_t m_nBountyGain; // 0x_            
            std::int32_t m_nXPGain; // 0x_            
            std::int32_t m_nPermanentDesire; // 0x_            
            std::int32_t m_nCreatureDesire; // 0x_            
            std::int32_t m_nCurrentCastBehavior; // 0x_            
            std::int32_t m_nEconItemGroup; // 0x_            
            bool m_bIsBuildingAggressive; // 0x_            
            bool m_bIsHeroAggressive; // 0x_            
            bool m_bDisableClumpingBehavior; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDisableResistance; // 0x_            
            float m_flUltimateDisableResistance; // 0x_            
            bool m_bHasOffensiveAbility; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vOffensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vOffensiveAbilities;
            char m_vOffensiveAbilities[0x_]; // 0x_            
            bool m_bHasDefensiveAbility; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vDefensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vDefensiveAbilities;
            char m_vDefensiveAbilities[0x_]; // 0x_            
            bool m_bHasEscapeAbility; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vEscapeAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vEscapeAbilities;
            char m_vEscapeAbilities[0x_]; // 0x_            
            source2sdk::server::CDOTABaseAbility* m_pLastUsedAbility; // 0x_            
            Vector m_vDesiredCastLocation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CDOTA_BaseNPC* m_pDesiredNPCTarget; // 0x_            
            source2sdk::server::CDOTA_BaseNPC* m_pEscortTarget; // 0x_            
            Vector m_vLastDamageSource; // 0x_            
            bool m_bIsChampion; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vItemDropData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ItemDropData_t*> m_vItemDropData;
            char m_vItemDropData[0x_]; // 0x_            
            // m_vecAttachWearableItemDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::WearableData_t> m_vecAttachWearableItemDefs;
            char m_vecAttachWearableItemDefs[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsCurrentlyChanneling; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flChannelCycle; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creature because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creature) == 0x_);
    };
};
