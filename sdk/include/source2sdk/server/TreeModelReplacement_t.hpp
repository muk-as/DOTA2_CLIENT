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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x238
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nBinaryObjectID"
    // static metadata: MNetworkVarNames "char m_szModel"
    #pragma pack(push, 1)
    struct TreeModelReplacement_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        int32_t m_nBinaryObjectID; // 0x30        
        // metadata: MNetworkEnable
        char m_szModel[512]; // 0x34        
        // metadata: MNetworkDisable
        int32_t m_nChangeToken; // 0x234        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TreeModelReplacement_t, m_nBinaryObjectID) == 0x30);
    static_assert(offsetof(TreeModelReplacement_t, m_szModel) == 0x34);
    static_assert(offsetof(TreeModelReplacement_t, m_nChangeToken) == 0x234);
    
    static_assert(sizeof(TreeModelReplacement_t) == 0x238);
};
