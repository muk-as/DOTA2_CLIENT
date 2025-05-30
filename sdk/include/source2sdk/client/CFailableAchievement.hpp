#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAchievement.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc8
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CFailableAchievement : public source2sdk::client::CBaseAchievement
        {
        public:
            bool m_bActivated; // 0xc0            
            bool m_bFailed; // 0xc1            
            uint8_t _pad00c2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFailableAchievement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CFailableAchievement) == 0xc8);
    };
};
