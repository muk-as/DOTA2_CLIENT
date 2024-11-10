#pragma once
#include "source2sdk/client/BloodType.hpp"
#include "source2sdk/client/CNetworkTransmitComponent.hpp"
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/DamageOptions_t.hpp"
#include "source2sdk/client/EntityPlatformTypes_t.hpp"
#include "source2sdk/client/LatchDirtyPermission_t.hpp"
#include "source2sdk/client/MoveCollide_t.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/client/thinkfunc_t.hpp"
#include "source2sdk/entity2/CEntityInstance.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/particleslib/CParticleProperty.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBasePlayerController;
};

namespace source2sdk::client
{
    class CBodyComponent;
};

namespace source2sdk::client
{
    class CCollisionProperty;
};

namespace source2sdk::client
{
    class CGameSceneNode;
};

namespace source2sdk::client
{
    class CRenderComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x560
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
    // static metadata: MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
    // static metadata: MNetworkVarNames "BloodType m_nBloodType"
    #pragma pack(push, 1)
    class C_BaseEntity : public entity2::CEntityInstance
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CBodyComponent"
        // metadata: MNetworkAlias "CBodyComponent"
        // metadata: MNetworkTypeAlias "CBodyComponent"
        // metadata: MNetworkPriority "48"
        client::CBodyComponent* m_CBodyComponent; // 0x40        
        client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x208[0x120]; // 0x208
        entity2::GameTick_t m_nLastThinkTick; // 0x328        
        [[maybe_unused]] std::uint8_t pad_0x32c[0x4]; // 0x32c
        client::CGameSceneNode* m_pGameSceneNode; // 0x330        
        client::CRenderComponent* m_pRenderComponent; // 0x338        
        client::CCollisionProperty* m_pCollision; // 0x340        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_iMaxHealth; // 0x348        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "ClampHealth"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkPriority "32"
        int32_t m_iHealth; // 0x34c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkPriority "32"
        uint8_t m_lifeState; // 0x350        
        // metadata: MNetworkEnable
        client::DamageOptions_t m_takedamage; // 0x351        
        // metadata: MNetworkEnable
        bool m_bTakesDamage; // 0x352        
        [[maybe_unused]] std::uint8_t pad_0x353[0x5]; // 0x353
        // metadata: MNetworkEnable
        client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x358        
        // metadata: MNetworkEnable
        client::EntityPlatformTypes_t m_nPlatformType; // 0x360        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInterpolationFrameChanged"
        uint8_t m_ubInterpolationFrame; // 0x361        
        [[maybe_unused]] std::uint8_t pad_0x362[0x2]; // 0x362
        // m_hSceneObjectController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSceneObjectController;
        char m_hSceneObjectController[0x4]; // 0x364        
        int32_t m_nNoInterpolationTick; // 0x368        
        int32_t m_nVisibilityNoInterpolationTick; // 0x36c        
        float m_flProxyRandomValue; // 0x370        
        int32_t m_iEFlags; // 0x374        
        uint8_t m_nWaterType; // 0x378        
        bool m_bInterpolateEvenWithNoModel; // 0x379        
        bool m_bPredictionEligible; // 0x37a        
        bool m_bApplyLayerMatchIDToModel; // 0x37b        
        CUtlStringToken m_tokLayerMatchID; // 0x37c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSubclassIDChanged"
        CUtlStringToken m_nSubclassID; // 0x380        
        [[maybe_unused]] std::uint8_t pad_0x384[0xc]; // 0x384
        int32_t m_nSimulationTick; // 0x390        
        int32_t m_iCurrentThinkContext; // 0x394        
        // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::thinkfunc_t> m_aThinkFunctions;
        char m_aThinkFunctions[0x18]; // 0x398        
        bool m_bDisabledContextThinks; // 0x3b0        
        [[maybe_unused]] std::uint8_t pad_0x3b1[0x3]; // 0x3b1
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "0"
        // metadata: MNetworkSerializer "animTimeSerializer"
        float m_flAnimTime; // 0x3b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "1"
        // metadata: MNetworkSerializer "simulationTimeSerializer"
        // metadata: MNetworkChangeCallback "OnSimulationTimeChanged"
        float m_flSimulationTime; // 0x3b8        
        uint8_t m_nSceneObjectOverrideFlags; // 0x3bc        
        bool m_bHasSuccessfullyInterpolated; // 0x3bd        
        bool m_bHasAddedVarsToInterpolation; // 0x3be        
        bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3bf        
        int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3c0        
        uint16_t m_ListEntry[11]; // 0x3c8        
        [[maybe_unused]] std::uint8_t pad_0x3de[0x2]; // 0x3de
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCreateTime; // 0x3e0        
        // metadata: MNetworkEnable
        float m_flSpeed; // 0x3e4        
        uint16_t m_EntClientFlags; // 0x3e8        
        // metadata: MNetworkEnable
        bool m_bClientSideRagdoll; // 0x3ea        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetVarTeamNumChanged"
        uint8_t m_iTeamNum; // 0x3eb        
        // metadata: MNetworkEnable
        uint32_t m_spawnflags; // 0x3ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTick_t m_nNextThinkTick; // 0x3f0        
        [[maybe_unused]] std::uint8_t pad_0x3f4[0x4]; // 0x3f4
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnFlagsChanged"
        uint32_t m_fFlags; // 0x3f8        
        Vector m_vecAbsVelocity; // 0x3fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkChangeCallback "OnLocalVelocityChanged"
        // metadata: MNetworkPriority "32"
        client::CNetworkVelocityVector m_vecVelocity; // 0x408        
        [[maybe_unused]] std::uint8_t pad_0x430[0x8]; // 0x430
        // metadata: MNetworkEnable
        // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEffectEntity;
        char m_hEffectEntity[0x4]; // 0x438        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOwnerEntity;
        char m_hOwnerEntity[0x4]; // 0x43c        
        // metadata: MNetworkEnable
        client::MoveCollide_t m_MoveCollide; // 0x440        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMoveTypeChanged"
        client::MoveType_t m_MoveType; // 0x441        
        client::MoveType_t m_nActualMoveType; // 0x442        
        [[maybe_unused]] std::uint8_t pad_0x443[0x1]; // 0x443
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Water"
        // metadata: MNetworkChangeCallback "OnWaterLevelChangeNetworked"
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkEncodeFlags "8"
        float m_flWaterLevel; // 0x444        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEffectsChanged"
        uint32_t m_fEffects; // 0x448        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGroundEntity;
        char m_hGroundEntity[0x4]; // 0x44c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        int32_t m_nGroundBodyIndex; // 0x450        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "4,000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFriction; // 0x454        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        float m_flElasticity; // 0x458        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flGravityScale; // 0x45c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flTimeScale; // 0x460        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInterpolationAmountChanged"
        bool m_bAnimatedEveryTick; // 0x464        
        [[maybe_unused]] std::uint8_t pad_0x465[0x3]; // 0x465
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNavIgnoreChanged"
        entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x468        
        uint16_t m_hThink; // 0x46c        
        [[maybe_unused]] std::uint8_t pad_0x46e[0xa]; // 0x46e
        uint8_t m_fBBoxVisFlags; // 0x478        
        bool m_bPredictable; // 0x479        
        bool m_bRenderWithViewModels; // 0x47a        
        [[maybe_unused]] std::uint8_t pad_0x47b[0x1]; // 0x47b
        CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x47c        
        int32_t m_nFirstPredictableCommand; // 0x480        
        int32_t m_nLastPredictableCommand; // 0x484        
        // m_hOldMoveParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldMoveParent;
        char m_hOldMoveParent[0x4]; // 0x488        
        [[maybe_unused]] std::uint8_t pad_0x48c[0x4]; // 0x48c
        particleslib::CParticleProperty m_Particles; // 0x490        
        // m_vecPredictedScriptFloats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecPredictedScriptFloats;
        char m_vecPredictedScriptFloats[0x18]; // 0x4b8        
        // m_vecPredictedScriptFloatIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_vecPredictedScriptFloatIDs;
        char m_vecPredictedScriptFloatIDs[0x18]; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x18]; // 0x4e8
        int32_t m_nNextScriptVarRecordID; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x504[0xc]; // 0x504
        QAngle m_vecAngVelocity; // 0x510        
        int32_t m_DataChangeEventRef; // 0x51c        
        // m_dependencies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityHandle> m_dependencies;
        char m_dependencies[0x18]; // 0x520        
        int32_t m_nCreationTick; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x9]; // 0x53c
        bool m_bAnimTimeChanged; // 0x545        
        bool m_bSimulationTimeChanged; // 0x546        
        [[maybe_unused]] std::uint8_t pad_0x547[0x9]; // 0x547
        CUtlString m_sUniqueHammerID; // 0x550        
        // metadata: MNetworkEnable
        client::BloodType m_nBloodType; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x55c[0x4];
        
        // Static fields:
        static bool &Get_sm_bDatadescValidating() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_sm_bAccurateTriggerBboxChecks() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[1]->m_pInstance);};
        static bool &Get_sm_bDisableTouchFuncs() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[2]->m_pInstance);};
        static bool &Get_m_bAllowPrecache() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[3]->m_pInstance);};
        static client::LatchDirtyPermission_t &Get_s_nLatchPermissions() {return *reinterpret_cast<client::LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[4]->m_pInstance);};
        static int32_t &Get_m_nPredictionRandomSeed() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[5]->m_pInstance);};
        static client::CBasePlayerController* &Get_m_pPredictionPlayerController() {return *reinterpret_cast<client::CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[6]->m_pInstance);};
        static bool &Get_s_bAbsQueriesValid() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[7]->m_pInstance);};
        static bool &Get_s_bAbsRecomputationEnabled() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[8]->m_pInstance);};
        static bool &Get_s_bComputingInterpolatedValues() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[9]->m_pInstance);};
        static bool &Get_s_bPreventingSetAnimRunAnimEvents() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[10]->m_pInstance);};
        static CUtlVector<client::C_BaseEntity*> &Get_gm_UsableObjects() {return *reinterpret_cast<CUtlVector<client::C_BaseEntity*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[11]->m_pInstance);};
        
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
    static_assert(sizeof(C_BaseEntity) == 0x560);
};
