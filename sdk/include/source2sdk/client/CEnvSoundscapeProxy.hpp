#pragma once
#include "source2sdk/client/CEnvSoundscape.hpp"
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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CEnvSoundscapeProxy : public client::CEnvSoundscape
    {
    public:
        CUtlSymbolLarge m_MainSoundscapeName; // 0x600        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvSoundscapeProxy because it is not a standard-layout class
    static_assert(sizeof(CEnvSoundscapeProxy) == 0x608);
};
