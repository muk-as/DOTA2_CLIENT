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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmIKEffector
        {
        public:
            std::int32_t m_nBodyIndex; // 0x0            
            bool m_bEnabled; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            Vector m_vTargetPosition; // 0x8            
            uint8_t _pad0014[0xc]; // 0x14
            Quaternion m_qTargetOrientation; // 0x20            
            float m_flWeight; // 0x30            
            uint8_t _pad0034[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_nBodyIndex) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_bEnabled) == 0x4);
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_vTargetPosition) == 0x8);
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_qTargetOrientation) == 0x20);
        static_assert(offsetof(source2sdk::animlib::CNmIKEffector, m_flWeight) == 0x30);
        
        static_assert(sizeof(source2sdk::animlib::CNmIKEffector) == 0x40);
    };
};
