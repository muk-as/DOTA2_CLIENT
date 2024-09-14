#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    class C_FoWRevealerEntity : public client::C_BaseEntity
    {
    public:
        uint32_t m_unViewerTeam; // 0x538        
        int32_t m_nVisionRange; // 0x53c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FoWRevealerEntity because it is not a standard-layout class
    static_assert(sizeof(C_FoWRevealerEntity) == 0x540);
};
