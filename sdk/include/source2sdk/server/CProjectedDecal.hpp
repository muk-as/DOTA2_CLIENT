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
    class CProjectedDecal : public server::CPointEntity
    {
    public:
        int32_t m_nTexture; // 0x4b8        
        float m_flDistance; // 0x4bc        
        
        // Datamap fields:
        // void CProjectedDecalTriggerDecal; // 0x0
        // void CProjectedDecalStaticDecal; // 0x0
        // void InputActivate; // 0x0
        // CUtlString texture; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CProjectedDecal because it is not a standard-layout class
    static_assert(sizeof(CProjectedDecal) == 0x4c0);
};
