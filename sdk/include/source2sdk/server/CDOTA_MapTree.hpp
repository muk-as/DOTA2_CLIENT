#pragma once
#include "source2sdk/server/CDOTA_BinaryObject.hpp"
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
    // Size: 0x4e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_MapTree : public server::CDOTA_BinaryObject
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4c0[0x20];
        // Datamap fields:
        // void InputCutDown; // 0x0
        // void InputCutDownForever; // 0x0
        // void InputGrowBack; // 0x0
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_MapTree) == 0x4e0);
};
