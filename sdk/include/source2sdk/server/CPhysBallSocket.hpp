#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"

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
        class CPhysBallSocket : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flJointFriction; // 0x_            
            bool m_bEnableSwingLimit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSwingLimit; // 0x_            
            bool m_bEnableTwistLimit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinTwistAngle; // 0x_            
            float m_flMaxTwistAngle; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysBallSocket because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysBallSocket) == 0x_);
    };
};
