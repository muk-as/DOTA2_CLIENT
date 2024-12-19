#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTAMusicProbabilityEntry.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero__KillInfo_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero__sHeroDamageInfo.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero__sHeroRecentModifierInfo.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/sAcquireHistory.hpp"
#include "source2sdk/server/sLoadoutItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTAWearableItem;
};

namespace source2sdk::server
{
    class CDOTA_BaseNPC_Pet;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1ec8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "float m_flStrength"
    // static metadata: MNetworkVarNames "float m_flAgility"
    // static metadata: MNetworkVarNames "float m_flIntellect"
    // static metadata: MNetworkVarNames "float m_flStrengthTotal"
    // static metadata: MNetworkVarNames "float m_flAgilityTotal"
    // static metadata: MNetworkVarNames "float m_flIntellectTotal"
    // static metadata: MNetworkVarNames "int m_iRecentDamage"
    // static metadata: MNetworkVarNames "int m_iPrimaryAttribute"
    // static metadata: MNetworkVarNames "GameTime_t m_flDeathTime"
    // static metadata: MNetworkVarNames "int m_iAbilityPoints"
    // static metadata: MNetworkVarNames "int m_iTotalAbilityPoints"
    // static metadata: MNetworkVarNames "int m_iCurrentXP"
    // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
    // static metadata: MNetworkVarNames "float m_flRespawnTimePenalty"
    // static metadata: MNetworkVarNames "bool m_bScriptDisableRespawns"
    // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerID"
    // static metadata: MNetworkVarNames "HeroFacetID_t m_iHeroFacetID"
    // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel"
    // static metadata: MNetworkVarNames "bool m_bReincarnating"
    // static metadata: MNetworkVarNames "bool m_bCustomKillEffect"
    // static metadata: MNetworkVarNames "GameTime_t m_flSpawnedAt"
    // static metadata: MNetworkVarNames "EHANDLE m_hFacetAbilities"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Hero : public server::CDOTA_BaseNPC_Additive
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1868[0x98]; // 0x1868
        // metadata: MNetworkEnable
        float m_flStrength; // 0x1900        
        // metadata: MNetworkEnable
        float m_flAgility; // 0x1904        
        // metadata: MNetworkEnable
        float m_flIntellect; // 0x1908        
        // metadata: MNetworkEnable
        float m_flStrengthTotal; // 0x190c        
        // metadata: MNetworkEnable
        float m_flAgilityTotal; // 0x1910        
        // metadata: MNetworkEnable
        float m_flIntellectTotal; // 0x1914        
        // metadata: MNetworkEnable
        int32_t m_iRecentDamage; // 0x1918        
        // metadata: MNetworkEnable
        int32_t m_iPrimaryAttribute; // 0x191c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDeathTime; // 0x1920        
        float m_flStrengthGain; // 0x1924        
        float m_flAgilityGain; // 0x1928        
        float m_flIntellectGain; // 0x192c        
        float m_flLastSuggestionTime; // 0x1930        
        bool m_bItemsAddedToLoadout; // 0x1934        
        bool m_bPregameItemsAddedToLoadout; // 0x1935        
        [[maybe_unused]] std::uint8_t pad_0x1936[0x2]; // 0x1936
        // m_hNewARDMHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hNewARDMHero;
        char m_hNewARDMHero[0x4]; // 0x1938        
        entity2::GameTime_t m_fBuybackCooldown; // 0x193c        
        entity2::GameTime_t m_fBuybackGoldLimit; // 0x1940        
        int32_t m_nLastHealedAmount; // 0x1944        
        float m_flLastHealedTime; // 0x1948        
        // m_hLastHealEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastHealEntity;
        char m_hLastHealEntity[0x4]; // 0x194c        
        Vector m_vRespawnPosition; // 0x1950        
        [[maybe_unused]] std::uint8_t pad_0x195c[0x4]; // 0x195c
        // m_HeroDamageInfoArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_BaseNPC_Hero__sHeroDamageInfo> m_HeroDamageInfoArray;
        char m_HeroDamageInfoArray[0x18]; // 0x1960        
        // m_vecRecentModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_BaseNPC_Hero__sHeroRecentModifierInfo> m_vecRecentModifiers;
        char m_vecRecentModifiers[0x18]; // 0x1978        
        entity2::GameTime_t m_fMostRecentDamageTime; // 0x1990        
        // metadata: MNetworkEnable
        int32_t m_iAbilityPoints; // 0x1994        
        // metadata: MNetworkEnable
        int32_t m_iTotalAbilityPoints; // 0x1998        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentXP; // 0x199c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0x19a0        
        // metadata: MNetworkEnable
        float m_flRespawnTimePenalty; // 0x19a4        
        float m_flTimeUntilRespawn; // 0x19a8        
        float m_flScriptRespawnTime; // 0x19ac        
        float m_flPendingRespawnTime; // 0x19b0        
        // metadata: MNetworkEnable
        bool m_bScriptDisableRespawns; // 0x19b4        
        [[maybe_unused]] std::uint8_t pad_0x19b5[0x3]; // 0x19b5
        // metadata: MNetworkEnable
        client::PlayerID_t m_iPlayerID; // 0x19b8        
        // metadata: MNetworkEnable
        client::HeroFacetID_t m_iHeroFacetID; // 0x19bc        
        client::PlayerID_t m_iIllusionOriginalPlayerID; // 0x19c0        
        client::HeroID_t m_iHeroID; // 0x19c4        
        // metadata: MNetworkEnable
        // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
        char m_hReplicatingOtherHeroModel[0x4]; // 0x19c8        
        [[maybe_unused]] std::uint8_t pad_0x19cc[0x34]; // 0x19cc
        server::CountdownTimer m_RespawnMusicTimer; // 0x1a00        
        server::CountdownTimer m_HeroKillTimer; // 0x1a18        
        server::CountdownTimer m_MultipleHeroKillTimer; // 0x1a30        
        server::CountdownTimer m_MultipleLastHitTimer; // 0x1a48        
        int32_t m_iMultipleKillCount; // 0x1a60        
        float m_flKillStreakStartTime; // 0x1a64        
        bool m_bDisableWearables; // 0x1a68        
        [[maybe_unused]] std::uint8_t pad_0x1a69[0x3]; // 0x1a69
        // m_hTogglableWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTAWearableItem> m_hTogglableWearable[102];
        char m_hTogglableWearable[0x198]; // 0x1a6c        
        [[maybe_unused]] std::uint8_t pad_0x1c04[0x4]; // 0x1c04
        server::CDOTA_BaseNPC_Hero__KillInfo_t m_KillInfo; // 0x1c08        
        server::CountdownTimer m_DirectorAbilityActivity; // 0x1c28        
        // metadata: MNetworkEnable
        bool m_bReincarnating; // 0x1c40        
        // metadata: MNetworkEnable
        bool m_bCustomKillEffect; // 0x1c41        
        [[maybe_unused]] std::uint8_t pad_0x1c42[0x2]; // 0x1c42
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSpawnedAt; // 0x1c44        
        // metadata: MNetworkEnable
        // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_hFacetAbilities;
        char m_hFacetAbilities[0x18]; // 0x1c48        
        server::CountdownTimer m_PurchaseItemTimer; // 0x1c60        
        server::CountdownTimer m_NeutralItemTimer; // 0x1c78        
        server::CountdownTimer m_RetrieveItemsFromStashTimer; // 0x1c90        
        server::CountdownTimer m_RequestGoToSecretShopTimer; // 0x1ca8        
        int32_t m_iNextItemToPurchase; // 0x1cc0        
        bool m_bDoesNextItemCompleteRecipe; // 0x1cc4        
        [[maybe_unused]] std::uint8_t pad_0x1cc5[0x3]; // 0x1cc5
        // m_Loadout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::sLoadoutItem> m_Loadout;
        char m_Loadout[0x18]; // 0x1cc8        
        // m_BuildingOrBuilt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlPair<client::AbilityID_t,bool>> m_BuildingOrBuilt;
        char m_BuildingOrBuilt[0x18]; // 0x1ce0        
        server::sLoadoutItem m_TPScroll; // 0x1cf8        
        server::sLoadoutItem m_Dust; // 0x1d10        
        server::sLoadoutItem m_Gem; // 0x1d28        
        server::sLoadoutItem m_SentryWard; // 0x1d40        
        server::sLoadoutItem m_ObserverWard; // 0x1d58        
        server::sLoadoutItem m_Courier; // 0x1d70        
        server::sLoadoutItem m_FlyingCourier; // 0x1d88        
        bool m_bAutoPurchaseItems; // 0x1da0        
        bool m_bBuybackDisabled; // 0x1da1        
        [[maybe_unused]] std::uint8_t pad_0x1da2[0x6]; // 0x1da2
        // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC_Pet>> m_hPets;
        char m_hPets[0x18]; // 0x1da8        
        bool m_bPreventPetSpawn; // 0x1dc0        
        [[maybe_unused]] std::uint8_t pad_0x1dc1[0x7]; // 0x1dc1
        server::CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // 0x1dc8        
        [[maybe_unused]] std::uint8_t pad_0x1df0[0x28]; // 0x1df0
        CUtlString m_strCustomKillEffect; // 0x1e18        
        CUtlString m_strCustomHexModel; // 0x1e20        
        client::ParticleIndex_t m_nKillStreakFX; // 0x1e28        
        [[maybe_unused]] std::uint8_t pad_0x1e2c[0x4]; // 0x1e2c
        // m_AbilitiesPendingDelete has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_AbilitiesPendingDelete;
        char m_AbilitiesPendingDelete[0x18]; // 0x1e30        
        // m_vecItemPurchaseHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::sAcquireHistory> m_vecItemPurchaseHistory;
        char m_vecItemPurchaseHistory[0x18]; // 0x1e48        
        // m_vecAbilitySkillHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::sAcquireHistory> m_vecAbilitySkillHistory;
        char m_vecAbilitySkillHistory[0x18]; // 0x1e60        
        // m_vecNeutralItemEquippedHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::sAcquireHistory> m_vecNeutralItemEquippedHistory;
        char m_vecNeutralItemEquippedHistory[0x18]; // 0x1e78        
        [[maybe_unused]] std::uint8_t pad_0x1e90[0x18]; // 0x1e90
        // m_vecExpiredIllusions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC_Hero>> m_vecExpiredIllusions;
        char m_vecExpiredIllusions[0x18]; // 0x1ea8        
        [[maybe_unused]] std::uint8_t pad_0x1ec0[0x4]; // 0x1ec0
        float m_flLastTimeLookedAtByDirector; // 0x1ec4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Hero because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Hero) == 0x1ec8);
};
