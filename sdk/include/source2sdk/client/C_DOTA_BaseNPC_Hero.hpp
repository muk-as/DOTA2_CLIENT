#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bDisableWearables"
        // static metadata: MNetworkVarNames "int m_iCurrentXP"
        // static metadata: MNetworkVarNames "int m_iAbilityPoints"
        // static metadata: MNetworkVarNames "int m_iTotalAbilityPoints"
        // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
        // static metadata: MNetworkVarNames "float m_flRespawnTimePenalty"
        // static metadata: MNetworkVarNames "float m_flStrength"
        // static metadata: MNetworkVarNames "float m_flAgility"
        // static metadata: MNetworkVarNames "float m_flIntellect"
        // static metadata: MNetworkVarNames "float m_flStrengthTotal"
        // static metadata: MNetworkVarNames "float m_flAgilityTotal"
        // static metadata: MNetworkVarNames "float m_flIntellectTotal"
        // static metadata: MNetworkVarNames "EHANDLE m_hFacetAbilities"
        // static metadata: MNetworkVarNames "int m_vecHiddenLoadoutSlots"
        // static metadata: MNetworkVarNames "int m_iRecentDamage"
        // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerID"
        // static metadata: MNetworkVarNames "HeroFacetKey_t m_iHeroFacetKey"
        // static metadata: MNetworkVarNames "PlayerID_t m_iEconSpecifyingPlayerID"
        // static metadata: MNetworkVarNames "CHandle<C_DOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel"
        // static metadata: MNetworkVarNames "bool m_bReincarnating"
        // static metadata: MNetworkVarNames "bool m_bCustomKillEffect"
        // static metadata: MNetworkVarNames "GameTime_t m_flSpawnedAt"
        // static metadata: MNetworkVarNames "bool m_bScriptDisableRespawns"
        // static metadata: MNetworkVarNames "int m_iPrimaryAttribute"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDispellTime"
        // static metadata: MNetworkIncludeByName "m_flDeathTime"
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Hero : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bDisableWearables; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentXP; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityPointsChanged"
            std::int32_t m_iAbilityPoints; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTotalAbilityPoints; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flRespawnTimePenalty; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flStrength; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flAgility; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flIntellect; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flStrengthTotal; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flAgilityTotal; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flIntellectTotal; // 0x_            
            // metadata: MNetworkEnable
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHiddenLoadoutSlotsChanged"
            // m_vecHiddenLoadoutSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_vecHiddenLoadoutSlots;
            char m_vecHiddenLoadoutSlots[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRecentDamage; // 0x_            
            float m_fPainFactor; // 0x_            
            float m_fTargetPainFactor; // 0x_            
            bool m_bLifeState; // 0x_            
            bool m_bFirstSpawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXStunIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXSilenceIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXDeathIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_iHeroFacetKey; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iEconSpecifyingPlayerID; // 0x_            
            // metadata: MNetworkEnable
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bReincarnating; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomKillEffect; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x_            
            // metadata: MNetworkEnable
            bool m_bScriptDisableRespawns; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_iPrimaryAttribute; // 0x_            
            std::int32_t m_nLastDrawnHealth; // 0x_            
            float m_flHurtAmount; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastHurtTime; // 0x_            
            float m_flHurtDecayRate; // 0x_            
            float m_flHealAmount; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastHealTime; // 0x_            
            float m_flHealDecayRate; // 0x_            
            bool m_bIsFirstTimeHeal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLastDispellTimeChanged"
            source2sdk::entity2::GameTime_t m_flLastDispellTime; // 0x_            
            float m_flDispellAnimationAmount; // 0x_            
            float m_flDeathAnimationAmount; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastDeathTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastTreeShakeTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CountdownTimer m_CenterOnHeroCooldownTimer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_CombinedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_CombinedModels[4];
            char m_CombinedModels[0x_]; // 0x_            
            std::int32_t m_nCurrentCombinedModelIndex; // 0x_            
            std::int32_t m_nPendingCombinedModelIndex; // 0x_            
            source2sdk::client::HeroID_t m_iHeroID; // 0x_            
            float m_flCheckLegacyItemsAt; // 0x_            
            bool m_bDisplayAdditionalHeroes; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_CombinedParticleModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_CombinedParticleModels[4];
            char m_CombinedParticleModels[0x_]; // 0x_            
            // m_vecAttachedParticleIndeces has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecAttachedParticleIndeces;
            char m_vecAttachedParticleIndeces[0x_]; // 0x_            
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hPets;
            char m_hPets[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x_            
            std::int32_t m_nKillStreakFXTier; // 0x_            
            // start of bitfield block
            uint16_t m_bBuybackDisabled: 1;
            uint16_t m_bWasFrozen: 1;
            uint16_t m_bUpdateClientsideWearables: 1;
            uint16_t m_bForceBuildCombinedModel: 1;
            uint16_t m_bRecombineForMaterialsOnly: 1;
            uint16_t m_bBuildingCombinedModel: 1;
            uint16_t m_bInReloadEvent: 1;
            uint16_t m_bStoreOldVisibility: 1;
            uint16_t m_bResetVisibility: 1;
            uint16_t m_bStoredVisibility: 1;
            // end of bitfield block// 10 bits
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Hero because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Hero) == 0x_);
    };
};
