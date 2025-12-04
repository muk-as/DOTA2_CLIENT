#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/server/navproperties_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicNavigation : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            bool m_isOn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::navproperties_t m_navProperty; // 0x_            
            
            // Datamap fields:
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // void InputToggle; // 0x_
            // CUtlString navprop; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicNavigation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicNavigation) == 0x_);
    };
};
