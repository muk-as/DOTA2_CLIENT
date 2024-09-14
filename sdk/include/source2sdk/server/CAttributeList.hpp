#pragma once
#include "source2sdk/server/CEconItemAttribute.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAttributeManager;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CEconItemAttribute m_Attributes"
    #pragma pack(push, 1)
    class CAttributeList
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
        // m_Attributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::CEconItemAttribute> m_Attributes;
        char m_Attributes[0x50]; // 0x8        
        server::CAttributeManager* m_pManager; // 0x58        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAttributeList, m_Attributes) == 0x8);
    static_assert(offsetof(CAttributeList, m_pManager) == 0x58);
    
    static_assert(sizeof(CAttributeList) == 0x60);
};
