#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCRenderMesh.hpp"
#include "source2sdk/worldrenderer/ObjectTypeFlags_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SceneObject_t
        {
        public:
            std::uint32_t m_nObjectID; // 0x_            
            Vector4D m_vTransform[3]; // 0x_            
            float m_flFadeStartDistance; // 0x_            
            float m_flFadeEndDistance; // 0x_            
            Vector4D m_vTintColor; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_skin; // 0x_            
            source2sdk::worldrenderer::ObjectTypeFlags_t m_nObjectTypeFlags; // 0x_            
            Vector m_vLightingOrigin; // 0x_            
            std::int16_t m_nOverlayRenderOrder; // 0x_            
            std::int16_t m_nLODOverride; // 0x_            
            std::int32_t m_nCubeMapPrecomputedHandshake; // 0x_            
            std::int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_renderableModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_renderableModel;
            char m_renderableModel[0x_]; // 0x_            
            // m_renderable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCRenderMesh> m_renderable;
            char m_renderable[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_nObjectID) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_vTransform) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_flFadeStartDistance) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_flFadeEndDistance) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_vTintColor) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_skin) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_nObjectTypeFlags) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_vLightingOrigin) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_nOverlayRenderOrder) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_nLODOverride) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_nCubeMapPrecomputedHandshake) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_nLightProbeVolumePrecomputedHandshake) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_renderableModel) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::SceneObject_t, m_renderable) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::SceneObject_t) == 0x_);
    };
};
