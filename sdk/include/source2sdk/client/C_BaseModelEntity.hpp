#pragma once
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CClientAlphaProperty;
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
    // Size: 0x820
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
    // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
    #pragma pack(push, 1)
    class C_BaseModelEntity : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CRenderComponent"
        // metadata: MNetworkAlias "CRenderComponent"
        // metadata: MNetworkTypeAlias "CRenderComponent"
        client::CRenderComponent* m_CRenderComponent; // 0x560        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CHitboxComponent"
        // metadata: MNetworkAlias "CHitboxComponent"
        // metadata: MNetworkTypeAlias "CHitboxComponent"
        client::CHitboxComponent m_CHitboxComponent; // 0x568        
        client::HitGroup_t m_LastHitGroup; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x594[0x24]; // 0x594
        bool m_bInitModelEffects; // 0x5b8        
        bool m_bIsStaticProp; // 0x5b9        
        [[maybe_unused]] std::uint8_t pad_0x5ba[0x2]; // 0x5ba
        int32_t m_iViewerID; // 0x5bc        
        int32_t m_iTeamVisibilityBitmask; // 0x5c0        
        int32_t m_nLastAddDecal; // 0x5c4        
        int32_t m_nDecalsAdded; // 0x5c8        
        int32_t m_iOldHealth; // 0x5cc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderModeChanged"
        client::RenderMode_t m_nRenderMode; // 0x5d0        
        bool m_bVisibilityDirtyFlag; // 0x5d1        
        // metadata: MNetworkEnable
        client::RenderFx_t m_nRenderFX; // 0x5d2        
        bool m_bAllowFadeInView; // 0x5d3        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0x1c]; // 0x5d4
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnColorChanged"
        Color m_clrRender; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4]; // 0x5f4
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t> m_vecRenderAttributes;
        char m_vecRenderAttributes[0x68]; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x660[0x18]; // 0x660
        // metadata: MNetworkEnable
        bool m_bRenderToCubemaps; // 0x678        
        // metadata: MNetworkEnable
        bool m_bNoInterpolate; // 0x679        
        [[maybe_unused]] std::uint8_t pad_0x67a[0x6]; // 0x67a
        // metadata: MNetworkEnable
        client::CCollisionProperty m_Collision; // 0x680        
        // metadata: MNetworkEnable
        client::CGlowProperty m_Glow; // 0x730        
        // metadata: MNetworkEnable
        float m_flGlowBackfaceMult; // 0x788        
        // metadata: MNetworkEnable
        float m_fadeMinDist; // 0x78c        
        // metadata: MNetworkEnable
        float m_fadeMaxDist; // 0x790        
        // metadata: MNetworkEnable
        float m_flFadeScale; // 0x794        
        // metadata: MNetworkEnable
        float m_flShadowStrength; // 0x798        
        // metadata: MNetworkEnable
        uint8_t m_nObjectCulling; // 0x79c        
        [[maybe_unused]] std::uint8_t pad_0x79d[0x3]; // 0x79d
        // metadata: MNetworkEnable
        int32_t m_nAddDecal; // 0x7a0        
        // metadata: MNetworkEnable
        Vector m_vDecalPosition; // 0x7a4        
        // metadata: MNetworkEnable
        Vector m_vDecalForwardAxis; // 0x7b0        
        // metadata: MNetworkEnable
        float m_flDecalHealBloodRate; // 0x7bc        
        // metadata: MNetworkEnable
        float m_flDecalHealHeightRate; // 0x7c0        
        [[maybe_unused]] std::uint8_t pad_0x7c4[0x4]; // 0x7c4
        // metadata: MNetworkEnable
        // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
        char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x7c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
        client::CNetworkViewOffsetVector m_vecViewOffset; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x808[0x8]; // 0x808
        client::CClientAlphaProperty* m_pClientAlphaProperty; // 0x810        
        Color m_ClientOverrideTint; // 0x818        
        bool m_bUseClientOverrideTint; // 0x81c        
        [[maybe_unused]] std::uint8_t pad_0x81d[0x3];
        
        // Datamap fields:
        // int32_t InputAlpha; // 0x0
        // Color InputColor; // 0x0
        // int32_t InputSkin; // 0x0
        // CUtlString add_attribute; // 0x7fffffff
        // void m_Ropes; // 0x598
        // Color rendercolor32; // 0x7fffffff
        // Color rendercolor; // 0x7fffffff
        // int32_t renderamt; // 0x7fffffff
        // Vector mins; // 0x7fffffff
        // Vector maxs; // 0x7fffffff
        // const char * skin; // 0x7fffffff
        // CUtlString bodygroups; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseModelEntity) == 0x820);
};
