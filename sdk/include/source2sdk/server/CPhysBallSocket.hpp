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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x568
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysBallSocket : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flJointFriction; // 0x550            
            bool m_bEnableSwingLimit; // 0x554            
            uint8_t _pad0555[0x3]; // 0x555
            float m_flSwingLimit; // 0x558            
            bool m_bEnableTwistLimit; // 0x55c            
            uint8_t _pad055d[0x3]; // 0x55d
            float m_flMinTwistAngle; // 0x560            
            float m_flMaxTwistAngle; // 0x564            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysBallSocket because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysBallSocket) == 0x568);
    };
};
