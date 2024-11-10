#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x4f0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CMapSharedEnvironment : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_targetMapName; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMapSharedEnvironment because it is not a standard-layout class
    static_assert(sizeof(CMapSharedEnvironment) == 0x4f0);
};
