#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp_AreaAttack.hpp"

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
        // Size: 0x810
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_AreaAttack_Line : public source2sdk::client::CSurvivorsPowerUp_AreaAttack
        {
        public:
            Vector m_vCachedFacingDirection; // 0x800            
            bool m_bUseFacingDirection; // 0x80c            
            uint8_t _pad080d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_AreaAttack_Line because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_AreaAttack_Line) == 0x810);
    };
};
