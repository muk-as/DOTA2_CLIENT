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
        struct ControlPointReference_t
        {
        public:
            // metadata: MPropertyFriendlyName "Control point"
            std::int32_t m_controlPointNameString; // 0x_            
            // metadata: MPropertyFriendlyName "Offset from control point"
            Vector m_vOffsetFromControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "Use local space offset"
            bool m_bOffsetInLocalSpace; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::ControlPointReference_t, m_controlPointNameString) == 0x_);
        static_assert(offsetof(source2sdk::particles::ControlPointReference_t, m_vOffsetFromControlPoint) == 0x_);
        static_assert(offsetof(source2sdk::particles::ControlPointReference_t, m_bOffsetInLocalSpace) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::ControlPointReference_t) == 0x_);
    };
};
