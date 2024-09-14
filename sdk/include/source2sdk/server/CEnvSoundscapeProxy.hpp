#pragma once
#include "source2sdk/server/CEnvSoundscape.hpp"
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
    class CEnvSoundscapeProxy : public server::CEnvSoundscape
    {
    public:
        CUtlSymbolLarge m_MainSoundscapeName; // 0x550        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvSoundscapeProxy because it is not a standard-layout class
    static_assert(sizeof(CEnvSoundscapeProxy) == 0x558);
};
