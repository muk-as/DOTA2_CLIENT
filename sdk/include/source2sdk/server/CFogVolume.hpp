#pragma once
#include "source2sdk/server/CServerOnlyModelEntity.hpp"
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
    // Size: 0x7d8
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CFogVolume : public server::CServerOnlyModelEntity
    {
    public:
        CUtlSymbolLarge m_fogName; // 0x7b0        
        CUtlSymbolLarge m_postProcessName; // 0x7b8        
        CUtlSymbolLarge m_colorCorrectionName; // 0x7c0        
        [[maybe_unused]] std::uint8_t pad_0x7c8[0x8]; // 0x7c8
        bool m_bDisabled; // 0x7d0        
        bool m_bInFogVolumesList; // 0x7d1        
        [[maybe_unused]] std::uint8_t pad_0x7d2[0x6];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CHandle< CBaseEntity > m_hFogController; // 0x7c8
        // CHandle< CBaseEntity > m_hColorCorrectionController; // 0x7cc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFogVolume because it is not a standard-layout class
    static_assert(sizeof(CFogVolume) == 0x7d8);
};
