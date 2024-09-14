#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b88
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
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
    // static metadata: MNetworkVarNames "HeroFacetID_t m_iHeroFacetID"
    // static metadata: MNetworkVarNames "CHandle<C_DOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel"
    // static metadata: MNetworkVarNames "bool m_bReincarnating"
    // static metadata: MNetworkVarNames "bool m_bCustomKillEffect"
    // static metadata: MNetworkVarNames "GameTime_t m_flSpawnedAt"
    // static metadata: MNetworkVarNames "bool m_bScriptDisableRespawns"
    // static metadata: MNetworkVarNames "int m_iPrimaryAttribute"
    // static metadata: MNetworkIncludeByName "m_flDeathTime"
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Hero : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1800[0x8]; // 0x1800
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentXP; // 0x1808        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityPointsChanged"
        int32_t m_iAbilityPoints; // 0x180c        
        // metadata: MNetworkEnable
        int32_t m_iTotalAbilityPoints; // 0x1810        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0x1814        
        // metadata: MNetworkEnable
        float m_flRespawnTimePenalty; // 0x1818        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBaseStatChanged"
        float m_flStrength; // 0x181c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBaseStatChanged"
        float m_flAgility; // 0x1820        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBaseStatChanged"
        float m_flIntellect; // 0x1824        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBaseStatChanged"
        float m_flStrengthTotal; // 0x1828        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBaseStatChanged"
        float m_flAgilityTotal; // 0x182c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBaseStatChanged"
        float m_flIntellectTotal; // 0x1830        
        [[maybe_unused]] std::uint8_t pad_0x1834[0x4]; // 0x1834
        // metadata: MNetworkEnable
        // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_hFacetAbilities;
        char m_hFacetAbilities[0x18]; // 0x1838        
        // metadata: MNetworkEnable
        int32_t m_iRecentDamage; // 0x1850        
        float m_fPainFactor; // 0x1854        
        float m_fTargetPainFactor; // 0x1858        
        bool m_bLifeState; // 0x185c        
        bool m_bFirstSpawn; // 0x185d        
        [[maybe_unused]] std::uint8_t pad_0x185e[0x2]; // 0x185e
        client::ParticleIndex_t m_nFXStunIndex; // 0x1860        
        client::ParticleIndex_t m_nFXSilenceIndex; // 0x1864        
        client::ParticleIndex_t m_nFXDeathIndex; // 0x1868        
        [[maybe_unused]] std::uint8_t pad_0x186c[0x24]; // 0x186c
        // metadata: MNetworkEnable
        client::PlayerID_t m_iPlayerID; // 0x1890        
        // metadata: MNetworkEnable
        client::HeroFacetID_t m_iHeroFacetID; // 0x1894        
        // metadata: MNetworkEnable
        // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
        char m_hReplicatingOtherHeroModel[0x4]; // 0x1898        
        // metadata: MNetworkEnable
        bool m_bReincarnating; // 0x189c        
        // metadata: MNetworkEnable
        bool m_bCustomKillEffect; // 0x189d        
        [[maybe_unused]] std::uint8_t pad_0x189e[0x2]; // 0x189e
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSpawnedAt; // 0x18a0        
        // metadata: MNetworkEnable
        bool m_bScriptDisableRespawns; // 0x18a4        
        [[maybe_unused]] std::uint8_t pad_0x18a5[0x3]; // 0x18a5
        // metadata: MNetworkEnable
        int32_t m_iPrimaryAttribute; // 0x18a8        
        int32_t m_nLastDrawnHealth; // 0x18ac        
        float m_flHurtAmount; // 0x18b0        
        entity2::GameTime_t m_flLastHurtTime; // 0x18b4        
        float m_flHurtDecayRate; // 0x18b8        
        entity2::GameTime_t m_flLastHealTime; // 0x18bc        
        entity2::GameTime_t m_flLastTreeShakeTime; // 0x18c0        
        [[maybe_unused]] std::uint8_t pad_0x18c4[0x4]; // 0x18c4
        client::CountdownTimer m_CenterOnHeroCooldownTimer; // 0x18c8        
        [[maybe_unused]] std::uint8_t pad_0x18e0[0x208]; // 0x18e0
        // m_CombinedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_CombinedModels[4];
        char m_CombinedModels[0x20]; // 0x1ae8        
        int32_t m_nCurrentCombinedModelIndex; // 0x1b08        
        int32_t m_nPendingCombinedModelIndex; // 0x1b0c        
        client::HeroID_t m_iHeroID; // 0x1b10        
        float m_flCheckLegacyItemsAt; // 0x1b14        
        bool m_bDisplayAdditionalHeroes; // 0x1b18        
        [[maybe_unused]] std::uint8_t pad_0x1b19[0xf]; // 0x1b19
        // m_CombinedParticleModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_CombinedParticleModels[4];
        char m_CombinedParticleModels[0x20]; // 0x1b28        
        // m_vecAttachedParticleIndeces has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_vecAttachedParticleIndeces;
        char m_vecAttachedParticleIndeces[0x18]; // 0x1b48        
        // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hPets;
        char m_hPets[0x18]; // 0x1b60        
        client::ParticleIndex_t m_nKillStreakFX; // 0x1b78        
        int32_t m_nKillStreakFXTier; // 0x1b7c        
        // start of bitfield block at 0x1b80
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
        // end of bitfield block // 10 bits
        [[maybe_unused]] std::uint8_t pad_0x1b82[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Hero because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Hero) == 0x1b88);
};
