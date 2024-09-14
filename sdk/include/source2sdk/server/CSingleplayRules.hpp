#pragma once
#include "source2sdk/server/CGameRules.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CSingleplayRules : public server::CGameRules
    {
    public:
        bool m_bSinglePlayerGameEnding; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSingleplayRules because it is not a standard-layout class
    static_assert(sizeof(CSingleplayRules) == 0xc8);
};
