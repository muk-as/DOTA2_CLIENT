#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x558
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CRagdollConstraint : public server::CPhysConstraint
    {
    public:
        float m_xmin; // 0x530        
        float m_xmax; // 0x534        
        float m_ymin; // 0x538        
        float m_ymax; // 0x53c        
        float m_zmin; // 0x540        
        float m_zmax; // 0x544        
        float m_xfriction; // 0x548        
        float m_yfriction; // 0x54c        
        float m_zfriction; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x554[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollConstraint because it is not a standard-layout class
    static_assert(sizeof(CRagdollConstraint) == 0x558);
};
