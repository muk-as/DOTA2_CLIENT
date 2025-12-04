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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct OldFeEdge_t
        {
        public:
            float m_flK[3]; // 0x_            
            float invA; // 0x_            
            float t; // 0x_            
            float flThetaRelaxed; // 0x_            
            float flThetaFactor; // 0x_            
            float c01; // 0x_            
            float c02; // 0x_            
            float c03; // 0x_            
            float c04; // 0x_            
            float flAxialModelDist; // 0x_            
            float flAxialModelWeights[4]; // 0x_            
            std::uint16_t m_nNode[4]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, m_flK) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, invA) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, t) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, flThetaRelaxed) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, flThetaFactor) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, c01) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, c02) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, c03) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, c04) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, flAxialModelDist) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, flAxialModelWeights) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::OldFeEdge_t, m_nNode) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::OldFeEdge_t) == 0x_);
    };
};
