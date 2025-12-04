#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BloodType.hpp"
#include "source2sdk/client/CNetworkTransmitComponent.hpp"
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/DamageOptions_t.hpp"
#include "source2sdk/client/EntityPlatformTypes_t.hpp"
#include "source2sdk/client/MoveCollide_t.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/client/thinkfunc_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/CEntityInstance.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/ResponseContext_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBodyComponent;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCollisionProperty;
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
        // 
        // static metadata: MNetworkExcludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkExcludeByName "m_iMaxHealth"
        // static metadata: MNetworkExcludeByUserGroup "Water"
        // static metadata: MNetworkExcludeByUserGroup "Player"
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkExcludeByName "m_spawnflags"
        // static metadata: MNetworkExcludeByName "m_bTakesDamage"
        // static metadata: MNetworkExcludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkExcludeByName "m_flSpeed"
        // static metadata: MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
        // static metadata: MNetworkVarNames "int32 m_iHealth"
        // static metadata: MNetworkVarNames "int32 m_iMaxHealth"
        // static metadata: MNetworkVarNames "uint8 m_lifeState"
        // static metadata: MNetworkVarNames "DamageOptions_t m_takedamage"
        // static metadata: MNetworkVarNames "bool m_bTakesDamage"
        // static metadata: MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
        // static metadata: MNetworkVarNames "MoveCollide_t m_MoveCollide"
        // static metadata: MNetworkVarNames "MoveType_t m_MoveType"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
        // static metadata: MNetworkVarNames "float32 m_flAnimTime"
        // static metadata: MNetworkVarNames "float32 m_flSimulationTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flCreateTime"
        // static metadata: MNetworkVarNames "bool m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "uint8 m_ubInterpolationFrame"
        // static metadata: MNetworkVarNames "uint8 m_iTeamNum"
        // static metadata: MNetworkVarNames "float m_flSpeed"
        // static metadata: MNetworkVarNames "uint32 m_spawnflags"
        // static metadata: MNetworkVarNames "GameTick_t m_nNextThinkTick"
        // static metadata: MNetworkVarNames "uint32 m_fFlags"
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vecVelocity"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
        // static metadata: MNetworkVarNames "uint32 m_fEffects"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
        // static metadata: MNetworkVarNames "int m_nGroundBodyIndex"
        // static metadata: MNetworkVarNames "float32 m_flFriction"
        // static metadata: MNetworkVarNames "float32 m_flElasticity"
        // static metadata: MNetworkVarNames "float32 m_flGravityScale"
        // static metadata: MNetworkVarNames "float32 m_flTimeScale"
        // static metadata: MNetworkVarNames "float m_flWaterLevel"
        // static metadata: MNetworkVarNames "bool m_bGravityDisabled"
        // static metadata: MNetworkVarNames "bool m_bAnimatedEveryTick"
        // static metadata: MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
        // static metadata: MNetworkVarNames "BloodType m_nBloodType"
        #pragma pack(push, 1)
        class CBaseEntity : public source2sdk::entity2::CEntityInstance
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CBodyComponent"
            // metadata: MNetworkAlias "CBodyComponent"
            // metadata: MNetworkTypeAlias "CBodyComponent"
            // metadata: MNetworkPriority "48"
            source2sdk::server::CBodyComponent* m_CBodyComponent; // 0x_            
            source2sdk::client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::thinkfunc_t> m_aThinkFunctions;
            char m_aThinkFunctions[0x_]; // 0x_            
            std::int32_t m_iCurrentThinkContext; // 0x_            
            source2sdk::entity2::GameTick_t m_nLastThinkTick; // 0x_            
            bool m_bDisabledContextThinks; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_isSteadyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CTypedBitVec<64> m_isSteadyState;
            char m_isSteadyState[0x_]; // 0x_            
            float m_lastNetworkChange; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ResponseContexts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ResponseContext_t> m_ResponseContexts;
            char m_ResponseContexts[0x_]; // 0x_            
            CUtlSymbolLarge m_iszResponseContext; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "ClampHealth"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iHealth; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iMaxHealth; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkPriority "32"
            std::uint8_t m_lifeState; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDamageAccumulator; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::DamageOptions_t m_takedamage; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTakesDamage; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::EntityPlatformTypes_t m_nPlatformType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::MoveCollide_t m_MoveCollide; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::MoveType_t m_MoveType; // 0x_            
            source2sdk::client::MoveType_t m_nActualMoveType; // 0x_            
            std::uint8_t m_nWaterTouch; // 0x_            
            std::uint8_t m_nSlimeTouch; // 0x_            
            bool m_bRestoreInHierarchy; // 0x_            
            CUtlSymbolLarge m_target; // 0x_            
            // m_hDamageFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hDamageFilter;
            char m_hDamageFilter[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszDamageFilterName; // 0x_            
            float m_flMoveDoneTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkSendProxyRecipientsFilter
            CUtlStringToken m_nSubclassID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "0"
            // metadata: MNetworkSerializer "animTimeSerializer"
            // metadata: MNetworkSendProxyRecipientsFilter
            float m_flAnimTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkSerializer "simulationTimeSerializer"
            // metadata: MNetworkSendProxyRecipientsFilter
            float m_flSimulationTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCreateTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bClientSideRagdoll; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_ubInterpolationFrame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vPrevVPhysicsUpdatePos; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iTeamNum; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iGlobalname; // 0x_            
            std::int32_t m_iSentToClients; // 0x_            
            // metadata: MNetworkEnable
            float m_flSpeed; // 0x_            
            CUtlString m_sUniqueHammerID; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_spawnflags; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTick_t m_nNextThinkTick; // 0x_            
            std::int32_t m_nSimulationTick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnKilled; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            std::uint32_t m_fFlags; // 0x_            
            Vector m_vecAbsVelocity; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vecVelocity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nPushEnumCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CCollisionProperty* m_pCollision; // 0x_            
            // metadata: MNetworkEnable
            // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEffectEntity;
            char m_hEffectEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwnerEntity;
            char m_hOwnerEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEffectsChanged"
            std::uint32_t m_fEffects; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGroundEntity;
            char m_hGroundEntity[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            std::int32_t m_nGroundBodyIndex; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "4,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flFriction; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            float m_flElasticity; // 0x_            
            // metadata: MNetworkEnable
            float m_flGravityScale; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flTimeScale; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Water"
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "8"
            float m_flWaterLevel; // 0x_            
            // metadata: MNetworkEnable
            bool m_bGravityDisabled; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAnimatedEveryTick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flActualGravityScale; // 0x_            
            bool m_bGravityActuallyDisabled; // 0x_            
            bool m_bDisableLowViolence; // 0x_            
            std::uint8_t m_nWaterType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iEFlags; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnUser1; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnUser2; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnUser3; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnUser4; // 0x_            
            std::int32_t m_iInitialTeamNum; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x_            
            QAngle m_vecAngVelocity; // 0x_            
            bool m_bNetworkQuantizeOriginAndAngles; // 0x_            
            bool m_bLagCompensate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_pBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pBlocker;
            char m_pBlocker[0x_]; // 0x_            
            float m_flLocalTime; // 0x_            
            float m_flVPhysicsUpdateLocalTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::BloodType m_nBloodType; // 0x_            
            
            // Datamap fields:
            // CUtlSymbolLarge m_iszPrivateVScripts; // 0x_
            // void m_CScriptComponent; // 0x_
            // CUtlSymbolLarge subclass_name; // 0x_
            // void m_pSubclassVData; // 0x_
            // void* m_think; // 0x_
            // void* m_pfnTouch; // 0x_
            // void* m_pfnUse; // 0x_
            // void* m_pfnBlocked; // 0x_
            // void* m_pfnMoveDone; // 0x_
            // int32_t InputSetTeam; // 0x_
            // void InputKill; // 0x_
            // void InputKillHierarchy; // 0x_
            // void InputKillConstrained; // 0x_
            // int32_t InputUse; // 0x_
            // bool InputAlternativeSorting; // 0x_
            // CUtlSymbolLarge InputSetParent; // 0x_
            // CUtlSymbolLarge InputSetParentAttachment; // 0x_
            // CUtlSymbolLarge InputSetParentAttachmentMaintainOffset; // 0x_
            // void InputClearParent; // 0x_
            // CUtlSymbolLarge InputFollowEntity; // 0x_
            // CUtlSymbolLarge InputSetDamageFilter; // 0x_
            // void InputEnableDamageForces; // 0x_
            // void InputDisableDamageForces; // 0x_
            // CUtlSymbolLarge InputDispatchResponse; // 0x_
            // CUtlSymbolLarge InputAddContext; // 0x_
            // CUtlSymbolLarge InputRemoveContext; // 0x_
            // void InputClearContext; // 0x_
            // CUtlSymbolLarge InputAddAttribute; // 0x_
            // CUtlSymbolLarge InputRemoveAttribute; // 0x_
            // void InputDisableShadow; // 0x_
            // void InputEnableShadow; // 0x_
            // CUtlSymbolLarge InputFireUser1; // 0x_
            // CUtlSymbolLarge InputFireUser2; // 0x_
            // CUtlSymbolLarge InputFireUser3; // 0x_
            // CUtlSymbolLarge InputFireUser4; // 0x_
            // CUtlSymbolLarge InputChangeSubclass; // 0x_
            // void InputPlatformEnable; // 0x_
            // void InputPlatformDisable; // 0x_
            // void InputPlatformFollowYaw; // 0x_
            // void InputPlatformIgnoreYaw; // 0x_
            // void CBaseEntitySUB_Remove; // 0x_
            // void CBaseEntitySUB_RemoveIfUncarried; // 0x_
            // void CBaseEntitySUB_DoNothing; // 0x_
            // void CBaseEntitySUB_Vanish; // 0x_
            // void CBaseEntitySUB_CallUseToggle; // 0x_
            // void CBaseEntitySUB_KillSelf; // 0x_
            // void CBaseEntitySUB_KillSelfIfUncarried; // 0x_
            // void CBaseEntityFakeScriptThinkFunc; // 0x_
            // void CBaseEntityClearNavIgnoreContentsThink; // 0x_
            // void m_pGameSceneNode; // 0x_
            // void m_nEntityType; // 0x_
            // QAngle angles; // 0x_
            // Vector origin; // 0x_
            // CStrongHandle< InfoForResourceTypeCModel > model; // 0x_
            // CUtlString ownername; // 0x_
            // int32_t disableshadows; // 0x_
            // int32_t disablereceiveshadows; // 0x_
            // int32_t nodamageforces; // 0x_
            // float angle; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseEntity) == 0x_);
    };
};
