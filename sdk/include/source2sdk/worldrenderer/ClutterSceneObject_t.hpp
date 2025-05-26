#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/worldrenderer/ClutterTile_t.hpp"
#include "source2sdk/worldrenderer/ObjectTypeFlags_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xb0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ClutterSceneObject_t
        {
        public:
            source2sdk::mathlib_extended::AABB_t m_Bounds; // 0x0            
            source2sdk::worldrenderer::ObjectTypeFlags_t m_flags; // 0x18            
            std::int16_t m_nLayer; // 0x1c            
            uint8_t _pad001e[0x2]; // 0x1e
            // m_instancePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_instancePositions;
            char m_instancePositions[0x18]; // 0x20            
            uint8_t _pad0038[0x18]; // 0x38
            // m_instanceScales has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_instanceScales;
            char m_instanceScales[0x18]; // 0x50            
            // m_instanceTintSrgb has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Color> m_instanceTintSrgb;
            char m_instanceTintSrgb[0x18]; // 0x68            
            // m_tiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::ClutterTile_t> m_tiles;
            char m_tiles[0x18]; // 0x80            
            // m_renderableModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_renderableModel;
            char m_renderableModel[0x8]; // 0x98            
            CUtlStringToken m_materialGroup; // 0xa0            
            float m_flBeginCullSize; // 0xa4            
            float m_flEndCullSize; // 0xa8            
            uint8_t _pad00ac[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_Bounds) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_flags) == 0x18);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_nLayer) == 0x1c);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_instancePositions) == 0x20);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_instanceScales) == 0x50);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_instanceTintSrgb) == 0x68);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_tiles) == 0x80);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_renderableModel) == 0x98);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_materialGroup) == 0xa0);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_flBeginCullSize) == 0xa4);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_flEndCullSize) == 0xa8);
        
        static_assert(sizeof(source2sdk::worldrenderer::ClutterSceneObject_t) == 0xb0);
    };
};
