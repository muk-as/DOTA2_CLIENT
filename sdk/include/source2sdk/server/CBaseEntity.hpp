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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e0
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
            source2sdk::server::CBodyComponent* m_CBodyComponent; // 0x38            
            source2sdk::client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40            
            uint8_t _pad0208[0x40]; // 0x208
            // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::thinkfunc_t> m_aThinkFunctions;
            char m_aThinkFunctions[0x18]; // 0x248            
            std::int32_t m_iCurrentThinkContext; // 0x260            
            source2sdk::entity2::GameTick_t m_nLastThinkTick; // 0x264            
            bool m_bDisabledContextThinks; // 0x268            
            uint8_t _pad0269[0xf]; // 0x269
            // m_isSteadyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CTypedBitVec<64> m_isSteadyState;
            char m_isSteadyState[0x8]; // 0x278            
            float m_lastNetworkChange; // 0x280            
            uint8_t _pad0284[0xc]; // 0x284
            // m_ResponseContexts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ResponseContext_t> m_ResponseContexts;
            char m_ResponseContexts[0x18]; // 0x290            
            CUtlSymbolLarge m_iszResponseContext; // 0x2a8            
            uint8_t _pad02b0[0x20]; // 0x2b0
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "ClampHealth"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iHealth; // 0x2d0            
            // metadata: MNetworkEnable
            std::int32_t m_iMaxHealth; // 0x2d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkPriority "32"
            std::uint8_t m_lifeState; // 0x2d8            
            uint8_t _pad02d9[0x3]; // 0x2d9
            float m_flDamageAccumulator; // 0x2dc            
            // metadata: MNetworkEnable
            source2sdk::client::DamageOptions_t m_takedamage; // 0x2e0            
            // metadata: MNetworkEnable
            bool m_bTakesDamage; // 0x2e1            
            uint8_t _pad02e2[0x6]; // 0x2e2
            // metadata: MNetworkEnable
            source2sdk::client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x2e8            
            // metadata: MNetworkEnable
            source2sdk::client::EntityPlatformTypes_t m_nPlatformType; // 0x2f0            
            uint8_t _pad02f1[0x1]; // 0x2f1
            // metadata: MNetworkEnable
            source2sdk::client::MoveCollide_t m_MoveCollide; // 0x2f2            
            // metadata: MNetworkEnable
            source2sdk::client::MoveType_t m_MoveType; // 0x2f3            
            source2sdk::client::MoveType_t m_nActualMoveType; // 0x2f4            
            std::uint8_t m_nWaterTouch; // 0x2f5            
            std::uint8_t m_nSlimeTouch; // 0x2f6            
            bool m_bRestoreInHierarchy; // 0x2f7            
            CUtlSymbolLarge m_target; // 0x2f8            
            // m_hDamageFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hDamageFilter;
            char m_hDamageFilter[0x4]; // 0x300            
            uint8_t _pad0304[0x4]; // 0x304
            CUtlSymbolLarge m_iszDamageFilterName; // 0x308            
            float m_flMoveDoneTime; // 0x310            
            // metadata: MNetworkEnable
            // metadata: MNetworkSendProxyRecipientsFilter
            CUtlStringToken m_nSubclassID; // 0x314            
            uint8_t _pad0318[0x8]; // 0x318
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "0"
            // metadata: MNetworkSerializer "animTimeSerializer"
            // metadata: MNetworkSendProxyRecipientsFilter
            float m_flAnimTime; // 0x320            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkSerializer "simulationTimeSerializer"
            // metadata: MNetworkSendProxyRecipientsFilter
            float m_flSimulationTime; // 0x324            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCreateTime; // 0x328            
            // metadata: MNetworkEnable
            bool m_bClientSideRagdoll; // 0x32c            
            // metadata: MNetworkEnable
            std::uint8_t m_ubInterpolationFrame; // 0x32d            
            uint8_t _pad032e[0x2]; // 0x32e
            Vector m_vPrevVPhysicsUpdatePos; // 0x330            
            // metadata: MNetworkEnable
            std::uint8_t m_iTeamNum; // 0x33c            
            uint8_t _pad033d[0x3]; // 0x33d
            CUtlSymbolLarge m_iGlobalname; // 0x340            
            std::int32_t m_iSentToClients; // 0x348            
            // metadata: MNetworkEnable
            float m_flSpeed; // 0x34c            
            CUtlString m_sUniqueHammerID; // 0x350            
            // metadata: MNetworkEnable
            std::uint32_t m_spawnflags; // 0x358            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTick_t m_nNextThinkTick; // 0x35c            
            std::int32_t m_nSimulationTick; // 0x360            
            uint8_t _pad0364[0x4]; // 0x364
            source2sdk::entity2::CEntityIOOutput m_OnKilled; // 0x368            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            std::uint32_t m_fFlags; // 0x390            
            Vector m_vecAbsVelocity; // 0x394            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vecVelocity; // 0x3a0            
            uint8_t _pad03c8[0x8]; // 0x3c8
            std::int32_t m_nPushEnumCount; // 0x3d0            
            uint8_t _pad03d4[0x4]; // 0x3d4
            source2sdk::server::CCollisionProperty* m_pCollision; // 0x3d8            
            // metadata: MNetworkEnable
            // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEffectEntity;
            char m_hEffectEntity[0x4]; // 0x3e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwnerEntity;
            char m_hOwnerEntity[0x4]; // 0x3e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEffectsChanged"
            std::uint32_t m_fEffects; // 0x3e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGroundEntity;
            char m_hGroundEntity[0x4]; // 0x3ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            std::int32_t m_nGroundBodyIndex; // 0x3f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "4,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flFriction; // 0x3f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            float m_flElasticity; // 0x3f8            
            // metadata: MNetworkEnable
            float m_flGravityScale; // 0x3fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flTimeScale; // 0x400            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Water"
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "8"
            float m_flWaterLevel; // 0x404            
            // metadata: MNetworkEnable
            bool m_bGravityDisabled; // 0x408            
            // metadata: MNetworkEnable
            bool m_bAnimatedEveryTick; // 0x409            
            bool m_bGravityActuallyDisabled; // 0x40a            
            bool m_bDisableLowViolence; // 0x40b            
            std::uint8_t m_nWaterType; // 0x40c            
            uint8_t _pad040d[0x3]; // 0x40d
            std::int32_t m_iEFlags; // 0x410            
            uint8_t _pad0414[0x4]; // 0x414
            source2sdk::entity2::CEntityIOOutput m_OnUser1; // 0x418            
            source2sdk::entity2::CEntityIOOutput m_OnUser2; // 0x440            
            source2sdk::entity2::CEntityIOOutput m_OnUser3; // 0x468            
            source2sdk::entity2::CEntityIOOutput m_OnUser4; // 0x490            
            std::int32_t m_iInitialTeamNum; // 0x4b8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x4bc            
            QAngle m_vecAngVelocity; // 0x4c0            
            bool m_bNetworkQuantizeOriginAndAngles; // 0x4cc            
            bool m_bLagCompensate; // 0x4cd            
            uint8_t _pad04ce[0x2]; // 0x4ce
            // m_pBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pBlocker;
            char m_pBlocker[0x4]; // 0x4d0            
            float m_flLocalTime; // 0x4d4            
            float m_flVPhysicsUpdateLocalTime; // 0x4d8            
            // metadata: MNetworkEnable
            source2sdk::client::BloodType m_nBloodType; // 0x4dc            
            
            // Datamap fields:
            // CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
            // void m_CScriptComponent; // 0x30
            // CUtlSymbolLarge subclass_name; // 0x7fffffff
            // void m_pSubclassVData; // 0x318
            // void* m_think; // 0x288
            // void* m_pfnTouch; // 0x2b0
            // void* m_pfnUse; // 0x2b8
            // void* m_pfnBlocked; // 0x2c0
            // void* m_pfnMoveDone; // 0x2c8
            // int32_t InputSetTeam; // 0x0
            // void InputKill; // 0x0
            // void InputKillHierarchy; // 0x0
            // void InputKillConstrained; // 0x0
            // int32_t InputUse; // 0x0
            // bool InputAlternativeSorting; // 0x0
            // CUtlSymbolLarge InputSetParent; // 0x0
            // CUtlSymbolLarge InputSetParentAttachment; // 0x0
            // CUtlSymbolLarge InputSetParentAttachmentMaintainOffset; // 0x0
            // void InputClearParent; // 0x0
            // CUtlSymbolLarge InputFollowEntity; // 0x0
            // CUtlSymbolLarge InputSetDamageFilter; // 0x0
            // void InputEnableDamageForces; // 0x0
            // void InputDisableDamageForces; // 0x0
            // CUtlSymbolLarge InputDispatchResponse; // 0x0
            // CUtlSymbolLarge InputAddContext; // 0x0
            // CUtlSymbolLarge InputRemoveContext; // 0x0
            // void InputClearContext; // 0x0
            // CUtlSymbolLarge InputAddAttribute; // 0x0
            // CUtlSymbolLarge InputRemoveAttribute; // 0x0
            // void InputDisableShadow; // 0x0
            // void InputEnableShadow; // 0x0
            // CUtlSymbolLarge InputFireUser1; // 0x0
            // CUtlSymbolLarge InputFireUser2; // 0x0
            // CUtlSymbolLarge InputFireUser3; // 0x0
            // CUtlSymbolLarge InputFireUser4; // 0x0
            // CUtlSymbolLarge InputChangeSubclass; // 0x0
            // void InputPlatformEnable; // 0x0
            // void InputPlatformDisable; // 0x0
            // void CBaseEntitySUB_Remove; // 0x0
            // void CBaseEntitySUB_RemoveIfUncarried; // 0x0
            // void CBaseEntitySUB_DoNothing; // 0x0
            // void CBaseEntitySUB_Vanish; // 0x0
            // void CBaseEntitySUB_CallUseToggle; // 0x0
            // void CBaseEntitySUB_KillSelf; // 0x0
            // void CBaseEntitySUB_KillSelfIfUncarried; // 0x0
            // void CBaseEntityFakeScriptThinkFunc; // 0x0
            // void CBaseEntityClearNavIgnoreContentsThink; // 0x0
            // void m_pGameSceneNode; // 0x270
            // void m_nEntityType; // 0x2f1
            // QAngle angles; // 0x7fffffff
            // Vector origin; // 0x7fffffff
            // CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
            // CUtlString ownername; // 0x7fffffff
            // int32_t disableshadows; // 0x7fffffff
            // int32_t disablereceiveshadows; // 0x7fffffff
            // int32_t nodamageforces; // 0x7fffffff
            // float angle; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseEntity) == 0x4e0);
    };
};
