#pragma once
#include "source2sdk/server/SimpleConstraintSoundProfile.hpp"
#include "source2sdk/server/VelocitySampler.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x88
    // Has VTable
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class ConstraintSoundInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        server::VelocitySampler m_vSampler; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        server::SimpleConstraintSoundProfile m_soundProfile; // 0x20        
        Vector m_forwardAxis; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4]; // 0x4c
        CUtlSymbolLarge m_iszTravelSoundFwd; // 0x50        
        CUtlSymbolLarge m_iszTravelSoundBack; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x60[0x8]; // 0x60
        CUtlSymbolLarge m_iszReversalSounds[3]; // 0x68        
        bool m_bPlayTravelSound; // 0x80        
        bool m_bPlayReversalSound; // 0x81        
        [[maybe_unused]] std::uint8_t pad_0x82[0x6];
        
        // Datamap fields:
        // CUtlSymbolLarge m_iszReversalSounds[0]; // 0x68
        // CUtlSymbolLarge m_iszReversalSounds[1]; // 0x70
        // CUtlSymbolLarge m_iszReversalSounds[2]; // 0x78
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ConstraintSoundInfo, m_vSampler) == 0x8);
    static_assert(offsetof(ConstraintSoundInfo, m_soundProfile) == 0x20);
    static_assert(offsetof(ConstraintSoundInfo, m_forwardAxis) == 0x40);
    static_assert(offsetof(ConstraintSoundInfo, m_iszTravelSoundFwd) == 0x50);
    static_assert(offsetof(ConstraintSoundInfo, m_iszTravelSoundBack) == 0x58);
    static_assert(offsetof(ConstraintSoundInfo, m_iszReversalSounds) == 0x68);
    static_assert(offsetof(ConstraintSoundInfo, m_bPlayTravelSound) == 0x80);
    static_assert(offsetof(ConstraintSoundInfo, m_bPlayReversalSound) == 0x81);
    
    static_assert(sizeof(ConstraintSoundInfo) == 0x88);
};
