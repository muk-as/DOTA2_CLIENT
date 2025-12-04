#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/DampingSpeedFunction.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Damping"
        #pragma pack(push, 1)
        class CAnimInputDamping
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Speed Function"
            source2sdk::animgraphlib::DampingSpeedFunction m_speedFunction; // 0x_            
            // metadata: MPropertyFriendlyName "Speed Scale"
            float m_fSpeedScale; // 0x_            
            // metadata: MPropertyFriendlyName "Falling Speed Scale"
            float m_fFallingSpeedScale; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimInputDamping, m_speedFunction) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimInputDamping, m_fSpeedScale) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimInputDamping, m_fFallingSpeedScale) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimInputDamping) == 0x_);
    };
};
