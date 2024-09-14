#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointChildModifier : public client::C_PointEntity
    {
    public:
        bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointChildModifier because it is not a standard-layout class
    static_assert(sizeof(CPointChildModifier) == 0x540);
};
