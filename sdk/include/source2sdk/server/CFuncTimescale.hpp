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
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncTimescale : public server::CBaseEntity
    {
    public:
        float m_flDesiredTimescale; // 0x4b8        
        float m_flAcceleration; // 0x4bc        
        float m_flMinBlendRate; // 0x4c0        
        float m_flBlendDeltaMultiplier; // 0x4c4        
        bool m_isStarted; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4c9[0x7];
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputReset; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTimescale because it is not a standard-layout class
    static_assert(sizeof(CFuncTimescale) == 0x4d0);
};
