#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CClientAlphaProperty;
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
        // Size: 0x7d0
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
        class C_BaseModelEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CRenderComponent"
            // metadata: MNetworkAlias "CRenderComponent"
            // metadata: MNetworkTypeAlias "CRenderComponent"
            source2sdk::client::CRenderComponent* m_CRenderComponent; // 0x510            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CHitboxComponent"
            // metadata: MNetworkAlias "CHitboxComponent"
            // metadata: MNetworkTypeAlias "CHitboxComponent"
            source2sdk::client::CHitboxComponent m_CHitboxComponent; // 0x518            
            source2sdk::client::HitGroup_t m_LastHitGroup; // 0x540            
            uint8_t _pad0544[0x24]; // 0x544
            bool m_bInitModelEffects; // 0x568            
            bool m_bIsStaticProp; // 0x569            
            uint8_t _pad056a[0x2]; // 0x56a
            std::int32_t m_iViewerID; // 0x56c            
            std::int32_t m_iTeamVisibilityBitmask; // 0x570            
            std::int32_t m_nLastAddDecal; // 0x574            
            std::int32_t m_nDecalsAdded; // 0x578            
            std::int32_t m_iOldHealth; // 0x57c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderModeChanged"
            source2sdk::client::RenderMode_t m_nRenderMode; // 0x580            
            bool m_bVisibilityDirtyFlag; // 0x581            
            // metadata: MNetworkEnable
            source2sdk::client::RenderFx_t m_nRenderFX; // 0x582            
            bool m_bAllowFadeInView; // 0x583            
            uint8_t _pad0584[0x1c]; // 0x584
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnColorChanged"
            Color m_clrRender; // 0x5a0            
            uint8_t _pad05a4[0x4]; // 0x5a4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x68]; // 0x5a8            
            uint8_t _pad0610[0x18]; // 0x610
            // metadata: MNetworkEnable
            bool m_bRenderToCubemaps; // 0x628            
            // metadata: MNetworkEnable
            bool m_bNoInterpolate; // 0x629            
            uint8_t _pad062a[0x6]; // 0x62a
            // metadata: MNetworkEnable
            source2sdk::client::CCollisionProperty m_Collision; // 0x630            
            // metadata: MNetworkEnable
            source2sdk::client::CGlowProperty m_Glow; // 0x6e0            
            // metadata: MNetworkEnable
            float m_flGlowBackfaceMult; // 0x738            
            // metadata: MNetworkEnable
            float m_fadeMinDist; // 0x73c            
            // metadata: MNetworkEnable
            float m_fadeMaxDist; // 0x740            
            // metadata: MNetworkEnable
            float m_flFadeScale; // 0x744            
            // metadata: MNetworkEnable
            float m_flShadowStrength; // 0x748            
            // metadata: MNetworkEnable
            std::uint8_t m_nObjectCulling; // 0x74c            
            uint8_t _pad074d[0x3]; // 0x74d
            // metadata: MNetworkEnable
            std::int32_t m_nAddDecal; // 0x750            
            // metadata: MNetworkEnable
            Vector m_vDecalPosition; // 0x754            
            // metadata: MNetworkEnable
            Vector m_vDecalForwardAxis; // 0x760            
            // metadata: MNetworkEnable
            float m_flDecalHealBloodRate; // 0x76c            
            // metadata: MNetworkEnable
            float m_flDecalHealHeightRate; // 0x770            
            uint8_t _pad0774[0x4]; // 0x774
            // metadata: MNetworkEnable
            // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
            char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x778            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0x790            
            uint8_t _pad07b8[0x8]; // 0x7b8
            source2sdk::client::CClientAlphaProperty* m_pClientAlphaProperty; // 0x7c0            
            Color m_ClientOverrideTint; // 0x7c8            
            bool m_bUseClientOverrideTint; // 0x7cc            
            uint8_t _pad07cd[0x3];
            
            // Datamap fields:
            // int32_t InputAlpha; // 0x0
            // Color InputColor; // 0x0
            // int32_t InputSkin; // 0x0
            // CUtlString add_attribute; // 0x7fffffff
            // void m_Ropes; // 0x548
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
        
        static_assert(sizeof(source2sdk::client::C_BaseModelEntity) == 0x7d0);
    };
};
