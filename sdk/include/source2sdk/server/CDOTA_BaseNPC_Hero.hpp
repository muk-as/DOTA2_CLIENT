#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
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
        // Size: 0x1e90
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
        class CDOTA_BaseNPC_Hero : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            uint8_t _pad1860[0x98]; // 0x1860
            // metadata: MNetworkEnable
            float m_flStrength; // 0x18f8            
            // metadata: MNetworkEnable
            float m_flAgility; // 0x18fc            
            // metadata: MNetworkEnable
            float m_flIntellect; // 0x1900            
            // metadata: MNetworkEnable
            float m_flStrengthTotal; // 0x1904            
            // metadata: MNetworkEnable
            float m_flAgilityTotal; // 0x1908            
            // metadata: MNetworkEnable
            float m_flIntellectTotal; // 0x190c            
            // metadata: MNetworkEnable
            std::int32_t m_iRecentDamage; // 0x1910            
            // metadata: MNetworkEnable
            std::int32_t m_iPrimaryAttribute; // 0x1914            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x1918            
            float m_flStrengthGain; // 0x191c            
            float m_flAgilityGain; // 0x1920            
            float m_flIntellectGain; // 0x1924            
            float m_flLastSuggestionTime; // 0x1928            
            bool m_bItemsAddedToLoadout; // 0x192c            
            bool m_bPregameItemsAddedToLoadout; // 0x192d            
            uint8_t _pad192e[0x2]; // 0x192e
            // m_hNewARDMHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNewARDMHero;
            char m_hNewARDMHero[0x4]; // 0x1930            
            source2sdk::entity2::GameTime_t m_fBuybackCooldown; // 0x1934            
            source2sdk::entity2::GameTime_t m_fBuybackGoldLimit; // 0x1938            
            std::int32_t m_nLastHealedAmount; // 0x193c            
            float m_flLastHealedTime; // 0x1940            
            // m_hLastHealEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHealEntity;
            char m_hLastHealEntity[0x4]; // 0x1944            
            Vector m_vRespawnPosition; // 0x1948            
            uint8_t _pad1954[0x4]; // 0x1954
            // m_HeroDamageInfoArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroDamageInfo> m_HeroDamageInfoArray;
            char m_HeroDamageInfoArray[0x18]; // 0x1958            
            // m_vecRecentModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo> m_vecRecentModifiers;
            char m_vecRecentModifiers[0x18]; // 0x1970            
            source2sdk::entity2::GameTime_t m_fMostRecentDamageTime; // 0x1988            
            // metadata: MNetworkEnable
            std::int32_t m_iAbilityPoints; // 0x198c            
            // metadata: MNetworkEnable
            std::int32_t m_iTotalAbilityPoints; // 0x1990            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentXP; // 0x1994            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1998            
            // metadata: MNetworkEnable
            float m_flRespawnTimePenalty; // 0x199c            
            float m_flTimeUntilRespawn; // 0x19a0            
            float m_flScriptRespawnTime; // 0x19a4            
            float m_flPendingRespawnTime; // 0x19a8            
            // metadata: MNetworkEnable
            bool m_bScriptDisableRespawns; // 0x19ac            
            uint8_t _pad19ad[0x3]; // 0x19ad
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x19b0            
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetID_t m_iHeroFacetID; // 0x19b4            
            source2sdk::client::PlayerID_t m_iIllusionOriginalPlayerID; // 0x19b8            
            source2sdk::client::HeroID_t m_iHeroID; // 0x19bc            
            // metadata: MNetworkEnable
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x4]; // 0x19c0            
            uint8_t _pad19c4[0x34]; // 0x19c4
            source2sdk::server::CountdownTimer m_RespawnMusicTimer; // 0x19f8            
            source2sdk::server::CountdownTimer m_HeroKillTimer; // 0x1a10            
            source2sdk::server::CountdownTimer m_MultipleHeroKillTimer; // 0x1a28            
            source2sdk::server::CountdownTimer m_MultipleLastHitTimer; // 0x1a40            
            std::int32_t m_iMultipleKillCount; // 0x1a58            
            float m_flKillStreakStartTime; // 0x1a5c            
            bool m_bDisableWearables; // 0x1a60            
            uint8_t _pad1a61[0x3]; // 0x1a61
            // m_hTogglableWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTAWearableItem> m_hTogglableWearable[102];
            char m_hTogglableWearable[0x198]; // 0x1a64            
            uint8_t _pad1bfc[0x4]; // 0x1bfc
            source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t m_KillInfo; // 0x1c00            
            source2sdk::server::CountdownTimer m_DirectorAbilityActivity; // 0x1c20            
            // metadata: MNetworkEnable
            bool m_bReincarnating; // 0x1c38            
            // metadata: MNetworkEnable
            bool m_bCustomKillEffect; // 0x1c39            
            uint8_t _pad1c3a[0x2]; // 0x1c3a
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x1c3c            
            // metadata: MNetworkEnable
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x18]; // 0x1c40            
            source2sdk::server::CountdownTimer m_PurchaseItemTimer; // 0x1c58            
            source2sdk::server::CountdownTimer m_NeutralItemTimer; // 0x1c70            
            source2sdk::server::CountdownTimer m_RetrieveItemsFromStashTimer; // 0x1c88            
            source2sdk::server::CountdownTimer m_RequestGoToSecretShopTimer; // 0x1ca0            
            std::int32_t m_iNextItemToPurchase; // 0x1cb8            
            bool m_bDoesNextItemCompleteRecipe; // 0x1cbc            
            uint8_t _pad1cbd[0x3]; // 0x1cbd
            // m_Loadout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sLoadoutItem> m_Loadout;
            char m_Loadout[0x18]; // 0x1cc0            
            // m_BuildingOrBuilt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlPair<source2sdk::client::AbilityID_t,bool>> m_BuildingOrBuilt;
            char m_BuildingOrBuilt[0x18]; // 0x1cd8            
            source2sdk::server::sLoadoutItem m_TPScroll; // 0x1cf0            
            source2sdk::server::sLoadoutItem m_Dust; // 0x1d08            
            source2sdk::server::sLoadoutItem m_Gem; // 0x1d20            
            source2sdk::server::sLoadoutItem m_SentryWard; // 0x1d38            
            source2sdk::server::sLoadoutItem m_ObserverWard; // 0x1d50            
            bool m_bAutoPurchaseItems; // 0x1d68            
            bool m_bBuybackDisabled; // 0x1d69            
            uint8_t _pad1d6a[0x6]; // 0x1d6a
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Pet>> m_hPets;
            char m_hPets[0x18]; // 0x1d70            
            bool m_bPreventPetSpawn; // 0x1d88            
            uint8_t _pad1d89[0x7]; // 0x1d89
            source2sdk::server::CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // 0x1d90            
            uint8_t _pad1db8[0x28]; // 0x1db8
            CUtlString m_strCustomKillEffect; // 0x1de0            
            CUtlString m_strCustomHexModel; // 0x1de8            
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x1df0            
            uint8_t _pad1df4[0x4]; // 0x1df4
            // m_AbilitiesPendingDelete has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AbilitiesPendingDelete;
            char m_AbilitiesPendingDelete[0x18]; // 0x1df8            
            // m_vecItemPurchaseHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecItemPurchaseHistory;
            char m_vecItemPurchaseHistory[0x18]; // 0x1e10            
            // m_vecAbilitySkillHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecAbilitySkillHistory;
            char m_vecAbilitySkillHistory[0x18]; // 0x1e28            
            // m_vecNeutralItemEquippedHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecNeutralItemEquippedHistory;
            char m_vecNeutralItemEquippedHistory[0x18]; // 0x1e40            
            uint8_t _pad1e58[0x18]; // 0x1e58
            // m_vecExpiredIllusions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Hero>> m_vecExpiredIllusions;
            char m_vecExpiredIllusions[0x18]; // 0x1e70            
            uint8_t _pad1e88[0x4]; // 0x1e88
            float m_flLastTimeLookedAtByDirector; // 0x1e8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Hero because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero) == 0x1e90);
    };
};
