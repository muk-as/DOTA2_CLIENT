#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeVertexMapBuild_t
        {
        public:
            CUtlString m_VertexMapName; // 0x_            
            std::uint32_t m_nNameHash; // 0x_            
            Color m_Color; // 0x_            
            float m_flVolumetricSolveStrength; // 0x_            
            std::int32_t m_nScaleSourceNode; // 0x_            
            // m_Weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_Weights;
            char m_Weights[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapBuild_t, m_VertexMapName) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapBuild_t, m_nNameHash) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapBuild_t, m_Color) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapBuild_t, m_flVolumetricSolveStrength) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapBuild_t, m_nScaleSourceNode) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapBuild_t, m_Weights) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::FeVertexMapBuild_t) == 0x_);
    };
};
