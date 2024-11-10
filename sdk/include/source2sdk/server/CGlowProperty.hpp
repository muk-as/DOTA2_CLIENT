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
    // Size: 0x58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int32 m_iGlowType"
    // static metadata: MNetworkVarNames "int32 m_iGlowTeam"
    // static metadata: MNetworkVarNames "int32 m_nGlowRange"
    // static metadata: MNetworkVarNames "int32 m_nGlowRangeMin"
    // static metadata: MNetworkVarNames "Color m_glowColorOverride"
    // static metadata: MNetworkVarNames "bool m_bFlashing"
    // static metadata: MNetworkVarNames "float m_flGlowTime"
    // static metadata: MNetworkVarNames "float m_flGlowStartTime"
    #pragma pack(push, 1)
    class CGlowProperty
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        Vector m_fGlowColor; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x14[0x1c]; // 0x14
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGlowTypeChanged"
        int32_t m_iGlowType; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_iGlowTeam; // 0x34        
        // metadata: MNetworkEnable
        int32_t m_nGlowRange; // 0x38        
        // metadata: MNetworkEnable
        int32_t m_nGlowRangeMin; // 0x3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnGlowColorChanged"
        Color m_glowColorOverride; // 0x40        
        // metadata: MNetworkEnable
        bool m_bFlashing; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3]; // 0x45
        // metadata: MNetworkEnable
        float m_flGlowTime; // 0x48        
        // metadata: MNetworkEnable
        float m_flGlowStartTime; // 0x4c        
        bool m_bGlowing; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGlowProperty, m_fGlowColor) == 0x8);
    static_assert(offsetof(CGlowProperty, m_iGlowType) == 0x30);
    static_assert(offsetof(CGlowProperty, m_iGlowTeam) == 0x34);
    static_assert(offsetof(CGlowProperty, m_nGlowRange) == 0x38);
    static_assert(offsetof(CGlowProperty, m_nGlowRangeMin) == 0x3c);
    static_assert(offsetof(CGlowProperty, m_glowColorOverride) == 0x40);
    static_assert(offsetof(CGlowProperty, m_bFlashing) == 0x44);
    static_assert(offsetof(CGlowProperty, m_flGlowTime) == 0x48);
    static_assert(offsetof(CGlowProperty, m_flGlowStartTime) == 0x4c);
    static_assert(offsetof(CGlowProperty, m_bGlowing) == 0x50);
    
    static_assert(sizeof(CGlowProperty) == 0x58);
};
