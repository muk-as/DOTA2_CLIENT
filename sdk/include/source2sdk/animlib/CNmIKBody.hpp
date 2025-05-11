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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmIKBody
        {
        public:
            float m_flMass; // 0x0            
            Vector m_vLocalMassCenter; // 0x4            
            Vector m_vRadius; // 0x10            
            float m_flResistance; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmIKBody, m_flMass) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmIKBody, m_vLocalMassCenter) == 0x4);
        static_assert(offsetof(source2sdk::animlib::CNmIKBody, m_vRadius) == 0x10);
        static_assert(offsetof(source2sdk::animlib::CNmIKBody, m_flResistance) == 0x1c);
        
        static_assert(sizeof(source2sdk::animlib::CNmIKBody) == 0x20);
    };
};
