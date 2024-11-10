#pragma once
#include "source2sdk/server/CBaseToggle.hpp"
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
    // Size: 0x858
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CBasePlatTrain : public server::CBaseToggle
    {
    public:
        CUtlSymbolLarge m_NoiseMoving; // 0x830        
        CUtlSymbolLarge m_NoiseArrived; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x840[0x8]; // 0x840
        float m_volume; // 0x848        
        float m_flTWidth; // 0x84c        
        float m_flTLength; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x854[0x4];
        
        // Datamap fields:
        // void m_pMovementSound; // 0x840
        // float rotation; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlatTrain because it is not a standard-layout class
    static_assert(sizeof(CBasePlatTrain) == 0x858);
};
