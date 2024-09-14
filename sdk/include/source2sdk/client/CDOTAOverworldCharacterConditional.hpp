#pragma once
#include "source2sdk/client/EOverworldCharacterVisibility.hpp"
#include "source2sdk/client/OverworldNodeID_t.hpp"
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAOverworldCharacterConditional
    {
    public:
        client::EOverworldCharacterVisibility m_eConditionFlags; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::OverworldNodeID_t> m_vecNodes;
        char m_vecNodes[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldCharacterConditional, m_eConditionFlags) == 0x0);
    static_assert(offsetof(CDOTAOverworldCharacterConditional, m_vecNodes) == 0x8);
    
    static_assert(sizeof(CDOTAOverworldCharacterConditional) == 0x20);
};
