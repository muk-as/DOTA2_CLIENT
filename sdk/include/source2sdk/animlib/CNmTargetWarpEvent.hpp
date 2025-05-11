#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/NmTargetWarpAlgorithm_t.hpp"
#include "source2sdk/animlib/NmTargetWarpRule_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTargetWarpEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            source2sdk::animlib::NmTargetWarpRule_t m_rule; // 0x18            
            source2sdk::animlib::NmTargetWarpAlgorithm_t m_algorithm; // 0x19            
            uint8_t _pad001a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTargetWarpEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTargetWarpEvent) == 0x20);
    };
};
