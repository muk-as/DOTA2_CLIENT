#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4f8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvInstructorVRHint : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_iszName; // 0x4b8        
        CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c0        
        int32_t m_iTimeout; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4cc[0x4]; // 0x4cc
        CUtlSymbolLarge m_iszCaption; // 0x4d0        
        CUtlSymbolLarge m_iszStartSound; // 0x4d8        
        int32_t m_iLayoutFileType; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4]; // 0x4e4
        CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4e8        
        int32_t m_iAttachType; // 0x4f0        
        float m_flHeightOffset; // 0x4f4        
        
        // Datamap fields:
        // CUtlSymbolLarge InputShowHint; // 0x0
        // void InputEndHint; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvInstructorVRHint because it is not a standard-layout class
    static_assert(sizeof(CEnvInstructorVRHint) == 0x4f8);
};
