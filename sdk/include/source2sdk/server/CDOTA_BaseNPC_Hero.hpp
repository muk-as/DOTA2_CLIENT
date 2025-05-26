#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTAMusicProbabilityEntry.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero_KillInfo_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero_sHeroDamageInfo.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/sAcquireHistory.hpp"
#include "source2sdk/server/sLoadoutItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTAWearableItem;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Pet;
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
        // Size: 0x1ed0
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
        // static metadata: MNetworkVarNames "HeroFacetKey_t m_iHeroFacetKey"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel"
        // static metadata: MNetworkVarNames "bool m_bReincarnating"
        // static metadata: MNetworkVarNames "bool m_bCustomKillEffect"
        // static metadata: MNetworkVarNames "GameTime_t m_flSpawnedAt"
        // static metadata: MNetworkVarNames "EHANDLE m_hFacetAbilities"
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Hero : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            uint8_t _pad1898[0x98]; // 0x1898
            // metadata: MNetworkEnable
            float m_flStrength; // 0x1930            
            // metadata: MNetworkEnable
            float m_flAgility; // 0x1934            
            // metadata: MNetworkEnable
            float m_flIntellect; // 0x1938            
            // metadata: MNetworkEnable
            float m_flStrengthTotal; // 0x193c            
            // metadata: MNetworkEnable
            float m_flAgilityTotal; // 0x1940            
            // metadata: MNetworkEnable
            float m_flIntellectTotal; // 0x1944            
            // metadata: MNetworkEnable
            std::int32_t m_iRecentDamage; // 0x1948            
            // metadata: MNetworkEnable
            std::int32_t m_iPrimaryAttribute; // 0x194c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x1950            
            float m_flStrengthGain; // 0x1954            
            float m_flAgilityGain; // 0x1958            
            float m_flIntellectGain; // 0x195c            
            float m_flLastSuggestionTime; // 0x1960            
            bool m_bItemsAddedToLoadout; // 0x1964            
            bool m_bPregameItemsAddedToLoadout; // 0x1965            
            uint8_t _pad1966[0x2]; // 0x1966
            // m_hNewARDMHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNewARDMHero;
            char m_hNewARDMHero[0x4]; // 0x1968            
            source2sdk::entity2::GameTime_t m_fBuybackCooldown; // 0x196c            
            source2sdk::entity2::GameTime_t m_fBuybackGoldLimit; // 0x1970            
            std::int32_t m_nLastHealedAmount; // 0x1974            
            float m_flLastHealedTime; // 0x1978            
            // m_hLastHealEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHealEntity;
            char m_hLastHealEntity[0x4]; // 0x197c            
            Vector m_vRespawnPosition; // 0x1980            
            uint8_t _pad198c[0x4]; // 0x198c
            // m_HeroDamageInfoArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroDamageInfo> m_HeroDamageInfoArray;
            char m_HeroDamageInfoArray[0x18]; // 0x1990            
            // m_vecRecentModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo> m_vecRecentModifiers;
            char m_vecRecentModifiers[0x18]; // 0x19a8            
            source2sdk::entity2::GameTime_t m_fMostRecentDamageTime; // 0x19c0            
            // metadata: MNetworkEnable
            std::int32_t m_iAbilityPoints; // 0x19c4            
            // metadata: MNetworkEnable
            std::int32_t m_iTotalAbilityPoints; // 0x19c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentXP; // 0x19cc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x19d0            
            // metadata: MNetworkEnable
            float m_flRespawnTimePenalty; // 0x19d4            
            float m_flTimeUntilRespawn; // 0x19d8            
            float m_flScriptRespawnTime; // 0x19dc            
            float m_flPendingRespawnTime; // 0x19e0            
            // metadata: MNetworkEnable
            bool m_bScriptDisableRespawns; // 0x19e4            
            uint8_t _pad19e5[0x3]; // 0x19e5
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x19e8            
            uint8_t _pad19ec[0x4]; // 0x19ec
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_iHeroFacetKey; // 0x19f0            
            source2sdk::client::PlayerID_t m_iIllusionOriginalPlayerID; // 0x19f8            
            source2sdk::client::HeroID_t m_iHeroID; // 0x19fc            
            // metadata: MNetworkEnable
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x4]; // 0x1a00            
            uint8_t _pad1a04[0x34]; // 0x1a04
            source2sdk::server::CountdownTimer m_RespawnMusicTimer; // 0x1a38            
            source2sdk::server::CountdownTimer m_HeroKillTimer; // 0x1a50            
            source2sdk::server::CountdownTimer m_MultipleHeroKillTimer; // 0x1a68            
            source2sdk::server::CountdownTimer m_MultipleLastHitTimer; // 0x1a80            
            std::int32_t m_iMultipleKillCount; // 0x1a98            
            float m_flKillStreakStartTime; // 0x1a9c            
            bool m_bDisableWearables; // 0x1aa0            
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            // m_hTogglableWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTAWearableItem> m_hTogglableWearable[102];
            char m_hTogglableWearable[0x198]; // 0x1aa4            
            uint8_t _pad1c3c[0x4]; // 0x1c3c
            source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t m_KillInfo; // 0x1c40            
            source2sdk::server::CountdownTimer m_DirectorAbilityActivity; // 0x1c60            
            // metadata: MNetworkEnable
            bool m_bReincarnating; // 0x1c78            
            // metadata: MNetworkEnable
            bool m_bCustomKillEffect; // 0x1c79            
            uint8_t _pad1c7a[0x2]; // 0x1c7a
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x1c7c            
            // metadata: MNetworkEnable
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x18]; // 0x1c80            
            source2sdk::server::CountdownTimer m_PurchaseItemTimer; // 0x1c98            
            source2sdk::server::CountdownTimer m_NeutralItemTimer; // 0x1cb0            
            source2sdk::server::CountdownTimer m_RetrieveItemsFromStashTimer; // 0x1cc8            
            source2sdk::server::CountdownTimer m_RequestGoToSecretShopTimer; // 0x1ce0            
            std::int32_t m_iNextItemToPurchase; // 0x1cf8            
            bool m_bDoesNextItemCompleteRecipe; // 0x1cfc            
            uint8_t _pad1cfd[0x3]; // 0x1cfd
            // m_Loadout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sLoadoutItem> m_Loadout;
            char m_Loadout[0x18]; // 0x1d00            
            // m_BuildingOrBuilt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlPair<source2sdk::client::AbilityID_t,bool>> m_BuildingOrBuilt;
            char m_BuildingOrBuilt[0x18]; // 0x1d18            
            source2sdk::server::sLoadoutItem m_TPScroll; // 0x1d30            
            source2sdk::server::sLoadoutItem m_Dust; // 0x1d48            
            source2sdk::server::sLoadoutItem m_Gem; // 0x1d60            
            source2sdk::server::sLoadoutItem m_SentryWard; // 0x1d78            
            source2sdk::server::sLoadoutItem m_ObserverWard; // 0x1d90            
            bool m_bAutoPurchaseItems; // 0x1da8            
            bool m_bBuybackDisabled; // 0x1da9            
            uint8_t _pad1daa[0x6]; // 0x1daa
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Pet>> m_hPets;
            char m_hPets[0x18]; // 0x1db0            
            bool m_bPreventPetSpawn; // 0x1dc8            
            uint8_t _pad1dc9[0x7]; // 0x1dc9
            source2sdk::server::CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // 0x1dd0            
            uint8_t _pad1df8[0x28]; // 0x1df8
            CUtlString m_strCustomKillEffect; // 0x1e20            
            CUtlString m_strCustomHexModel; // 0x1e28            
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x1e30            
            uint8_t _pad1e34[0x4]; // 0x1e34
            // m_AbilitiesPendingDelete has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AbilitiesPendingDelete;
            char m_AbilitiesPendingDelete[0x18]; // 0x1e38            
            // m_vecItemPurchaseHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecItemPurchaseHistory;
            char m_vecItemPurchaseHistory[0x18]; // 0x1e50            
            // m_vecAbilitySkillHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecAbilitySkillHistory;
            char m_vecAbilitySkillHistory[0x18]; // 0x1e68            
            // m_vecNeutralItemEquippedHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecNeutralItemEquippedHistory;
            char m_vecNeutralItemEquippedHistory[0x18]; // 0x1e80            
            uint8_t _pad1e98[0x18]; // 0x1e98
            // m_vecExpiredIllusions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Hero>> m_vecExpiredIllusions;
            char m_vecExpiredIllusions[0x18]; // 0x1eb0            
            uint8_t _pad1ec8[0x4]; // 0x1ec8
            float m_flLastTimeLookedAtByDirector; // 0x1ecc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Hero because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero) == 0x1ed0);
    };
};
