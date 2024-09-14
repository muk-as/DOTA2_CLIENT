#pragma once
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x150
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorCommandMoveToRuneToTake
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        // m_hRune has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRune;
        char m_hRune[0x4]; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x14c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCommandMoveToRuneToTake, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCommandMoveToRuneToTake, m_hRune) == 0x148);
    
    static_assert(sizeof(CDOTABehaviorCommandMoveToRuneToTake) == 0x150);
};
