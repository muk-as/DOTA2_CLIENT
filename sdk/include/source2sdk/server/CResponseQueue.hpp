#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_Expresser;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    #pragma pack(push, 1)
    class CResponseQueue
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x48]; // 0x0
        // m_ExpresserTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CAI_Expresser*> m_ExpresserTargets;
        char m_ExpresserTargets[0x18]; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CResponseQueue, m_ExpresserTargets) == 0x48);
    
    static_assert(sizeof(CResponseQueue) == 0x60);
};
