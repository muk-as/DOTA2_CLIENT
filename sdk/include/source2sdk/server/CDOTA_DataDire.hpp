#pragma once
#include "source2sdk/server/CDOTA_DataNonSpectator.hpp"
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
    // Size: 0x14a8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CDOTA_DataDire : public server::CDOTA_DataNonSpectator
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_DataDire) == 0x14a8);
};
