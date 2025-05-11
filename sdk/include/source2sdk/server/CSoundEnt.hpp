#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/CSound.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ee8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundEnt : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_iFreeSound; // 0x4d8            
            std::int32_t m_iActiveSound; // 0x4dc            
            std::int32_t m_cLastActiveSounds; // 0x4e0            
            source2sdk::server::CSound m_SoundPool[128]; // 0x4e4            
            uint8_t _pad1ee4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEnt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEnt) == 0x1ee8);
    };
};
