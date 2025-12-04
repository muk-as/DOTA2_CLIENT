#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
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
        struct PointDefinition_t
        {
        public:
            // metadata: MPropertyFriendlyName "Control point"
            std::int32_t m_nControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "Use local coordinates for offset"
            bool m_bLocalCoords; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Offset from control point"
            Vector m_vOffset; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::PointDefinition_t, m_nControlPoint) == 0x_);
        static_assert(offsetof(source2sdk::particles::PointDefinition_t, m_bLocalCoords) == 0x_);
        static_assert(offsetof(source2sdk::particles::PointDefinition_t, m_vOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::PointDefinition_t) == 0x_);
    };
};
