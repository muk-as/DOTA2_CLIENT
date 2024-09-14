#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/CSound.hpp"
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
    // Size: 0x1ec8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSoundEnt : public server::CPointEntity
    {
    public:
        int32_t m_iFreeSound; // 0x4b8        
        int32_t m_iActiveSound; // 0x4bc        
        int32_t m_cLastActiveSounds; // 0x4c0        
        server::CSound m_SoundPool[128]; // 0x4c4        
        [[maybe_unused]] std::uint8_t pad_0x1ec4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundEnt because it is not a standard-layout class
    static_assert(sizeof(CSoundEnt) == 0x1ec8);
};
