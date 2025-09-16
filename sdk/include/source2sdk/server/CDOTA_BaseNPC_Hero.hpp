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
        // Size: 0x1f18
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
            uint8_t _pad18e0[0x98]; // 0x18e0
            // metadata: MNetworkEnable
            float m_flStrength; // 0x1978            
            // metadata: MNetworkEnable
            float m_flAgility; // 0x197c            
            // metadata: MNetworkEnable
            float m_flIntellect; // 0x1980            
            // metadata: MNetworkEnable
            float m_flStrengthTotal; // 0x1984            
            // metadata: MNetworkEnable
            float m_flAgilityTotal; // 0x1988            
            // metadata: MNetworkEnable
            float m_flIntellectTotal; // 0x198c            
            // metadata: MNetworkEnable
            std::int32_t m_iRecentDamage; // 0x1990            
            // metadata: MNetworkEnable
            std::int32_t m_iPrimaryAttribute; // 0x1994            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x1998            
            float m_flStrengthGain; // 0x199c            
            float m_flAgilityGain; // 0x19a0            
            float m_flIntellectGain; // 0x19a4            
            float m_flLastSuggestionTime; // 0x19a8            
            bool m_bItemsAddedToLoadout; // 0x19ac            
            bool m_bPregameItemsAddedToLoadout; // 0x19ad            
            uint8_t _pad19ae[0x2]; // 0x19ae
            // m_hNewARDMHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNewARDMHero;
            char m_hNewARDMHero[0x4]; // 0x19b0            
            source2sdk::entity2::GameTime_t m_fBuybackCooldown; // 0x19b4            
            source2sdk::entity2::GameTime_t m_fBuybackGoldLimit; // 0x19b8            
            std::int32_t m_nLastHealedAmount; // 0x19bc            
            float m_flLastHealedTime; // 0x19c0            
            // m_hLastHealEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHealEntity;
            char m_hLastHealEntity[0x4]; // 0x19c4            
            Vector m_vRespawnPosition; // 0x19c8            
            uint8_t _pad19d4[0x4]; // 0x19d4
            // m_HeroDamageInfoArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroDamageInfo> m_HeroDamageInfoArray;
            char m_HeroDamageInfoArray[0x18]; // 0x19d8            
            // m_vecRecentModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo> m_vecRecentModifiers;
            char m_vecRecentModifiers[0x18]; // 0x19f0            
            source2sdk::entity2::GameTime_t m_fMostRecentDamageTime; // 0x1a08            
            // metadata: MNetworkEnable
            std::int32_t m_iAbilityPoints; // 0x1a0c            
            // metadata: MNetworkEnable
            std::int32_t m_iTotalAbilityPoints; // 0x1a10            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentXP; // 0x1a14            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1a18            
            // metadata: MNetworkEnable
            float m_flRespawnTimePenalty; // 0x1a1c            
            float m_flTimeUntilRespawn; // 0x1a20            
            float m_flScriptRespawnTime; // 0x1a24            
            float m_flPendingRespawnTime; // 0x1a28            
            // metadata: MNetworkEnable
            bool m_bScriptDisableRespawns; // 0x1a2c            
            uint8_t _pad1a2d[0x3]; // 0x1a2d
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x1a30            
            uint8_t _pad1a34[0x4]; // 0x1a34
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_iHeroFacetKey; // 0x1a38            
            source2sdk::client::PlayerID_t m_iIllusionOriginalPlayerID; // 0x1a40            
            source2sdk::client::HeroID_t m_iHeroID; // 0x1a44            
            // metadata: MNetworkEnable
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x4]; // 0x1a48            
            uint8_t _pad1a4c[0x34]; // 0x1a4c
            source2sdk::server::CountdownTimer m_RespawnMusicTimer; // 0x1a80            
            source2sdk::server::CountdownTimer m_HeroKillTimer; // 0x1a98            
            source2sdk::server::CountdownTimer m_MultipleHeroKillTimer; // 0x1ab0            
            source2sdk::server::CountdownTimer m_MultipleLastHitTimer; // 0x1ac8            
            std::int32_t m_iMultipleKillCount; // 0x1ae0            
            float m_flKillStreakStartTime; // 0x1ae4            
            bool m_bDisableWearables; // 0x1ae8            
            uint8_t _pad1ae9[0x3]; // 0x1ae9
            // m_hTogglableWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTAWearableItem> m_hTogglableWearable[103];
            char m_hTogglableWearable[0x19c]; // 0x1aec            
            source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t m_KillInfo; // 0x1c88            
            source2sdk::server::CountdownTimer m_DirectorAbilityActivity; // 0x1ca8            
            // metadata: MNetworkEnable
            bool m_bReincarnating; // 0x1cc0            
            // metadata: MNetworkEnable
            bool m_bCustomKillEffect; // 0x1cc1            
            uint8_t _pad1cc2[0x2]; // 0x1cc2
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x1cc4            
            // metadata: MNetworkEnable
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x18]; // 0x1cc8            
            source2sdk::server::CountdownTimer m_PurchaseItemTimer; // 0x1ce0            
            source2sdk::server::CountdownTimer m_NeutralItemTimer; // 0x1cf8            
            source2sdk::server::CountdownTimer m_RetrieveItemsFromStashTimer; // 0x1d10            
            source2sdk::server::CountdownTimer m_RequestGoToSecretShopTimer; // 0x1d28            
            std::int32_t m_iNextItemToPurchase; // 0x1d40            
            bool m_bDoesNextItemCompleteRecipe; // 0x1d44            
            uint8_t _pad1d45[0x3]; // 0x1d45
            // m_Loadout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sLoadoutItem> m_Loadout;
            char m_Loadout[0x18]; // 0x1d48            
            // m_BuildingOrBuilt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_pair<source2sdk::client::AbilityID_t,bool>> m_BuildingOrBuilt;
            char m_BuildingOrBuilt[0x18]; // 0x1d60            
            source2sdk::server::sLoadoutItem m_TPScroll; // 0x1d78            
            source2sdk::server::sLoadoutItem m_Dust; // 0x1d90            
            source2sdk::server::sLoadoutItem m_Gem; // 0x1da8            
            source2sdk::server::sLoadoutItem m_SentryWard; // 0x1dc0            
            source2sdk::server::sLoadoutItem m_ObserverWard; // 0x1dd8            
            bool m_bAutoPurchaseItems; // 0x1df0            
            bool m_bBuybackDisabled; // 0x1df1            
            uint8_t _pad1df2[0x6]; // 0x1df2
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Pet>> m_hPets;
            char m_hPets[0x18]; // 0x1df8            
            bool m_bPreventPetSpawn; // 0x1e10            
            uint8_t _pad1e11[0x7]; // 0x1e11
            source2sdk::server::CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // 0x1e18            
            uint8_t _pad1e40[0x28]; // 0x1e40
            CUtlString m_strCustomKillEffect; // 0x1e68            
            CUtlString m_strCustomHexModel; // 0x1e70            
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x1e78            
            uint8_t _pad1e7c[0x4]; // 0x1e7c
            // m_AbilitiesPendingDelete has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AbilitiesPendingDelete;
            char m_AbilitiesPendingDelete[0x18]; // 0x1e80            
            // m_vecItemPurchaseHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecItemPurchaseHistory;
            char m_vecItemPurchaseHistory[0x18]; // 0x1e98            
            // m_vecAbilitySkillHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecAbilitySkillHistory;
            char m_vecAbilitySkillHistory[0x18]; // 0x1eb0            
            // m_vecNeutralItemEquippedHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecNeutralItemEquippedHistory;
            char m_vecNeutralItemEquippedHistory[0x18]; // 0x1ec8            
            uint8_t _pad1ee0[0x18]; // 0x1ee0
            // m_vecExpiredIllusions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Hero>> m_vecExpiredIllusions;
            char m_vecExpiredIllusions[0x18]; // 0x1ef8            
            uint8_t _pad1f10[0x4]; // 0x1f10
            float m_flLastTimeLookedAtByDirector; // 0x1f14            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Hero because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero) == 0x1f18);
    };
};
