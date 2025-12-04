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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvSoundscapeProxy : public source2sdk::client::CEnvSoundscape
        {
        public:
            CUtlSymbolLarge m_MainSoundscapeName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSoundscapeProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CEnvSoundscapeProxy) == 0x_);
    };
};
