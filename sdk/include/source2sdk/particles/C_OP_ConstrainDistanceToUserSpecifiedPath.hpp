#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particles/PointDefinitionWithTimeValues_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ConstrainDistanceToUserSpecifiedPath : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "minimum distance"
            float m_fMinDistance; // 0x1c0            
            // metadata: MPropertyFriendlyName "maximum distance"
            float m_flMaxDistance; // 0x1c4            
            // metadata: MPropertyFriendlyName "Time scale"
            float m_flTimeScale; // 0x1c8            
            // metadata: MPropertyFriendlyName "Treat path as a loop"
            bool m_bLoopedPath; // 0x1cc            
            uint8_t _pad01cd[0x3]; // 0x1cd
            // metadata: MPropertyFriendlyName "path points"
            // m_pointList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::PointDefinitionWithTimeValues_t> m_pointList;
            char m_pointList[0x18]; // 0x1d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ConstrainDistanceToUserSpecifiedPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ConstrainDistanceToUserSpecifiedPath) == 0x1e8);
    };
};
