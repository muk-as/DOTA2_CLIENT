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
        // Size: 0x578
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CRagdollConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_xmin; // 0x550            
            float m_xmax; // 0x554            
            float m_ymin; // 0x558            
            float m_ymax; // 0x55c            
            float m_zmin; // 0x560            
            float m_zmax; // 0x564            
            float m_xfriction; // 0x568            
            float m_yfriction; // 0x56c            
            float m_zfriction; // 0x570            
            uint8_t _pad0574[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollConstraint) == 0x578);
    };
};
