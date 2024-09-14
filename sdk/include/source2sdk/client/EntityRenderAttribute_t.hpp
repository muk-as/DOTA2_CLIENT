#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CUtlStringToken m_ID"
    // static metadata: MNetworkVarNames "Vector4D m_Values"
    #pragma pack(push, 1)
    struct EntityRenderAttribute_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        CUtlStringToken m_ID; // 0x30        
        // metadata: MNetworkEnable
        Vector4D m_Values; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EntityRenderAttribute_t, m_ID) == 0x30);
    static_assert(offsetof(EntityRenderAttribute_t, m_Values) == 0x34);
    
    static_assert(sizeof(EntityRenderAttribute_t) == 0x48);
};
