#pragma once
#include "source2sdk/client/CShmupPathEvent.hpp"
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
    // Standard-layout class: true
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CShmupPathDefinition
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyDescription "Name of the path entity in the map."
        CUtlString m_strNameInMap; // 0x8        
        // metadata: MPropertyDescription "Speed in units/second."
        float m_flSpeed; // 0x10        
        Vector m_vPathOffset; // 0x14        
        // m_vecPathEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CShmupPathEvent> m_vecPathEvents;
        char m_vecPathEvents[0x18]; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x38[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupPathDefinition, m_strNameInMap) == 0x8);
    static_assert(offsetof(CShmupPathDefinition, m_flSpeed) == 0x10);
    static_assert(offsetof(CShmupPathDefinition, m_vPathOffset) == 0x14);
    static_assert(offsetof(CShmupPathDefinition, m_vecPathEvents) == 0x20);
    
    static_assert(sizeof(CShmupPathDefinition) == 0x40);
};
