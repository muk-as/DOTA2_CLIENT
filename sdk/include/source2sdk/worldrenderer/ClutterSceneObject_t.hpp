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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ClutterSceneObject_t
        {
        public:
            source2sdk::mathlib_extended::AABB_t m_Bounds; // 0x_            
            source2sdk::worldrenderer::ObjectTypeFlags_t m_flags; // 0x_            
            std::int16_t m_nLayer; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_instancePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_instancePositions;
            char m_instancePositions[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_instanceScales has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_instanceScales;
            char m_instanceScales[0x_]; // 0x_            
            // m_instanceTintSrgb has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Color> m_instanceTintSrgb;
            char m_instanceTintSrgb[0x_]; // 0x_            
            // m_tiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::ClutterTile_t> m_tiles;
            char m_tiles[0x_]; // 0x_            
            // m_renderableModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_renderableModel;
            char m_renderableModel[0x_]; // 0x_            
            CUtlStringToken m_materialGroup; // 0x_            
            float m_flBeginCullSize; // 0x_            
            float m_flEndCullSize; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_Bounds) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_flags) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_nLayer) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_instancePositions) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_instanceScales) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_instanceTintSrgb) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_tiles) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_renderableModel) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_materialGroup) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_flBeginCullSize) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::ClutterSceneObject_t, m_flEndCullSize) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::ClutterSceneObject_t) == 0x_);
    };
};
