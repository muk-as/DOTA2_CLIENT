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
    // Size: 0x568
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysLength : public server::CPhysConstraint
    {
    public:
        Vector m_offset[2]; // 0x530        
        Vector m_vecAttach; // 0x548        
        float m_addLength; // 0x554        
        float m_minLength; // 0x558        
        float m_totalLength; // 0x55c        
        bool m_bEnableCollision; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysLength because it is not a standard-layout class
    static_assert(sizeof(CPhysLength) == 0x568);
};
