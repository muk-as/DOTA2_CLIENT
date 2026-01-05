#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/MovementGaitId_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
        class CNavLinkConditions
        {
        public:
            source2sdk::modellib::MovementGaitId_t m_sMovementGait; // 0x_            
            float m_flFacingAlignmentDegrees; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNavLinkConditions, m_sMovementGait) == 0x_);
        static_assert(offsetof(source2sdk::client::CNavLinkConditions, m_flFacingAlignmentDegrees) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CNavLinkConditions) == 0x_);
    };
};
