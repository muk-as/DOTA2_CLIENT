#pragma once
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/worldrenderer/ClutterTile_t.hpp"
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
    // Size: 0xa0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ClutterSceneObject_t
    {
    public:
        mathlib_extended::AABB_t m_Bounds; // 0x0        
        worldrenderer::ObjectTypeFlags_t m_flags; // 0x18        
        int16_t m_nLayer; // 0x1c        
        [[maybe_unused]] std::uint8_t pad_0x1e[0x2]; // 0x1e
        // m_instancePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_instancePositions;
        char m_instancePositions[0x18]; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x38[0x18]; // 0x38
        // m_instanceScales has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_instanceScales;
        char m_instanceScales[0x18]; // 0x50        
        // m_instanceTintSrgb has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Color> m_instanceTintSrgb;
        char m_instanceTintSrgb[0x18]; // 0x68        
        // m_tiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<worldrenderer::ClutterTile_t> m_tiles;
        char m_tiles[0x18]; // 0x80        
        // m_renderableModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_renderableModel;
        char m_renderableModel[0x8]; // 0x98        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ClutterSceneObject_t, m_Bounds) == 0x0);
    static_assert(offsetof(ClutterSceneObject_t, m_flags) == 0x18);
    static_assert(offsetof(ClutterSceneObject_t, m_nLayer) == 0x1c);
    static_assert(offsetof(ClutterSceneObject_t, m_instancePositions) == 0x20);
    static_assert(offsetof(ClutterSceneObject_t, m_instanceScales) == 0x50);
    static_assert(offsetof(ClutterSceneObject_t, m_instanceTintSrgb) == 0x68);
    static_assert(offsetof(ClutterSceneObject_t, m_tiles) == 0x80);
    static_assert(offsetof(ClutterSceneObject_t, m_renderableModel) == 0x98);
    
    static_assert(sizeof(ClutterSceneObject_t) == 0xa0);
};
