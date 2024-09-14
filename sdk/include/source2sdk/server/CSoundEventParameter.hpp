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
    class CSoundEventParameter : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x8]; // 0x4b8
        CUtlSymbolLarge m_iszParamName; // 0x4c0        
        float m_flFloatValue; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4cc[0x4];
        
        // Datamap fields:
        // uint64_t InputSetEventGuid; // 0x0
        // CUtlSymbolLarge InputSetParamName; // 0x0
        // float InputSetFloatValue; // 0x0
        // void m_nGUID; // 0x4b8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundEventParameter because it is not a standard-layout class
    static_assert(sizeof(CSoundEventParameter) == 0x4d0);
};
