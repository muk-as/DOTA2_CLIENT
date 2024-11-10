#pragma once
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CCollisionProperty.hpp"
#include "source2sdk/server/CGlowProperty.hpp"
#include "source2sdk/server/CHitboxComponent.hpp"
#include "source2sdk/server/EntityRenderAttribute_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CRenderComponent;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7b0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
    // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
    // static metadata: MNetworkVarNames "RenderMode_t m_nRenderMode"
    // static metadata: MNetworkVarNames "RenderFx_t m_nRenderFX"
    // static metadata: MNetworkVarNames "Color m_clrRender"
    // static metadata: MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
    // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
    // static metadata: MNetworkVarNames "bool m_bNoInterpolate"
    // static metadata: MNetworkVarNames "CCollisionProperty m_Collision"
    // static metadata: MNetworkVarNames "CGlowProperty m_Glow"
    // static metadata: MNetworkVarNames "float m_flGlowBackfaceMult"
    // static metadata: MNetworkVarNames "float32 m_fadeMinDist"
    // static metadata: MNetworkVarNames "float32 m_fadeMaxDist"
    // static metadata: MNetworkVarNames "float32 m_flFadeScale"
    // static metadata: MNetworkVarNames "float32 m_flShadowStrength"
    // static metadata: MNetworkVarNames "uint8 m_nObjectCulling"
    // static metadata: MNetworkVarNames "int m_nAddDecal"
    // static metadata: MNetworkVarNames "Vector m_vDecalPosition"
    // static metadata: MNetworkVarNames "Vector m_vDecalForwardAxis"
    // static metadata: MNetworkVarNames "float m_flDecalHealBloodRate"
    // static metadata: MNetworkVarNames "float m_flDecalHealHeightRate"
    // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
    // static metadata: MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
    #pragma pack(push, 1)
    class CBaseModelEntity : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CRenderComponent"
        // metadata: MNetworkAlias "CRenderComponent"
        // metadata: MNetworkTypeAlias "CRenderComponent"
        server::CRenderComponent* m_CRenderComponent; // 0x4e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CHitboxComponent"
        // metadata: MNetworkAlias "CHitboxComponent"
        // metadata: MNetworkTypeAlias "CHitboxComponent"
        server::CHitboxComponent m_CHitboxComponent; // 0x4e8        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x510        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x514        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x518        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x51c        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x520        
        int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x524        
        int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x528        
        int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x52c        
        int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x530        
        int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x534        
        [[maybe_unused]] std::uint8_t pad_0x538[0x8]; // 0x538
        client::HitGroup_t m_LastHitGroup; // 0x540        
        entity2::GameTime_t m_flDissolveStartTime; // 0x544        
        entity2::CEntityIOOutput m_OnIgnite; // 0x548        
        int32_t m_iViewerID; // 0x570        
        int32_t m_iTeamVisibilityBitmask; // 0x574        
        // metadata: MNetworkEnable
        client::RenderMode_t m_nRenderMode; // 0x578        
        bool m_bVisibilityDirtyFlag; // 0x579        
        int16_t m_iFOWTempViewerID[10]; // 0x57a        
        // metadata: MNetworkEnable
        client::RenderFx_t m_nRenderFX; // 0x58e        
        bool m_bAllowFadeInView; // 0x58f        
        [[maybe_unused]] std::uint8_t pad_0x590[0x18]; // 0x590
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnColorChanged"
        Color m_clrRender; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4]; // 0x5ac
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::EntityRenderAttribute_t> m_vecRenderAttributes;
        char m_vecRenderAttributes[0x68]; // 0x5b0        
        // metadata: MNetworkEnable
        bool m_bRenderToCubemaps; // 0x618        
        // metadata: MNetworkEnable
        bool m_bNoInterpolate; // 0x619        
        [[maybe_unused]] std::uint8_t pad_0x61a[0x6]; // 0x61a
        // metadata: MNetworkEnable
        server::CCollisionProperty m_Collision; // 0x620        
        // metadata: MNetworkEnable
        server::CGlowProperty m_Glow; // 0x6d0        
        // metadata: MNetworkEnable
        float m_flGlowBackfaceMult; // 0x728        
        // metadata: MNetworkEnable
        float m_fadeMinDist; // 0x72c        
        // metadata: MNetworkEnable
        float m_fadeMaxDist; // 0x730        
        // metadata: MNetworkEnable
        float m_flFadeScale; // 0x734        
        // metadata: MNetworkEnable
        float m_flShadowStrength; // 0x738        
        // metadata: MNetworkEnable
        uint8_t m_nObjectCulling; // 0x73c        
        [[maybe_unused]] std::uint8_t pad_0x73d[0x3]; // 0x73d
        // metadata: MNetworkEnable
        int32_t m_nAddDecal; // 0x740        
        // metadata: MNetworkEnable
        Vector m_vDecalPosition; // 0x744        
        // metadata: MNetworkEnable
        Vector m_vDecalForwardAxis; // 0x750        
        // metadata: MNetworkEnable
        float m_flDecalHealBloodRate; // 0x75c        
        // metadata: MNetworkEnable
        float m_flDecalHealHeightRate; // 0x760        
        [[maybe_unused]] std::uint8_t pad_0x764[0x4]; // 0x764
        // metadata: MNetworkEnable
        // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
        char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x768        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        client::CNetworkViewOffsetVector m_vecViewOffset; // 0x780        
        [[maybe_unused]] std::uint8_t pad_0x7a8[0x8];
        
        // Datamap fields:
        // CDestructiblePartsSystemComponent m_pDestructiblePartsSystemComponent; // 0x538
        // int32_t InputAlpha; // 0x0
        // Color InputColor; // 0x0
        // int32_t InputSkin; // 0x0
        // void CBaseModelEntitySUB_DissolveIfUncarried; // 0x0
        // void InputIgnite; // 0x0
        // float InputIgniteLifetime; // 0x0
        // int32_t InputIgnite; // 0x0
        // float InputIgnite; // 0x0
        // void InputExtinguish; // 0x0
        // CUtlString add_attribute; // 0x7fffffff
        // void CBaseModelEntitySUB_StartFadeOut; // 0x0
        // void CBaseModelEntitySUB_StartFadeOutInstant; // 0x0
        // void CBaseModelEntitySUB_FadeOut; // 0x0
        // void CBaseModelEntitySUB_StartShadowFadeOut; // 0x0
        // void CBaseModelEntitySUB_PerformShadowFadeOut; // 0x0
        // void CBaseModelEntitySUB_StartShadowFadeIn; // 0x0
        // void CBaseModelEntitySUB_PerformShadowFadeIn; // 0x0
        // void CBaseModelEntitySUB_StopShadowFade; // 0x0
        // void m_iFOWTempViewerID; // 0x57a
        // Color rendercolor32; // 0x7fffffff
        // Color rendercolor; // 0x7fffffff
        // int32_t renderamt; // 0x7fffffff
        // Vector mins; // 0x7fffffff
        // Vector maxs; // 0x7fffffff
        // const char * skin; // 0x7fffffff
        // CUtlString bodygroups; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseModelEntity because it is not a standard-layout class
    static_assert(sizeof(CBaseModelEntity) == 0x7b0);
};
