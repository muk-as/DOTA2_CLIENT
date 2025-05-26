#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEnvSoundscape.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x688
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvSoundscapeProxy : public source2sdk::client::CEnvSoundscape
        {
        public:
            CUtlSymbolLarge m_MainSoundscapeName; // 0x680            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSoundscapeProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CEnvSoundscapeProxy) == 0x688);
    };
};
