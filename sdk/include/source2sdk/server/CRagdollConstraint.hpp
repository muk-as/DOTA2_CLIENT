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
        class CRagdollConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_xmin; // 0x_            
            float m_xmax; // 0x_            
            float m_ymin; // 0x_            
            float m_ymax; // 0x_            
            float m_zmin; // 0x_            
            float m_zmax; // 0x_            
            float m_xfriction; // 0x_            
            float m_yfriction; // 0x_            
            float m_zfriction; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollConstraint) == 0x_);
    };
};
