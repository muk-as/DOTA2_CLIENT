#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CEnvSoundscape.hpp"

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
        // Size: 0x580
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvSoundscapeProxy : public source2sdk::server::CEnvSoundscape
        {
        public:
            CUtlSymbolLarge m_MainSoundscapeName; // 0x578            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSoundscapeProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvSoundscapeProxy) == 0x580);
    };
};
