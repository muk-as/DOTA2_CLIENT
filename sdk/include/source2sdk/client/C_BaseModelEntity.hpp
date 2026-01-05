#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/DecalRtEncoding_t.hpp"
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
        struct CDestructiblePartsComponent;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
        // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
        // static metadata: MNetworkVarNames "CDestructiblePartsComponent * m_pDestructiblePartsSystemComponent"
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
        // static metadata: MNetworkVarNames "uint32 m_bvDisabledHitGroups"
        #pragma pack(push, 1)
        class C_BaseModelEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNotSaved
            source2sdk::client::CRenderComponent* m_CRenderComponent; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CHitboxComponent"
            // metadata: MNetworkAlias "CHitboxComponent"
            // metadata: MNetworkTypeAlias "CHitboxComponent"
            source2sdk::client::CHitboxComponent m_CHitboxComponent; // 0x_            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x_            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x_            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x_            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x_            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x_            
            std::int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x_            
            std::int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x_            
            std::int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x_            
            std::int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x_            
            std::int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MPtrAutoallocate
            // metadata: MNetworkTypeAlias "CDestructiblePartsSystemComponent*"
            source2sdk::client::CDestructiblePartsComponent* m_pDestructiblePartsSystemComponent; // 0x_            
            source2sdk::client::HitGroup_t m_LastHitGroup; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CGlobalSymbol m_sLastDamageSourceName; // 0x_            
            VectorWS m_vLastDamagePosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            bool m_bInitModelEffects; // 0x_            
            // metadata: MNotSaved
            bool m_bDoingModelEffects; // 0x_            
            // metadata: MNotSaved
            bool m_bIsStaticProp; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iViewerID; // 0x_            
            std::int32_t m_iTeamVisibilityBitmask; // 0x_            
            // metadata: MNotSaved
            std::int32_t m_iOldHealth; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderModeChanged"
            source2sdk::client::RenderMode_t m_nRenderMode; // 0x_            
            bool m_bVisibilityDirtyFlag; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::RenderFx_t m_nRenderFX; // 0x_            
            bool m_bAllowFadeInView; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnColorChanged"
            Color m_clrRender; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bRenderToCubemaps; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNoInterpolate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::client::CCollisionProperty m_Collision; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::CGlowProperty m_Glow; // 0x_            
            // metadata: MNetworkEnable
            float m_flGlowBackfaceMult; // 0x_            
            // metadata: MNetworkEnable
            float m_fadeMinDist; // 0x_            
            // metadata: MNetworkEnable
            float m_fadeMaxDist; // 0x_            
            // metadata: MNetworkEnable
            float m_flFadeScale; // 0x_            
            // metadata: MNetworkEnable
            float m_flShadowStrength; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nObjectCulling; // 0x_            
            source2sdk::client::DecalRtEncoding_t m_nRequiredDecalRtEncoding; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::client::CClientAlphaProperty* m_pClientAlphaProperty; // 0x_            
            // metadata: MNotSaved
            Color m_ClientOverrideTint; // 0x_            
            // metadata: MNotSaved
            bool m_bUseClientOverrideTint; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnDisabledHitgroupsChanged"
            // metadata: MSaveOpsForField
            std::uint32_t m_bvDisabledHitGroups[1]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_bvDisabledHitGroups; // 0x_
            // void m_bodyGroupChoices; // 0x_
            // int32_t InputAlpha; // 0x_
            // Color InputColor; // 0x_
            // int32_t InputSkin; // 0x_
            // CUtlString add_attribute; // 0x_
            // void m_Ropes; // 0x_
            // Color rendercolor32; // 0x_
            // Color rendercolor; // 0x_
            // int32_t renderamt; // 0x_
            // Vector mins; // 0x_
            // Vector maxs; // 0x_
            // const char * skin; // 0x_
            // CUtlString bodygroups; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseModelEntity) == 0x_);
    };
};
