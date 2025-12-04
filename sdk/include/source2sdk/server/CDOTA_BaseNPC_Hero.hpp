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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flStrength; // 0x_            
            // metadata: MNetworkEnable
            float m_flAgility; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntellect; // 0x_            
            // metadata: MNetworkEnable
            float m_flStrengthTotal; // 0x_            
            // metadata: MNetworkEnable
            float m_flAgilityTotal; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntellectTotal; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iRecentDamage; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iPrimaryAttribute; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x_            
            float m_flStrengthGain; // 0x_            
            float m_flAgilityGain; // 0x_            
            float m_flIntellectGain; // 0x_            
            float m_flLastSuggestionTime; // 0x_            
            bool m_bItemsAddedToLoadout; // 0x_            
            bool m_bPregameItemsAddedToLoadout; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hNewARDMHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNewARDMHero;
            char m_hNewARDMHero[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_fBuybackCooldown; // 0x_            
            source2sdk::entity2::GameTime_t m_fBuybackGoldLimit; // 0x_            
            std::int32_t m_nLastHealedAmount; // 0x_            
            float m_flLastHealedTime; // 0x_            
            // m_hLastHealEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHealEntity;
            char m_hLastHealEntity[0x_]; // 0x_            
            Vector m_vRespawnPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_HeroDamageInfoArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroDamageInfo> m_HeroDamageInfoArray;
            char m_HeroDamageInfoArray[0x_]; // 0x_            
            // m_vecRecentModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC_Hero_sHeroRecentModifierInfo> m_vecRecentModifiers;
            char m_vecRecentModifiers[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_fMostRecentDamageTime; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iAbilityPoints; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iTotalAbilityPoints; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentXP; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flRespawnTimePenalty; // 0x_            
            float m_flTimeUntilRespawn; // 0x_            
            float m_flScriptRespawnTime; // 0x_            
            float m_flPendingRespawnTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bScriptDisableRespawns; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::HeroFacetKey_t m_iHeroFacetKey; // 0x_            
            source2sdk::client::PlayerID_t m_iIllusionOriginalPlayerID; // 0x_            
            source2sdk::client::HeroID_t m_iHeroID; // 0x_            
            // metadata: MNetworkEnable
            // m_hReplicatingOtherHeroModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Hero> m_hReplicatingOtherHeroModel;
            char m_hReplicatingOtherHeroModel[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_RespawnMusicTimer; // 0x_            
            source2sdk::server::CountdownTimer m_HeroKillTimer; // 0x_            
            source2sdk::server::CountdownTimer m_MultipleHeroKillTimer; // 0x_            
            source2sdk::server::CountdownTimer m_MultipleLastHitTimer; // 0x_            
            std::int32_t m_iMultipleKillCount; // 0x_            
            float m_flKillStreakStartTime; // 0x_            
            bool m_bDisableWearables; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hTogglableWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTAWearableItem> m_hTogglableWearable[103];
            char m_hTogglableWearable[0x_]; // 0x_            
            source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t m_KillInfo; // 0x_            
            source2sdk::server::CountdownTimer m_DirectorAbilityActivity; // 0x_            
            // metadata: MNetworkEnable
            bool m_bReincarnating; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCustomKillEffect; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSpawnedAt; // 0x_            
            // metadata: MNetworkEnable
            // m_hFacetAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hFacetAbilities;
            char m_hFacetAbilities[0x_]; // 0x_            
            source2sdk::server::CountdownTimer m_PurchaseItemTimer; // 0x_            
            source2sdk::server::CountdownTimer m_NeutralItemTimer; // 0x_            
            source2sdk::server::CountdownTimer m_RetrieveItemsFromStashTimer; // 0x_            
            source2sdk::server::CountdownTimer m_RequestGoToSecretShopTimer; // 0x_            
            std::int32_t m_iNextItemToPurchase; // 0x_            
            bool m_bDoesNextItemCompleteRecipe; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Loadout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sLoadoutItem> m_Loadout;
            char m_Loadout[0x_]; // 0x_            
            // m_BuildingOrBuilt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_pair<source2sdk::client::AbilityID_t,bool>> m_BuildingOrBuilt;
            char m_BuildingOrBuilt[0x_]; // 0x_            
            source2sdk::server::sLoadoutItem m_TPScroll; // 0x_            
            source2sdk::server::sLoadoutItem m_Dust; // 0x_            
            source2sdk::server::sLoadoutItem m_Gem; // 0x_            
            source2sdk::server::sLoadoutItem m_SentryWard; // 0x_            
            source2sdk::server::sLoadoutItem m_ObserverWard; // 0x_            
            bool m_bAutoPurchaseItems; // 0x_            
            bool m_bBuybackDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hPets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Pet>> m_hPets;
            char m_hPets[0x_]; // 0x_            
            bool m_bPreventPetSpawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CDOTAMusicProbabilityEntry m_MusicProbabilityGank; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strCustomKillEffect; // 0x_            
            CUtlString m_strCustomHexModel; // 0x_            
            source2sdk::client::ParticleIndex_t m_nKillStreakFX; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_AbilitiesPendingDelete has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AbilitiesPendingDelete;
            char m_AbilitiesPendingDelete[0x_]; // 0x_            
            // m_vecItemPurchaseHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecItemPurchaseHistory;
            char m_vecItemPurchaseHistory[0x_]; // 0x_            
            // m_vecAbilitySkillHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecAbilitySkillHistory;
            char m_vecAbilitySkillHistory[0x_]; // 0x_            
            // m_vecNeutralItemEquippedHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::sAcquireHistory> m_vecNeutralItemEquippedHistory;
            char m_vecNeutralItemEquippedHistory[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecExpiredIllusions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Hero>> m_vecExpiredIllusions;
            char m_vecExpiredIllusions[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLastTimeLookedAtByDirector; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Hero because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero) == 0x_);
    };
};
