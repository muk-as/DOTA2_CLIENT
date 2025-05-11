#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_ExpresserWithFollowup.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        #pragma pack(push, 1)
        class CMultiplayer_Expresser : public source2sdk::server::CAI_ExpresserWithFollowup
        {
        public:
            bool m_bAllowMultipleScenes; // 0x88            
            uint8_t _pad0089[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMultiplayer_Expresser because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMultiplayer_Expresser) == 0x90);
    };
};
