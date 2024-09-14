#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Standard-layout class: false
    // Size: 0x558
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_iszStackName"
    // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
    // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
    // static metadata: MNetworkVarNames "int m_iOpvarIndex"
    // static metadata: MNetworkVarNames "bool m_bUseAutoCompare"
    #pragma pack(push, 1)
    class C_SoundOpvarSetPointBase : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszStackName; // 0x538        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszOperatorName; // 0x540        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszOpvarName; // 0x548        
        // metadata: MNetworkEnable
        int32_t m_iOpvarIndex; // 0x550        
        // metadata: MNetworkEnable
        bool m_bUseAutoCompare; // 0x554        
        [[maybe_unused]] std::uint8_t pad_0x555[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundOpvarSetPointBase because it is not a standard-layout class
    static_assert(sizeof(C_SoundOpvarSetPointBase) == 0x558);
};
