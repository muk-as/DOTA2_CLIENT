#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCRenderMesh.hpp"
#include "source2sdk/worldrenderer/ObjectTypeFlags_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x88
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct SceneObject_t
    {
    public:
        uint32_t m_nObjectID; // 0x0        
        Vector4D m_vTransform[3]; // 0x4        
        float m_flFadeStartDistance; // 0x34        
        float m_flFadeEndDistance; // 0x38        
        Vector4D m_vTintColor; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4]; // 0x4c
        CUtlString m_skin; // 0x50        
        worldrenderer::ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58        
        Vector m_vLightingOrigin; // 0x5c        
        int16_t m_nOverlayRenderOrder; // 0x68        
        int16_t m_nLODOverride; // 0x6a        
        int32_t m_nCubeMapPrecomputedHandshake; // 0x6c        
        int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x74[0x4]; // 0x74
        // m_renderableModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_renderableModel;
        char m_renderableModel[0x8]; // 0x78        
        // m_renderable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCRenderMesh> m_renderable;
        char m_renderable[0x8]; // 0x80        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SceneObject_t, m_nObjectID) == 0x0);
    static_assert(offsetof(SceneObject_t, m_vTransform) == 0x4);
    static_assert(offsetof(SceneObject_t, m_flFadeStartDistance) == 0x34);
    static_assert(offsetof(SceneObject_t, m_flFadeEndDistance) == 0x38);
    static_assert(offsetof(SceneObject_t, m_vTintColor) == 0x3c);
    static_assert(offsetof(SceneObject_t, m_skin) == 0x50);
    static_assert(offsetof(SceneObject_t, m_nObjectTypeFlags) == 0x58);
    static_assert(offsetof(SceneObject_t, m_vLightingOrigin) == 0x5c);
    static_assert(offsetof(SceneObject_t, m_nOverlayRenderOrder) == 0x68);
    static_assert(offsetof(SceneObject_t, m_nLODOverride) == 0x6a);
    static_assert(offsetof(SceneObject_t, m_nCubeMapPrecomputedHandshake) == 0x6c);
    static_assert(offsetof(SceneObject_t, m_nLightProbeVolumePrecomputedHandshake) == 0x70);
    static_assert(offsetof(SceneObject_t, m_renderableModel) == 0x78);
    static_assert(offsetof(SceneObject_t, m_renderable) == 0x80);
    
    static_assert(sizeof(SceneObject_t) == 0x88);
};
