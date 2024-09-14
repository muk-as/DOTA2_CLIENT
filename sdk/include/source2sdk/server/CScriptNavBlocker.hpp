#pragma once
#include "source2sdk/server/CFuncNavBlocker.hpp"
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
    // Size: 0x7a8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CScriptNavBlocker : public server::CFuncNavBlocker
    {
    public:
        Vector m_vExtent; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x7a4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptNavBlocker because it is not a standard-layout class
    static_assert(sizeof(CScriptNavBlocker) == 0x7a8);
};
