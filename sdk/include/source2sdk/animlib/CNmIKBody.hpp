#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
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
        class CNmIKBody
        {
        public:
            float m_flMass; // 0x_            
            Vector m_vLocalMassCenter; // 0x_            
            Vector m_vRadius; // 0x_            
            float m_flResistance; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmIKBody, m_flMass) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKBody, m_vLocalMassCenter) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKBody, m_vRadius) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmIKBody, m_flResistance) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmIKBody) == 0x_);
    };
};
