#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    class CFoWRevealerEntity : public server::CBaseEntity
    {
    public:
        uint32_t m_unViewerTeam; // 0x4b8        
        int32_t m_nVisionRange; // 0x4bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFoWRevealerEntity because it is not a standard-layout class
    static_assert(sizeof(CFoWRevealerEntity) == 0x4c0);
};
