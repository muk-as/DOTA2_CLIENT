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
#include "source2sdk/entity2/CEntityInstance.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/particleslib/CParticleProperty.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBodyComponent;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCollisionProperty;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CGameSceneNode;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CRenderComponent;
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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkExcludeByName "m_iMaxHealth"
        // static metadata: MNetworkExcludeByUserGroup "Player"
        // static metadata: MNetworkExcludeByUserGroup "Water"
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkExcludeByName "m_spawnflags"
        // static metadata: MNetworkExcludeByName "m_bTakesDamage"
        // static metadata: MNetworkExcludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkExcludeByName "m_vecAbsVelocity"
        // static metadata: MNetworkExcludeByName "m_flSpeed"
        // static metadata: MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
        // static metadata: MNetworkVarNames "int32 m_iMaxHealth"
        // static metadata: MNetworkVarNames "int32 m_iHealth"
        // static metadata: MNetworkVarNames "uint8 m_lifeState"
        // static metadata: MNetworkVarNames "DamageOptions_t m_takedamage"
        // static metadata: MNetworkVarNames "bool m_bTakesDamage"
        // static metadata: MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
        // static metadata: MNetworkVarNames "uint8 m_ubInterpolationFrame"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
        // static metadata: MNetworkVarNames "float32 m_flAnimTime"
        // static metadata: MNetworkVarNames "float32 m_flSimulationTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flCreateTime"
        // static metadata: MNetworkVarNames "float m_flSpeed"
        // static metadata: MNetworkVarNames "bool m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "uint8 m_iTeamNum"
        // static metadata: MNetworkVarNames "uint32 m_spawnflags"
        // static metadata: MNetworkVarNames "GameTick_t m_nNextThinkTick"
        // static metadata: MNetworkVarNames "uint32 m_fFlags"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
        // static metadata: MNetworkVarNames "MoveCollide_t m_MoveCollide"
        // static metadata: MNetworkVarNames "MoveType_t m_MoveType"
        // static metadata: MNetworkVarNames "float32 m_flWaterLevel"
        // static metadata: MNetworkVarNames "uint32 m_fEffects"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
        // static metadata: MNetworkVarNames "int m_nGroundBodyIndex"
        // static metadata: MNetworkVarNames "float32 m_flFriction"
        // static metadata: MNetworkVarNames "float32 m_flElasticity"
        // static metadata: MNetworkVarNames "float32 m_flGravityScale"
        // static metadata: MNetworkVarNames "float32 m_flTimeScale"
        // static metadata: MNetworkVarNames "bool m_bAnimatedEveryTick"
        // static metadata: MNetworkVarNames "bool m_bGravityDisabled"
        // static metadata: MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
        // static metadata: MNetworkVarNames "BloodType m_nBloodType"
        #pragma pack(push, 1)
        class C_BaseEntity : public source2sdk::entity2::CEntityInstance
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CBodyComponent"
            // metadata: MNetworkAlias "CBodyComponent"
            // metadata: MNetworkTypeAlias "CBodyComponent"
            // metadata: MNetworkPriority "48"
            source2sdk::client::CBodyComponent* m_CBodyComponent; // 0x38            
            source2sdk::client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40            
            uint8_t _pad0208[0x120]; // 0x208
            source2sdk::entity2::GameTick_t m_nLastThinkTick; // 0x328            
            uint8_t _pad032c[0x4]; // 0x32c
            source2sdk::client::CGameSceneNode* m_pGameSceneNode; // 0x330            
            source2sdk::client::CRenderComponent* m_pRenderComponent; // 0x338            
            source2sdk::client::CCollisionProperty* m_pCollision; // 0x340            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int32_t m_iMaxHealth; // 0x348            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "ClampHealth"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iHealth; // 0x34c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkPriority "32"
            std::uint8_t m_lifeState; // 0x350            
            // metadata: MNetworkEnable
            source2sdk::client::DamageOptions_t m_takedamage; // 0x351            
            // metadata: MNetworkEnable
            bool m_bTakesDamage; // 0x352            
            uint8_t _pad0353[0x5]; // 0x353
            // metadata: MNetworkEnable
            source2sdk::client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x358            
            // metadata: MNetworkEnable
            source2sdk::client::EntityPlatformTypes_t m_nPlatformType; // 0x360            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInterpolationFrameChanged"
            std::uint8_t m_ubInterpolationFrame; // 0x361            
            uint8_t _pad0362[0x2]; // 0x362
            // m_hSceneObjectController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSceneObjectController;
            char m_hSceneObjectController[0x4]; // 0x364            
            std::int32_t m_nNoInterpolationTick; // 0x368            
            std::int32_t m_nVisibilityNoInterpolationTick; // 0x36c            
            float m_flProxyRandomValue; // 0x370            
            std::int32_t m_iEFlags; // 0x374            
            std::uint8_t m_nWaterType; // 0x378            
            bool m_bInterpolateEvenWithNoModel; // 0x379            
            bool m_bPredictionEligible; // 0x37a            
            bool m_bApplyLayerMatchIDToModel; // 0x37b            
            CUtlStringToken m_tokLayerMatchID; // 0x37c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSubclassIDChanged"
            CUtlStringToken m_nSubclassID; // 0x380            
            uint8_t _pad0384[0xc]; // 0x384
            std::int32_t m_nSimulationTick; // 0x390            
            std::int32_t m_iCurrentThinkContext; // 0x394            
            // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::thinkfunc_t> m_aThinkFunctions;
            char m_aThinkFunctions[0x18]; // 0x398            
            bool m_bDisabledContextThinks; // 0x3b0            
            uint8_t _pad03b1[0x3]; // 0x3b1
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "0"
            // metadata: MNetworkSerializer "animTimeSerializer"
            float m_flAnimTime; // 0x3b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkSerializer "simulationTimeSerializer"
            // metadata: MNetworkChangeCallback "OnSimulationTimeChanged"
            float m_flSimulationTime; // 0x3b8            
            std::uint8_t m_nSceneObjectOverrideFlags; // 0x3bc            
            bool m_bHasSuccessfullyInterpolated; // 0x3bd            
            bool m_bHasAddedVarsToInterpolation; // 0x3be            
            bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3bf            
            std::int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3c0            
            std::uint16_t m_ListEntry[11]; // 0x3c8            
            uint8_t _pad03de[0x2]; // 0x3de
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCreateTime; // 0x3e0            
            // metadata: MNetworkEnable
            float m_flSpeed; // 0x3e4            
            std::uint16_t m_EntClientFlags; // 0x3e8            
            // metadata: MNetworkEnable
            bool m_bClientSideRagdoll; // 0x3ea            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetVarTeamNumChanged"
            std::uint8_t m_iTeamNum; // 0x3eb            
            // metadata: MNetworkEnable
            std::uint32_t m_spawnflags; // 0x3ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTick_t m_nNextThinkTick; // 0x3f0            
            uint8_t _pad03f4[0x4]; // 0x3f4
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkChangeCallback "OnFlagsChanged"
            std::uint32_t m_fFlags; // 0x3f8            
            Vector m_vecAbsVelocity; // 0x3fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkAlias "m_vecVelocity"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkChangeCallback "OnServerVelocityChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vecServerVelocity; // 0x408            
            source2sdk::client::CNetworkVelocityVector m_vecVelocity; // 0x430            
            uint8_t _pad0458[0xb8]; // 0x458
            // metadata: MNetworkEnable
            // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEffectEntity;
            char m_hEffectEntity[0x4]; // 0x510            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerEntity;
            char m_hOwnerEntity[0x4]; // 0x514            
            // metadata: MNetworkEnable
            source2sdk::client::MoveCollide_t m_MoveCollide; // 0x518            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMoveTypeChanged"
            source2sdk::client::MoveType_t m_MoveType; // 0x519            
            source2sdk::client::MoveType_t m_nActualMoveType; // 0x51a            
            uint8_t _pad051b[0x1]; // 0x51b
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Water"
            // metadata: MNetworkChangeCallback "OnWaterLevelChangeNetworked"
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "8"
            float m_flWaterLevel; // 0x51c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEffectsChanged"
            std::uint32_t m_fEffects; // 0x520            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGroundEntity;
            char m_hGroundEntity[0x4]; // 0x524            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            std::int32_t m_nGroundBodyIndex; // 0x528            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "4,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flFriction; // 0x52c            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            float m_flElasticity; // 0x530            
            // metadata: MNetworkEnable
            float m_flGravityScale; // 0x534            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flTimeScale; // 0x538            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInterpolationAmountChanged"
            bool m_bAnimatedEveryTick; // 0x53c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGravityDisableUpdated"
            bool m_bGravityDisabled; // 0x53d            
            uint8_t _pad053e[0x2]; // 0x53e
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNavIgnoreChanged"
            source2sdk::entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x540            
            std::uint16_t m_hThink; // 0x544            
            uint8_t _pad0546[0xa]; // 0x546
            std::uint8_t m_fBBoxVisFlags; // 0x550            
            bool m_bGravityActuallyDisabled; // 0x551            
            bool m_bPredictable; // 0x552            
            bool m_bRenderWithViewModels; // 0x553            
            std::int32_t m_nFirstPredictableCommand; // 0x554            
            std::int32_t m_nLastPredictableCommand; // 0x558            
            // m_hOldMoveParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldMoveParent;
            char m_hOldMoveParent[0x4]; // 0x55c            
            source2sdk::particleslib::CParticleProperty m_Particles; // 0x560            
            uint8_t _pad0588[0x8]; // 0x588
            QAngle m_vecAngVelocity; // 0x590            
            std::int32_t m_DataChangeEventRef; // 0x59c            
            // m_dependencies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityHandle> m_dependencies;
            char m_dependencies[0x18]; // 0x5a0            
            std::int32_t m_nCreationTick; // 0x5b8            
            uint8_t _pad05bc[0x9]; // 0x5bc
            bool m_bAnimTimeChanged; // 0x5c5            
            bool m_bSimulationTimeChanged; // 0x5c6            
            uint8_t _pad05c7[0x9]; // 0x5c7
            CUtlString m_sUniqueHammerID; // 0x5d0            
            // metadata: MNetworkEnable
            source2sdk::client::BloodType m_nBloodType; // 0x5d8            
            uint8_t _pad05dc[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
            // void m_CScriptComponent; // 0x30
            // CUtlSymbolLarge subclass_name; // 0x7fffffff
            // void m_pSubclassVData; // 0x388
            // QAngle angles; // 0x7fffffff
            // Vector origin; // 0x7fffffff
            // CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
            // CUtlString ownername; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseEntity) == 0x5e0);
    };
};
