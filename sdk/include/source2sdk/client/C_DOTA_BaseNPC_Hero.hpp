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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1db0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
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
        // static metadata: MNetworkVarNames "int m_iRecentDamage"
        // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerID"
        // static metadata: MNetworkVarNames "HeroFacetKey_t m_iHeroFacetKey"
        // static metadata: MNetworkVarNames "CHandle<C_DOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel"
        // static metadata: MNetworkVarNames "bool m_bReincarnating"
        // static metadata: MNetworkVarNames "bool m_bCustomKillEffect"
        // static metadata: MNetworkVarNames "GameTime_t m_flSpawnedAt"
        // static metadata: MNetworkVarNames "bool m_bScriptDisableRespawns"
        // static metadata: MNetworkVarNames "int m_iPrimaryAttribute"
        // static metadata: MNetworkIncludeByName "m_flDeathTime"
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Hero : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            uint8_t _pad1a18[0x8]; // 0x1a18
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentXP; // 0x1a20            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityPointsChanged"
            std::int32_t m_iAbilityPoints; // 0x1a24            
            // metadata: MNetworkEnable
            std::int32_t m_iTotalAbilityPoints; // 0x1a28            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1a2c            
            // metadata: MNetworkEnable
            float m_flRespawnTimePenalty; // 0x1a30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flStrength; // 0x1a34            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flAgility; // 0x1a38            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flIntellect; // 0x1a3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flStrengthTotal; // 0x1a40            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flAgilityTotal; // 0x1a44            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBaseStatChanged"
            float m_flIntellectTotal; // 0x1a48            
            uint8_t _pad1a4c[0x4]; // 0x1a4c
            // metadata: MNetworkEnable
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x18]; // 0x1a50            
            // metadata: MNetworkEnable
            std::int32_t m_iRecentDamage; // 0x1a68            
            float m_fPainFactor; // 0x1a6c            
            float m_fTargetPainFactor; // 0x1a70            
            bool m_bLifeState; // 0x1a74            
            bool m_bFirstSpawn; // 0x1a75            
            uint8_t _pad1a76[0x2]; // 0x1a76
            source2sdk::client::ParticleIndex_t m_nFXStunIndex; // 0x1a78            
            source2sdk::client::ParticleIndex_t m_nFXSilenceIndex; // 0x1a7c            
            source2sdk::client::ParticleIndex_t m_nFXDeathIndex; // 0x1a80            
            uint8_t _pad1a84[0x24]; // 0x1a84
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x1aa8            
            uint8_t _pad1aac[0x4]; // 0x1aac
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_iHeroFacetKey; // 0x1ab0            
            // metadata: MNetworkEnable
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x4]; // 0x1ab8            
            // metadata: MNetworkEnable
            bool m_bReincarnating; // 0x1abc            
            // metadata: MNetworkEnable
            bool m_bCustomKillEffect; // 0x1abd            
            uint8_t _pad1abe[0x2]; // 0x1abe
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x1ac0            
            // metadata: MNetworkEnable
            bool m_bScriptDisableRespawns; // 0x1ac4            
            uint8_t _pad1ac5[0x3]; // 0x1ac5
            // metadata: MNetworkEnable
            std::int32_t m_iPrimaryAttribute; // 0x1ac8            
            std::int32_t m_nLastDrawnHealth; // 0x1acc            
            float m_flHurtAmount; // 0x1ad0            
            source2sdk::entity2::GameTime_t m_flLastHurtTime; // 0x1ad4            
            float m_flHurtDecayRate; // 0x1ad8            
            float m_flHealAmount; // 0x1adc            
            source2sdk::entity2::GameTime_t m_flLastHealTime; // 0x1ae0            
            float m_flHealDecayRate; // 0x1ae4            
            bool m_bIsFirstTimeHeal; // 0x1ae8            
            uint8_t _pad1ae9[0x3]; // 0x1ae9
            source2sdk::entity2::GameTime_t m_flLastTreeShakeTime; // 0x1aec            
            source2sdk::client::CountdownTimer m_CenterOnHeroCooldownTimer; // 0x1af0            
            uint8_t _pad1b08[0x208]; // 0x1b08
            // m_CombinedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_CombinedModels[4];
            char m_CombinedModels[0x20]; // 0x1d10            
            std::int32_t m_nCurrentCombinedModelIndex; // 0x1d30            
            std::int32_t m_nPendingCombinedModelIndex; // 0x1d34            
            source2sdk::client::HeroID_t m_iHeroID; // 0x1d38            
            float m_flCheckLegacyItemsAt; // 0x1d3c            
            bool m_bDisplayAdditionalHeroes; // 0x1d40            
            uint8_t _pad1d41[0xf]; // 0x1d41
            // m_CombinedParticleModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_CombinedParticleModels[4];
            char m_CombinedParticleModels[0x20]; // 0x1d50            
            // m_vecAttachedParticleIndeces has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecAttachedParticleIndeces;
            char m_vecAttachedParticleIndeces[0x18]; // 0x1d70            
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hPets;
            char m_hPets[0x18]; // 0x1d88            
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x1da0            
            std::int32_t m_nKillStreakFXTier; // 0x1da4            
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
            uint8_t _pad1daa[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Hero because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Hero) == 0x1db0);
    };
};
