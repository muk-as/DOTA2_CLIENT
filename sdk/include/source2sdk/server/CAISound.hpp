#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/SoundFlags_t.hpp"
#include "source2sdk/server/SoundTypes_t.hpp"
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
    #pragma pack(push, 1)
    class CAISound : public server::CPointEntity
    {
    public:
        server::SoundTypes_t m_iSoundType; // 0x4e0        
        server::SoundFlags_t m_iSoundFlags; // 0x4e2        
        int32_t m_iVolume; // 0x4e4        
        int32_t m_iSoundIndex; // 0x4e8        
        float m_flDuration; // 0x4ec        
        CUtlSymbolLarge m_iszProxyEntityName; // 0x4f0        
        
        // Datamap fields:
        // int32_t InputInsertSound; // 0x0
        // void InputEmitAISound; // 0x0
        // void InputStopAISound; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAISound because it is not a standard-layout class
    static_assert(sizeof(CAISound) == 0x4f8);
};
