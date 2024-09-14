#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4c0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointChildModifier : public server::CPointEntity
    {
    public:
        bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointChildModifier because it is not a standard-layout class
    static_assert(sizeof(CPointChildModifier) == 0x4c0);
};
